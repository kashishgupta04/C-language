#include <stdio.h>

int main() {
    int a,b,c,d,n;
    printf("Enter any 10 numbers:");
    b=0;
    c=0;
    d=0;
    for(n=1;n<=10;n++)
    {
        printf("\nEnter the number:");
        scanf("%d",&a);
        if(a>0)
        {
            b++;
        }
        if(a<0)
        {
            c++;
        }
        if(a==0)
        {
            d++;
        }
    }
    printf("The number of positive numbers are:%d",b);
    printf("\nThe number of negative numbers are:%d",c);
    printf("\nThe number of 0:%d",d);

    return 0;
}