#include <stdio.h>
#include <stdlib.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum(n - 1);
    }
}

int main(){
    int n;
    printf("Insert a number: ");
    scanf("%d", &n);


    printf("\n\n The sum of natural numbers for %d is %d\n", n, sum(n));

    return 0;
}
