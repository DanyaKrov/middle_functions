#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number)
{
    int max = itc_max_num(number);
    int max1 = -100;
    while (number >= 10){
        if (max1 < number % 10 && number % 10 != max)
            max1 = number % 10;
        number /= 10;
    }
    return max1;
}
