#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    fgets("%s",&a);
    int b = strlen(a);
    printf("%d",b);
}