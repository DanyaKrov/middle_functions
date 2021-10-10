#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_covert_num(long long num, int ss)
{
    if (ss < 2 || ss > 10)
        return -1;
    else if (num < 0)
        return itc_rev_not(num * -1, ss) * -1;
    else
        return itc_rev_not(num, ss);
}
