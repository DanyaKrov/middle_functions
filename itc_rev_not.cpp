#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_not(long long num, int type)
{
    int NumInTw = 0;
    int i = 0;
    while (num >= 10){
            NumInTw += itc_pow(i, type) * (num % 10);
            i++;
            num /= 10;
        }
    NumInTw += itc_pow(i, type) * (num % 10);
    return NumInTw;
}
