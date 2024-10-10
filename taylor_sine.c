#include "taylor_sine.h"
#include <assert.h>
#include <stdio.h>
#define PI 3.14159265358979

double taylor_sine(double x, int n) {
  assert(n > 0);
    int div = x / (2 * PI);
    double num = x - (double)div * 2 * PI;
    double part = num;
    double output = part; 
    for(int i = 1; i < n; i++){
        part *= -1;
        part = part*num;
        part = part/(i*2+1);
        part = part*num;
        part = part/(i*2);
        output += part;
    }
    return output;
}

/*
int main(){
  printf("%lf", taylor_sine(PI/4, 11));
  return 0;
}
*/