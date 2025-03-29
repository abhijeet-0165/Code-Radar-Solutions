// Your code here...
#include<stdio.h>

int isPrime(int num){
    int i;
    int num;
    prime = 1;
    scanf("%d",&num);
    if(num<=1){
        prime=0;
    }
    else{
        for(i=2;i<a;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        printf("1");
    }
    else{
        printf("0");
    }



}