#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    int b = strlen(a);
    printf("%d", b);
    return 0;
}
