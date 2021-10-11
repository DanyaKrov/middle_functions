#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_simple_max_num(long long number)
{
    int max = itc_max_num(number);
    int kol_max = 0;
    int max1 = -100;
    while (number >= 10){
        if (max1 < number % 10 && number % 10 != max)
            max1 = number % 10;
        number /= 10;
        if (max1 == max)
            kol_max++;
    }
    if (kol_max >= 2)
        max1 = -1;
    return max1;
}
