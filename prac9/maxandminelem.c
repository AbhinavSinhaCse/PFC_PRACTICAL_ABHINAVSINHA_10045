#include <stdio.h>
int main() { //ABHINAV SINHA RU-25-10045
    int n, i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}
// Enter size of array: 3
// Enter 3 elements: 1
// 5
// 8 
// Max = 8
// Min = 1