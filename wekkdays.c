#include <stdio.h>

int main() {
    int a;
    printf("Enter the day number:");
    scanf("%d",&a);
    if(a==1)
     printf("Day is Monday");
    else if(a==2)
     printf("Day is Tuesday");
    else if(a==3)
     printf("Day is Wednessday");
    else if(a==4)
     printf("Day is Thursday");
    else if(a==5)
     printf("Day is Friday");
    else if(a==6)
     printf("Day is Saturday");
    else if(a==7)
     printf("Day is Sunday");
    else
     printf("Invalid Number,enter number between 1 and 7 only.");   
    


    return 0;
}