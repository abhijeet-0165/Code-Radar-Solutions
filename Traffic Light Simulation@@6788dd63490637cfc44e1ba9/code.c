#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input\n");
        break;
    }
}