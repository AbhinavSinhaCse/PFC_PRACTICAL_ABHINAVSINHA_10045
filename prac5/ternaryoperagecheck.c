#include <stdio.h>
int main() {
     // Abhinav Sinha _ RU-25-10045
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You are an Adult\n") : printf("You are a Minor\n");

    return 0;
}
//output :Enter your age: 55
// You are an Adult