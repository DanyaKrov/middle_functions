#include <iostream>
#include "middle.h"

using namespace std;

long long itc_not(long long num, int type)
{
    long long NumInTw = 0;
    int i = 0;
    while (num > type - 1){
            if (num % type != 0)
                NumInTw = (num % type) * itc_pow(i, 10);
            num /= type;
            i++;
        }
    NumInTw += num * itc_pow(i, 10);
    return NumInTw;
}
