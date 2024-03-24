#include "complex_math.h"
//recursive
int fact(int a){
    if(a==1){
        return 1;
    }else if (a>1)
    {
        return a * fact(a-1);
    }
    return 1;
}
//recursive 
int pow_(int a, int b){
    if(b==0){
        return 1;
    }
    return a*pow_(a,b-1);
}

double square_root(double a){
    int i = 1;
    while(a*10000>=i*i){
        i++;
    }
    return ((double)(i))/100.0;
}
//test
int log_(int a){
    int count = 0;
    while(a!=1){
        a=a/2;
        ++count;
    } 
    return count;
}
