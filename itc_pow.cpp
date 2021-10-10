#include <iostream>
#include "middle.h"

using namespace std;

long long itc_pow(int number, int number2)
{
    int num = 1;
    while (number > 0){
        num *= number2;
        number -= 1;
    }
    return num;
}
