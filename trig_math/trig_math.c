#include "trig_math.h"
#include <stdio.h>
#define PI 3.14
int cos_(int deg){
    int result = 0;
    int n = 100;
    int term = 1;
    while(n){
        term = pow_(-1,n) * pow_(deg_to_rad(deg),(2*n)) / (2*n);
        result += term;
        n--;
    }
    return result;
}
int sin_(int deg);
int tan_(int deg);
int cot_(int deg);
int arc_cos_(int a);
int arc_sin_(int a);
int arc_tan_(int a);
int arc_cot_(int a);
int rad_to_deg(int rad);
int deg_to_rad(int deg){
    return deg * (PI / 180);
}


