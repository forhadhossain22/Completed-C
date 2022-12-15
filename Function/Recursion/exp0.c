#include<stdio.h>
int main(){

    recurse(5);

    return 0;
}

void recurse(int i){
    if(i>=0){
        recurse(i-1);   /* recursive call */
        printf("%d ",i);
    }
}
