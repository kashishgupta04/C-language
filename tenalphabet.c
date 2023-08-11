#include <stdio.h>

int main() {
    int n,b,c;
    char a;
    printf("Enter any 10 characters:-");
    b=0;
    c=0;
    for(n=1;n<=10;n++)
    {
        printf("\nEnter the character:");
        scanf(" %c",&a);
        if(a>='A'&& a<='Z')
        {
            b++;
        }
        else if(a>='a'&& a<='z')
        {
            c++;
        }
        
    }
    printf("The number of uppercase characters are:%d",b);
    printf("\nThe number of lowercase characters are:%d",c);
    

    return 0;
}