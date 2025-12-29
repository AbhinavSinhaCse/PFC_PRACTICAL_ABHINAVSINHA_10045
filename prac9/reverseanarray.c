#include <stdio.h>
int main() { //ABHINAV SINHA RU-25-10045
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed Array: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
//Enter size of array: 3
// Enter 3 elements: 2
// 3
// 5
// Reversed Array: 5 3 2 