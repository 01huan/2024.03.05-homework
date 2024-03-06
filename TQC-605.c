#include <stdio.h>
int main() {
    int sum = 0;
    int arr[6];
    for (int i=0; i<6; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<6; i++) {
        int index=i, temp;
        for (int j=i; j<6; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for (int i=0; i<3; i++) {
        sum += arr[sizeof(arr)/sizeof(arr[0])-1-i];
        sum -= arr[i];
    }
    printf("%d", sum);
}