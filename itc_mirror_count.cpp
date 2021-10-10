#include <iostream>
#include "middle.h"

using namespace std;

int itc_mirror_count(long long number)
{
    int i = 1, count = 0;
    while (i < number){
            int num = itc_pal_num(i);
            if (num == i){count ++;}
            i ++;
    }
    return count;
}
