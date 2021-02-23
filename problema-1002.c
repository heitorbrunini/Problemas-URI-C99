#include <stdio.h>
int main (void){
    double A ;
    double B = 3.14159;
    scanf("%lf",&A);
    double C = (A*A)*B;
    printf (
        "A=%.4lf\n", C 
    );
    return  0;
}

