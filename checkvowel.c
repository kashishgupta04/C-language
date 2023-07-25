#include <stdio.h>

int main() {
    char b;
    printf("Enter the character:");
    scanf("%c",&b);
    if(b=='a'||b=='A'||b=='e'||b=='E'||b=='i'||b=='I'||b=='o'||b=='O'||b=='u'||b=='U')
     printf("The character is a vowel.");
    else
     printf("The character is a consonant.");

    return 0;
}