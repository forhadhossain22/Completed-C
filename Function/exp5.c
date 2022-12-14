#include<stdio.h>
#include<conio.h>

int main(){
    int sqr;
    sqr = get_sqr();
    printf("Square: %d",sqr);
    getch();
    return 0;
}

int get_sqr(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    return num*num; /* square the number */
}
