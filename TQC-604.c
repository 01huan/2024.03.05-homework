#include <stdio.h>
int main() {
    int arr[9];
    int sum=0;
    for (int i=0; i<9; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<9; i++) {
        int index=i, temp;
        for (int j=i; j<9; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        printf("%d\n", arr[i]);
        sum += arr[i];
    }
    printf("sum = %d", sum);
}