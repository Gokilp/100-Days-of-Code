#include<stdio.h>
int swap(int *x, int *y);
int main()
{
    int number1,number2;
    printf("Enter the A value");
    scanf("%d",&number1);
    printf("Enter the B value");
    scanf("%d",&number2);
    swap(&number1,&number2);
    printf("after swapping a and b are %d and %d",number1,number2);
}
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}



