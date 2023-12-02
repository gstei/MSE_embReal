#include "cpp_main.h"
#include "main.h"
#include "NoneBlockSystemTickDelay.h"
#include "cstdint"

enum class states_sm1 {INIT, BLINK_1HZ, BLINK_3HZ };
enum class states_sm2  {INIT, BLINK_1HZ, BLINK_2HZ };

enum states_sm1 statemachine_1 = states_sm1::INIT;
enum states_sm2 statemachine_2 = states_sm2::INIT;

//remark: the NoneBlockSystemTickDelay__DelayNoneBlockingInit is still a c implementation. A CPP Class would be much better, this will follow on day 2
const uint8_t BLINKTIMES = 5;

uint32_t DelayLED1=0;
uint32_t TimerTickstartLED1=0;
uint32_t DelayLED2=0;
uint32_t TimerTickstartLED2=0;



void execStatemachine1(){
	static uint8_t count=0;
	switch(statemachine_1){
	case states_sm1::INIT:
		count = 0;
		DelayLED1=1000; //wait 1000ms
		TimerTickstartLED1=0;

		NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED1,&DelayLED1);
		HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
		count = 1;
		statemachine_1 = states_sm1::BLINK_1HZ;

		break;
	case states_sm1::BLINK_1HZ:
		if(NoneBlockSystemTickDelay__DelayNoneBlockingCheckExpiration(TimerTickstartLED1, DelayLED1)){
			//delay is expired
			if(count>((BLINKTIMES*2)-1)){
				//stop BLINK_1HZ move to next state
				  DelayLED1=333;

				  statemachine_1 = states_sm1::BLINK_3HZ;
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED1,&DelayLED1);
				  HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
				  count = 1;
			}
			else{ //reinitialise for a another BLINK_1HZ and toggle led
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED1,&DelayLED1);
				  HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
				  count++;
			}
		}
		break;

	case states_sm1::BLINK_3HZ:
		if(NoneBlockSystemTickDelay__DelayNoneBlockingCheckExpiration(TimerTickstartLED1, DelayLED1)){
			//delay is expired
			if(count>((BLINKTIMES*2)-1)){
				//stop BLINK_1HZ move to next state
				  DelayLED1=1000;

				  statemachine_1 = states_sm1::BLINK_1HZ;
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED1,&DelayLED1);
				  HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
				  count = 1;
			}
			else{ //reinitialise for a another BLINK_1HZ and toggle led
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED1,&DelayLED1);
				  HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
				  count++;
			}
		}
		break;

	default:
		break;
	}
}

void execStatemachine2(){
	static uint8_t count=0;
	switch(statemachine_2){
	case states_sm2::INIT:
		count = 0;
		DelayLED2=1000;
		TimerTickstartLED2=0;

		NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED2,&DelayLED2);
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		count = 1;
		statemachine_2 = states_sm2::BLINK_1HZ;
		break;
	case states_sm2::BLINK_1HZ:
		if(NoneBlockSystemTickDelay__DelayNoneBlockingCheckExpiration(TimerTickstartLED2, DelayLED2)){
			//delay is expired
			if(count>((BLINKTIMES*2)-1)){
				//stop BLINK_1HZ move to next state
				  DelayLED2=500;
				  statemachine_2 = states_sm2::BLINK_2HZ;
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED2,&DelayLED2);
				  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				  count = 1;
			}
			else{ //reinitialise for a another BLINK_1HZ and toggle led
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED2,&DelayLED2);
				  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				  count++;
			}
		}
		break;
	case states_sm2::BLINK_2HZ:
		if(NoneBlockSystemTickDelay__DelayNoneBlockingCheckExpiration(TimerTickstartLED2, DelayLED2)){
			//delay is expired
			if(count>((BLINKTIMES*2)-1)){
				//stop BLINK_1HZ move to next state
				  DelayLED2=1000;
				  statemachine_2 = states_sm2::BLINK_1HZ;
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED2,&DelayLED2);
				  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				  count = 1;
			}
			else{ //reinitialise for a another BLINK_1HZ and toggle led
				  NoneBlockSystemTickDelay__DelayNoneBlockingInit(&TimerTickstartLED2,&DelayLED2);
				  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				  count++;
			}
		}
		break;
	default:
		break;
	}
}


void cpp_main(){

	while(1){

		execStatemachine1();
		execStatemachine2();
	}
}

