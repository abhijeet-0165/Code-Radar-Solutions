// Your code here...
#include <stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
    char ch = 'A';
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}