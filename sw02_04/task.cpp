#include <iostream>
#include <cstdint>  //for uint32_t
#include <algorithm> //for std::sort

using namespace std;

template <typename values>
values calcAVGofField(values * pointerOnField, uint32_t numElements)
{
double Average;
for (uint32_t i=0; i<numElements; i++)
{
	Average=Average+(double)pointerOnField[i];
}
Average/=(double)numElements;

return((values)Average);
}

int main() {
    int16_t array[6]={232,4512,4551,20187,888,15124};
    //sort the array with std::sort
    std::sort(&array[0]+3,&array[0]+6);
	int16_t Average=0;

	Average=calcAVGofField( &array[0], 6);
    std::cout << "Random number"+ std::to_string((float)(rand()) / (float)(rand())) << std::endl;
    cout << "Average: " << to_string(Average) << "\n";
    return 0;
}