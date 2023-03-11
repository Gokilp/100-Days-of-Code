#include <stdio.h>

int main(void) {
    int num,sum=0;
    printf("Enter the number");
    for(int i=0;i<10;i++) {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf(" The sum is %d",sum);
    return 0;
}