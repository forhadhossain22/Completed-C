#include<stdio.h>
#include<conio.h>

void sum(int x, int y);
void sub(int x, int y);
void mul(int x, int y);
void div(int x, int y);
void mod(int x, int y);

int main(){

    sum(10,5);
    sub(10,5);
    mul(10,5);
    div(10,5);
    mod(10,5);

    getch();
    return 0;
}

void sum(int x, int y){
    printf("%d\n", x+y);
}
void sub(int x, int y){
    printf("%d\n", x-y);
}
void mul(int x, int y){
    printf("%d\n", x*y);
}
void div(int x, int y){
    printf("%d\n", x/y);
}
void mod(int x, int y){
    printf("%d\n", x%y);
}
