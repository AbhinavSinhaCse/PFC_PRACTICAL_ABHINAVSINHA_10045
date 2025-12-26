#include <stdio.h>
//ABHINAV SINHA_10045
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        for (int star = 0; star < (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        for (int star = 0; star < (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// OUTPUT :: 5
// 5
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********