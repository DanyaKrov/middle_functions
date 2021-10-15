#include <iostream>
#include "middle.h"

using namespace std;

long long itc_oct_num(long long number)
{
    if (number < 0)
        number *= -1;
    return itc_not(number, 8);
}
