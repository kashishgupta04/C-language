#include <stdio.h>

int main() {
    float p,r,i,t;
    printf("Enter the principle amount is:");
    scanf("%f",&p);
    printf("Enter the time period:");
    scanf("\n%f",&t);
    if(t<2)
     r=0.04;
    else if(t>=2&&t<4)
     r=0.06;
    else if(t>4)
     r=0.07;
    i=p*r*t/100;
    printf("Principle amount:%.2f",p);
    printf("\nTime period:%.2f",t);
    printf("\nRate of interest:%.2f",r);
    printf("\nInterest is:%.2f",i);

    return 0;
}