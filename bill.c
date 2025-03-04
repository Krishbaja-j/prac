#include <stdio.h>

int main() {
    char a,b,c,d,e;
    int x,y,z,l,n;

    // Prompting and reading user input for name
    printf("Enter User 1: ");
    scanf("%c", &a);

    // Consuming the newline character left by previous scanf
    while ((getchar()) != '\n');

    // Prompting and reading user input for bill amount
    printf("Enter Bill: ");
    scanf("%d", &x);

    // Displaying the user input
    printf("User 1: %c\n", a);
    printf("Bill: %d\n", x);

    return 0;
}
