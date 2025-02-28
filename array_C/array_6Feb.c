#include <stdio.h>

int main(){
    int n;
    int k;
    int p;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the value of k : ");
    scanf("%d", &k);
    p = k;
    if (k < 0){
        p = -k;
    }

    int arr[n+p];
    for(int i=0; i<n; i++){
        printf("Enter the elements of array: ");
        scanf("%d", &arr[i]);
    }

    int len = n+p;
    if (k == 0){
        for (int i = 0; i < len; i++){
            arr[i] = 0;
        }
    }

    if (k < 0){
        for (int j = 0; j < n/2; j++){
            int temp = arr[j];
            arr[j] = arr[n-j-1];
            arr[n-j-1] = temp;      
        }
    }

    for (int i = 0; i < p; i++){
        arr[n+i] = arr[i];
    }
    
    if (p != 0){
        for (int i = 0; i < n+1; i++){
            int sum = 0;
            for (int j = i+1; j <= i+p; j++){
                sum += arr[j];
            }
            arr[i] = sum;
        }
    }

    if (k < 0){
        for (int j = 0; j < n/2; j++){
            int temp = arr[j];
            arr[j] = arr[n-j-1];
            arr[n-j-1] = temp;      
        }
    }
    
    for (int i = 0; i < n; i++){
        printf("Arr elements : %d\n", arr[i]);
    }
}