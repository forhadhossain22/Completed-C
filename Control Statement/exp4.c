#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);

    if((year%4==0) && (year%100!=0) || (year%400==0)){
        printf("\n%d is Leap year.",year);
    }
    else
        printf("\n\n%d is Not Leap year.",year);
    return 0;
}
