#include <stdio.h>
int main() { // Abhinav Sinha _ RU-25-10045
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Max = %d\n", a);
    else if (b >= a && b >= c)
        printf("Max = %d\n", b);
    else
        printf("Max = %d\n", c);

    return 0;
}
//Enter three numbers: 5
// 1
// 2
// Max = 5