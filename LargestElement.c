#include <stdio.h>
#include <stdlib.h>
int findLargestElement(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    int largest = findLargestElement(arr+1, n-1);

    if(arr[0]>largest){
        return arr[0];
    }
    else{
        return largest;
    }
}

int main(){
    int n;
    printf("Insert a size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nInsert %d elements:\n", n);
    for(int i=0; i<n; i++){
        printf("%d.element: ", i);
        scanf("%d", &arr[i]);
    }


    int largest = findLargestElement(arr, n);
    printf("\n\n The largest element is %d\n", largest);

    return 0;
}
