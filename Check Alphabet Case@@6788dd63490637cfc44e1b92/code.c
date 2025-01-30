#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase\n");
    }
    else {
        printf("Uppercase\n");
    }
}