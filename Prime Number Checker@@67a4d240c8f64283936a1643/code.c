// Your code here...
#include<stdio.h>

int isPrime(int num){
    int i;
    int prime = 1;
    int a=1;
    int b=2;
    if(num<=1){
        prime=0;
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        return 1; // Prime;
    }
    else{
        return 0; // Prime;
    }



}