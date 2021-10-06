#include <iostream>
#include "middle.h"

using namespace std;

int itc_null_count(long long number)
{
    int count = 0;
    if (number % 10 == 0){count ++;}
    while (number >= 10){
        number /= 10;
        if (number % 10 == 0){count ++;}
    }
    return count;
}
