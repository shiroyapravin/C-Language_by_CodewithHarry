//Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
#include<stdio.h>

int main()
{
    int x=2, y=3, z=3, k=1;
    float e = 3*x/y - z+k; //(3*x/y) - z+k --> (6/y) - z+k --> (2) - 3 + k --> -1 + k --> 0

    printf("The value of e is %f", e);
    return 0;
}