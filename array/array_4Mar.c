#include <stdio.h>


int main(){
    int n;
    int x;
    printf("Enter the len of array : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);

    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the %dst element :", i + 1);
        scanf("%d", &arr[i]);
    }
    if (arr[0] > x){
        printf("The index is : %d\n", -1);
        return -1;
    }else{
        int index;
        for (int i = 0; i < n; i++){
            if (arr[i] <= x){
                index = i;
            }
        }
        printf("The index is : %d\n", index);
        return index;
    }

    return 0;
}

