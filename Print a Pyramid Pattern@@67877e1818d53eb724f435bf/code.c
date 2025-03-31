// Your code here...
#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    for(int i = 1 ; i<=row;i++){
        for(int j = 1 ; j <= row -1 ; i++){
            printf(" ");
        }
        for(int k =1;k<=2*row-1;k++){
            printf("*");
        }
        printf("\n");
    }
}