#include <stdio.h>
#include <stdlib.h>


int main(){
    int num;
    int k;
    int result = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter the number k : ");
    scanf("%d", &k);
    int arr[num];

    for (int i = 0; i < num; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num-k; i++){
        for (int j = i+1; j <=  k+i; j++){
            if (arr[i] == arr[j] && abs(i-j) <= k){
                result = 1;
                break;
            }
        }
    }
    printf("The output is :%d\n", result);
    return 0;
}