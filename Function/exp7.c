#include<stdio.h>
#include<conio.h>
void outchar(char ch);
int main(){
    outchar('A');
    outchar('B');
    outchar('C');

    getch();
    return 0;
}
void outchar(char ch){
    printf("%c ",ch);
}
