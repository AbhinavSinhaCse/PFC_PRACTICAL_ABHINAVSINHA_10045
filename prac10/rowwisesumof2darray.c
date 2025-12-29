#include <stdio.h>
int main() {//ABHINAV SINHA RU-25-10045
    int rows, cols, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++)
            sum += arr[i][j];
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// Enter rows and cols: 2
// 2
// Enter elements:
// 2
// 4
// 5
// 7
// Sum of row 1 = 6
// Sum of row 2 = 12