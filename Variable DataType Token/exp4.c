#include<stdio.h>
int main(){
    int a,b,c;

    printf("\nEnter first value: ");
    scanf("%d",&a);
    printf("\nEnter second value: ");
    scanf("%d",&b);

    c = a*b;

    printf("\n\n%d * %d is %d.",a,b,c);

    return 0;
}
