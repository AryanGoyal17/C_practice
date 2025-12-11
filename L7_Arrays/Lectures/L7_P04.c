//Insertion in an Array

#include <stdio.h>

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90};
    int n = 9;

    int pos,val,i,j,k;

    printf("Enter the position at which you want to insert the number: ");
    scanf("%d", &pos);

    if(pos >= 1 && pos <= n + 1){//Validation

    printf("Enter the number you want to insert: ");
    scanf("%d", &val);


    printf("\nArray before insertion: ");
    for(j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }


    for(i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;
    n++;

    printf("\nArray after insertion: ");
    for(k = 0; k < n; k++){
        printf("%d ", arr[k]);
    }

}
else{
    printf("Invalid position entered!!\n");
}

    return 0;
}