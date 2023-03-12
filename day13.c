#include<stdio.h>
int main()
{
    char vowels;
    printf("Enter the vowels :");
    scanf("%c",&vowels);
    if (( vowels=='a') ||  (vowels=='e') ||(vowels=='i') || (vowels=='o') ||(vowels =='u') ||
            ( vowels=='A') ||  (vowels=='E') ||(vowels=='I') || (vowels=='O') ||(vowels =='u'))
        printf("%c is a VOWEL", vowels);
        else
    {
            printf(" %c is Constant ", vowels);
    }
        return 0;
}