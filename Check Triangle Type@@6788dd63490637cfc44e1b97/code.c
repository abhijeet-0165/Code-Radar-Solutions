#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&& b==c && c==a){
        printf("Equilateral");
    }
    else if(a==b||b==c||c==a){
        print("Isosceles");
    }
    else{
        printf("Scalene");
    }
}