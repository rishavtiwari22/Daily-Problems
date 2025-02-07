#include <stdio.h>

int main(){
    int num;
    int max = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < num; i++){
        arr[i] = arr[i] + arr[i-1];
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("The maximum sum of the array is: %d\n", max);

}