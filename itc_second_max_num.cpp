#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number)
{
    if (number < 0)
        number *= -1;
    if (itc_len_num(number) == 1)
        return -1;
    int x = itc_max_num(number);
    for (long long i = 1; i < number * 10; i = i * 10){
        if (number % (i * 10) / i == x){
            number -= x * i;
            return itc_max_num(number);
        }
    }
}
