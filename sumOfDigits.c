#include <stdio.h>
#include <stdlib.h>
int sumOfDigits(int n){
    if(n!=0){
        return n%10 + sumOfDigits(n/10);
    }
    else{
        return 0;
    }
}

int main(){
    int n;

    printf("Insert a number: ");
    scanf("%d", &n);


    printf("\n\n The sum of %d is %d\n", n, sumOfDigits(n));

    return 0;
}
