#include <iostream>
#include "middle.h"

using namespace std;

int itc_max_num(long long number)
{
    if (number < 0)
        number *= -1;
    int max1 = number % 10;
    while (number >= 10){
        number /= 10;
