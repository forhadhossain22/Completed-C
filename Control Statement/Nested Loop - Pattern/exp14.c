#include<stdio.h>
#include<conio.h>
int main(){
    int n,row,col;
    printf("Enter your number: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        //printing value
        for(col=1; col<=row; col++){
            printf("%d",col);
        }
        printf("\n");
    }

    getch();
    return 0;
}

