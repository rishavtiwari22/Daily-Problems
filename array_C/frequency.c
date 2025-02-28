#include <stdio.h>
#include <stdlib.h>

struct myStruct {
    int number;
    int frequency;
};

int main(){
    int arr[4] = {1, 4, 3, 6};
    int max = 6;
    struct myStruct *data = (struct myStruct *)calloc(max + 1, sizeof(struct myStruct));

    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        data[arr[i]].number = arr[i];
        data[arr[i]].frequency++;
    };

    for (int i = 0; i <= max; i++){
        if (data[i].frequency > 0){
            printf("Number : %d <<>> ", data[i].number);
            printf("Frequency : %d\n", data[i].frequency);
        }
    };

    return 0;
}
