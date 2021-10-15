#include <iostream>
#include "middle.h"

using namespace std;

long long itc_bin_num(long long number)
{
    if (number < 0)
        number *= -1;
    return itc_not(number, 2);
}
