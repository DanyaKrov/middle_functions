#include <iostream>
#include "middle.h"

using namespace std;

int itc_multi_num(long long number)
{
    if (number < 0)
        number *= -1;
    int sum = number % 10;
    while (number >= 10){
        number /= 10;
        sum *= number % 10;
    }
    return sum;
}
