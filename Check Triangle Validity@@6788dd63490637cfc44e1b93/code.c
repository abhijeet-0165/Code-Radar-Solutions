#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a + b > c) && (a + c > b) && (b + c > b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}