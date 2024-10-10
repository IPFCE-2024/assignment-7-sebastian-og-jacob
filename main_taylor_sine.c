#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

int main(void){
    int num;
    scanf("%l",&num);
    printf("Vores version %lf math version %lf",taylor_sine(num,100), sin(num));

    return 0;
}