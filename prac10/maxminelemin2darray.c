#include <stdio.h>
int main() {//ABHINAV SINHA RU-25-10045
    int rows, cols, i, j, max, min;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    max = min = arr[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}
// Enter rows and cols: 3
// 3
// Enter elements:
// 3
// 2
// 5
// 2
// 1
// 3
// 2
// 1
// 5
// Max = 5
// Min = 1