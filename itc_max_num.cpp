#include <iostream>
#include "middle.h"

using namespace std;

int itc_max_num(long long number)
{
    int max1 = number % 10;
    while (number > 10){
        number /= 10;
        if (max1 < number % 10)
            max1 = number % 10;
    }
    return max1;
}
