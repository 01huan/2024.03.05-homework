#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%d", arr[i][j]);
            (j != m-1) ? (printf(",")) : (printf(""));
        }
        (i != n-1) ? (printf("\n")) : (printf(""));
    }
}