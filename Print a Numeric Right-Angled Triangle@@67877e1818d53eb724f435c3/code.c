// Your code here...
#include <stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
        printf("%d ",j);
        }
        printf("\n");
    }
    
}