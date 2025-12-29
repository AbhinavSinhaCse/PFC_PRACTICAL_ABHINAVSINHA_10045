#include <stdio.h>
int main() { // Abhinav Sinha _ RU-25-10045
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}
//output : Enter a number: 5
// 5 is Odd
