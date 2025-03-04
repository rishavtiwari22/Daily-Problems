#include <stdio.h>


int main() {

    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Enter the elements : ");
            scanf("%d", &arr[i][j]);
        }
    }

    int temp;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n/2; j++){
            temp = arr[i][j];
            arr[i][j] = arr[i][n - j - 1];
            arr[i][n - j - 1] = temp;
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Matrix : %d\n", arr[i][j]);
        }
    }

    return 0;


}