#include <stdio.h>
#include<math.h>
int main() {

    int num;
    int flag=0;
    printf("Enter the number");
    scanf("%d",&num);
    if(num==1)
        printf(" 1 is not prime or not composite number");
    else
    {
        for(int i=0;i<=num/2;i++)
        {
            if(num%2==0)
                flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime number ");
    }
    else
    {
        printf("Not prime number");
    }


    return 0;
}
