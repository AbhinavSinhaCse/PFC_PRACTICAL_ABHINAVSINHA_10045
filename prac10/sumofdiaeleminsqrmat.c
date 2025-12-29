#include <stdio.h>
int main() {//ABHINAV SINHA RU-25-10045
    int n, i, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < n; i++)
        sum += arr[i][i];   // main diagonal

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
// Enter size of square matrix: 2
// Enter elements:
// 1
// 8
// 5
// 6
// Sum of diagonal elements = 7