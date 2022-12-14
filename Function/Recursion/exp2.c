#include<stdio.h>

int fact(int n){
    if(n<=1)
        return 1;
    else
        return (n*fact(n-1));
}

int main(){
    int num;
    printf("Enter your value: ");
    scanf("%d",&num);

    int x = fact(num);
    printf("Factorial of %d is %d",num,x);

    return 0;
}
