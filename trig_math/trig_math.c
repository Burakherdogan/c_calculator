#include "trig_math.h"
#include <math.h>
double cos_(double deg){
    cos(deg_to_rad(deg));
}
int sin_(int deg);
int tan_(int deg);
int cot_(int deg);
int arc_cos_(int a);
int arc_sin_(int a);
int arc_tan_(int a);
int arc_cot_(int a);
int rad_to_deg(int rad);
double deg_to_rad(double deg){
    return deg * (PI / 180);
}


