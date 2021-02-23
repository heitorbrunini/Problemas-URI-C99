#include <stdio.h>
int main (void){
    int i;
    scanf("%d",&i);
    int num;
    int in=0;
    int out=0;
    do
    {
        scanf("%d",&num);
        if (10<=num && num<=20)
        {
            in+=1;        
        }
        else{out+=1;}
        i-=1;
    } while (i>0);
    printf("%d in\n",in);
    printf("%d out\n",out);    
    return  0;
}
