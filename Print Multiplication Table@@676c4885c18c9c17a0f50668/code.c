// Your code here...
#include<stdio.h>
int main(){
    int n,i,x = 0;
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        x *= i;
        printf("%d x %d = %d",n , i , x);
        return 0;
    }
}