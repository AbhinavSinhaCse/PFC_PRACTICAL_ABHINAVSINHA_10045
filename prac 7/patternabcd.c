#include <stdio.h>

int main() {
// ABHINAV SINHA_10045
    for(char i = 'A'; i <= 'D'; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT :
// A
// AB
// ABC
// ABCD