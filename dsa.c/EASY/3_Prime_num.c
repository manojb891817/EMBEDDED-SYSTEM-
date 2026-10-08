#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n) {
    if (n==1){
        return false;
    }
   for(int i=2;i*i<=n;i++){
       if (n%i==0){
           return false;
       }
   }
}
int main(){
    int n;
    scanf("%d",&n);
    int result=isPrime(n);
    if(result==0){
        printf("false");
    }
    else{
        printf("true");
    }
}