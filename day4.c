
// Swaping two Numbers
#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int temp;
    printf("Before Swapping the Number A and B");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping the Number A=%d and B=%d",a,b);
}
