//even odd
#include <stdio.h>
int main(){
    int n;
    printf("\nPlease enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d is even number.",n);
    }
    else
        printf("%d id odd number.",n);

    return 0;
}
