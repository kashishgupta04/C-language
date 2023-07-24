#include <stdio.h>

int main() {
    float a,b,c,d;
    printf("Enter the cost:");
    scanf("\n%f",&a);
    printf("Enter the quantity:");
    scanf("\n%f",&b);
    c=a*b;
    if(c<1000)
    {
        d=0;
        printf("Amount to be paid:%f",c);
    }
    if(c>1000&&c<=2999)
    {
        d=c/100*10;
        printf("Amount to be paid:%f",c-d);
    }
    if(c>=3000&&c<=4999)
    {
        d=c/100*20;
        printf("Amount to be paid:%f",c-d);
    }
    if(c>=5000)
    {
        d=c/100*30;
        printf("Amount to be paid:%f",c-d);
    }
    return 0;
}