#include <stdio.h>

int main(){
    char a:
    scanf("%c",&a);
    if(a>=0 && a<=9){
        printf("Digit");
    }
    else if((a>='a' && a<='z'&& a!='a','e','i','o','u' ) || (a>='A' && a<='Z'&& a!= 'A','E','I','O','U') ){
        printf("Consonant");
    }
    else if(a == 'A','a','E','e','I','i','o','O','u','U'){
        printf("Vowel");
    }
    else{
        printf("Special");
    }

    
}