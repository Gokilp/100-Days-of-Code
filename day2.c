//  Find Raduis of cricle
#include<stdio.h>
int main(void)
{
    float pi;
    pi= 3.14;
    int Radius;
    printf("Enter the Radius");
    scanf("%d",&Radius);
    printf("Radius is %f \n",pi*Radius*Radius);
    printf("Circumference is %f", 2*pi* Radius);
    return 0;
}