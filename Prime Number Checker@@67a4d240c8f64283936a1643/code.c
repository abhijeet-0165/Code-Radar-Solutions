// Your code here...

int isPrime(int num){
    int num,i;
    prime = 1;
    scanf("%d",&num);
    if(a<=1){
        prime=0;
    }
    else{
        for(i=2;i<a;i++){
            if(a%i==0){
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