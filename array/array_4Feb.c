#include <stdio.h>

int main() {
    int num;
    int low;
    int high;
    int temp;
    printf("Enter your number - ");
    scanf("%d", &num);
    int len = num;
    int val = (num * 2) - 1;

    int matrix[val][val];
    for(int i = 0; i < val; i++) {
        for(int j = 0; j < val; j++) {    
            matrix[i][j] = 0;        
     
        }
    }

    for (int i = 0; i <= len; i++){
        low = i;
        high = val - 1 - i;
        temp = low;

        while(temp <= high){
            matrix[low][temp] = num;
            temp++;
        }

        temp = low+1;
        while(temp <= high){
            matrix[temp][high] = num;
            temp++;
        }

        temp = high-1;
        while(temp >= low){
            matrix[high][temp] = num;
            temp--;
        }

        temp = high-1;
        while(temp >= low+1){
            matrix[temp][low] = num;
            temp--;
        }

        num--;
    }

    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}