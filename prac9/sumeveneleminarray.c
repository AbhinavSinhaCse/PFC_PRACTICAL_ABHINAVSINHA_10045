#include <stdio.h>
int main() { //ABHINAV SINHA RU-25-10045
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d\n", sum);
    return 0;
}
// Enter size of array: 3
// Enter 3 elements: 1
// 6
// 8
// Sum of even elements = 14