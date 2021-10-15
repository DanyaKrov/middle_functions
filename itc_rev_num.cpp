#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_num(long long number)
{
    if (number == 9223372036854775808 || number == -9223372036854775809)
        return -1;
    if (number < 0)
        number *= -1;
    return itc_len_num(itc_pal_num(number));
}
