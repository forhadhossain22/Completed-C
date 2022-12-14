#include<stdio.h>
#include<conio.h>

void sumOfAll(){
    int n, sum=0;
    for(n=1; n<=5; n++)
        sum += n;
    printf("Sum of all number 1 to 5: %d.",sum);

    getch();
}

int main(){
    sumOfAll();
}
