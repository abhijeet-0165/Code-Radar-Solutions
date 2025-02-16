// Your code here...
#include<stdio.h>
int main(){
    int n,i,x = 0;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        x = n*i;
        printf("%d x %d = %d\n",n , i , x);
    }
}