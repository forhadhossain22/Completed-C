#include<stdio.h>
#include<conio.h>
int main(){
    func2();
    getch();
    return 0;
}
void func2(){
    func1();
    printf("Function two.");
}
void func1(){
    printf("Function one.\n");
}
