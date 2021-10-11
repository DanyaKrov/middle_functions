#include <iostream>
#include "middle.h"

using namespace std;

int itc_len_num(long long number)
{
    int kol_10 = 0;
    while (number >= 10){
        kol_10 += 1;
        number /= 10;
    }
    return kol_10 + 1;
}
