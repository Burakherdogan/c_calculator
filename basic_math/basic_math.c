#include "basic_math.h"
#include <stdio.h>

double add (double a, double b){
    return a+b;
}
double sub (double a, double b){
    return a-b;
}
double mult(double a, double b){
    return a*b;
}
double div (double a, double b){
    if(b==0){
        printf("divide by zero not allowed\n");
        return 0;
    }
    return a/b;
}
double max (double a, double b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
}
double min (double a, double b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}