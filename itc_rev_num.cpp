#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_num(long long number)
{
    int i = 0;
    if (number == 9223372036854775808 || number == -9223372036854775809)
        return -1;
    if (number < 0)
        number *= -1;
    for (long long num = number; number % 10 == 0; num = num / 10){
        number = num;
        if (31 <= i)
            break;
        i++;
    }
    for (long long num = number; number % 10 == 0; num = num / 10){
        number = num;
        if (31 <= i)
            break;
        i++;
    }
    return itc_len_num(number);
}
