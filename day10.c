#include<stdio.h>
int divisor(int num);
int main()
{
    int number1,number2;
    printf("Enter the Number");
    scanf("%d",&number1);
    printf("Enter the Number");
    scanf("%d",&number2);
    if(divisor(number1) == number2 && divisor(number2) == number1){
        printf("%d and %d are Amicable numbers", number1, number2);
    }else{
        printf("%d and %d are not Amicable numbers", number1, number2);
    }
    return 0;

return 0;
}

int divisor(int num)
{
    int sum=1,i;
    for(i=0;i<num/2;i++)
    {
        if(num%i==0){
            sum=sum+i;
        }
    }
    return sum;
}