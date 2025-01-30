#include <stdio.h>

int main(){
    char a;
    char b;
    scanf("%c",&a);
    scanf("%c",&b);
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else if(a>='A' && a<='Z'){
        printf("Uppercase");
    }
}