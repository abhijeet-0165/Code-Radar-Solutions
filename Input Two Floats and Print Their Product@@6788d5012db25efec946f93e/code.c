#include <stdio.h>

int main(){
    float a;
    float b;
    scanf("%.2f" , &a);
    scanf("%.2f" ,&b);
    float c = a * b;
    printf("Product: %f\n" ,c);
    return 0;
}