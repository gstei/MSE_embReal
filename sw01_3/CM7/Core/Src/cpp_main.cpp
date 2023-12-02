#include "cpp_main.h"
#include "main.h"

void cpp_main(){
	while(1){

		HAL_Delay(500);
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	}
}

