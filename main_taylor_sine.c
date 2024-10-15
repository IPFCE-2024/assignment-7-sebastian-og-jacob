#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

int main(void){
   
    double num;
    int degree;
    printf("Indtast værdi:\n");
    scanf("%lf",&num);
    scanf("%d",&degree);
    printf("Vores version %lf math version %lf",taylor_sine(num,degree), sin(num));

    return 0;
}

// For degree > 8 har vi en præcision på 6 decimaler
// For degree > 4 flipper fortegnet ikke for hver anden degree 
// For degree = 1 Finder vi num fordi taylorfunktionen netop tager input x. 