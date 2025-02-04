#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        printf("Consonant");
        break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Special Character");
        break;
    }
    
}