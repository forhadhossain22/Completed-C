#include<stdio.h>
#include<conio.h>
int main(){
    int n,row,col;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(row=n; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    getch();
    return 0;
}
