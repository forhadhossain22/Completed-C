#include<stdio.h>
#include<conio.h>
int func(); /* function prototype */
int main(){
    int num;
    num = func();
    printf("%d",num);

    getch();
    return 0;
}

int func(){
    return 10;
}
