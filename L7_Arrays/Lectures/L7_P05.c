//Deletion in an Array

#include <stdio.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int pos,i,j,k;

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    if(pos >= 1 && pos <= n){//Validation

    printf("\nArray before deletion: ");
    for(k = 0; k < n; k++){
        printf("%d ", arr[k]);
    }
    

    for(i = pos - 1; i < n - 1; i++){
       arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray after deletion: ");
    for(j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
 }

 else{
    printf("Invalid position entered!!\n");
 }

    return 0;
}