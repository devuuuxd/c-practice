#include <stdio.h>
int isPrime( int n ) {
    int i=1,total=0;
    if (n==1){
        printf("Prime");
    }
    else if(n<1) {
        printf("Not defined");
    }
    else if (n>1) {
    while (i<=n) {
        if (n%i==0){
            total+=i;
        }
        i++;
    }
    if (total != (n+1)){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }}
}
int main(){
    int num;
    printf("Tell me a number: " );
    scanf("%d",&num);
    isPrime(num);
}