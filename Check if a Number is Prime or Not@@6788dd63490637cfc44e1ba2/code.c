#include <stdio.h>

int main(){
    int a,i,isprime = 1;
    scanf("%d",&a);
    if(a<=1 ){
        isprime = 0;
    }
    else{
        for(i=2;i<=a;i++){
            if(a%i==0){
                isprime =0;
            }
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}