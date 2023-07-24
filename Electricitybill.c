#include <stdio.h>

int main() {
    int a;
    printf("Enter no. of unit consumed:");
    scanf("%d",&a);
    if(a<=200)
    {
        printf("Bill is zero.");
    }
    if(a>200&&a<=400)
    {
        printf("Bill is:%d",a*4);
    }
    if(a>400&&a<=700)
    {
        printf("Bill is:%d",a*6);
    }
    if(a>700)
    {
        printf("Bill is:%d",a*8);
    }

    return 0;
}