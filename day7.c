#include <stdio.h>
#include<math.h>
int main() {

    int side;
    printf("Enter the legnth of side");
    scanf("%d",&side);
    printf("Surface area=%fandVolume%f",(6*pow(side,2)),(pow(side,3)));

    return 0;
}
