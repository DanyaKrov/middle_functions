#include <iostream>
#include "middle.h"

using namespace std;

bool itc_mirror_num(long long number)
{
    int num = itc_rev_num(number);
    if (num == number){return true;}
    if (num != number){return false;}
}
