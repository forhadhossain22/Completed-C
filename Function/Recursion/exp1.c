#include<stdio.h>
int main(){

    recurse(0);

    return 0;
}

void recurse(int i){
    if(i<=5){
        recurse(i+1);   /* recursive call */
        printf("%d ",i);
    }
}
