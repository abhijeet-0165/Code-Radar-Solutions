#include <stdio.h>

int main(){
    char a;
    char b;
    scanf("%c",&a);
    scanf("%c",&b);
    if(a<='a' && a>='z'){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}