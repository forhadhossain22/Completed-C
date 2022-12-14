#include<stdio.h>
#include<conio.h>

void square(){
    int i,num;
    printf("\n\tNumber\tSquare\n\n");
    for(num=1; num<=10; num++){
        printf("\t%3d\t%3d\n",num,num*num);
    }
}
void cube(){
    int i,num;
    printf("\n\n\tNumber\tCube\n\n");
    for(num=1; num<=10; num++){
        printf("\t%3d\t%4d\n",num,num*num*num);
    }
}

int main(){
    square();
    cube();
    getch();
    return 0;
}
