#include <stdio.h>

// Function to print numbers from 1 to n and from n-1 to 1
void print_numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

// Function to print spaces
void print_spaces(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" ");
    }
    printf("\n");
}

// Function to print the pattern
void print_pattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        print_numbers(i);           // Print numbers from 1 to i and from i-1 to 1
        if (i > 1) {
            print_spaces(2 * (n - i));   // Print spaces based on the current row
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_pattern(n);   // Print the pattern
    return 0;
}