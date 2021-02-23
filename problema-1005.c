#include <stdio.h>
int main (void){
    float A ;
    float B ;
    scanf("%f",&A);
    scanf("%f",&B);
    double C = ((A*3.5)+(B*7.5))/11;
    printf (
        "MEDIA = %.5lf\n", C 
    );
    return  0;
}

