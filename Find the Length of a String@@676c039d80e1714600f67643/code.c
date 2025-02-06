#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    // Correct usage of fgets
    fgets(a, sizeof(a), stdin);
    
    // Remove newline character if present
    a[strcspn(a, "\n")] = '\0';

    int b = strlen(a); // Get length of the string
    printf("%d", b); // Print the length
    return 0;
}
