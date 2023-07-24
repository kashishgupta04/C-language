#include <stdio.h>
int main() {
    int l,b,p; char c;
    printf("Enter the length of the field:");
    scanf("\n%d",&l);
    printf("Enter the breadth of the field:");
    scanf("\n%d",&b);
    printf("Enter the fence type:");
    scanf("\n%c",&c);
    p=2*(l+b);
    if(c=='A'||c=='a')
    {
        printf("Cost of fencing:%d",p*10);
    }
    if(c=='B'||c=='b')
    {
        printf("Cost of fencing:%d",p*15);
    }
    else
    {
        printf("Cost of fencing:%d",p*12);
    }
    return 0;
}