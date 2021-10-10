#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_num(long long number)
{
    return itc_len_num(itc_pal_num(number)) + 1;
}
