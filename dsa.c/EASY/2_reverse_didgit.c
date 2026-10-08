#include<stdio.h>
int reverse_dig(int n){
    int rev=0;
    int digit;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return rev;
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",reverse_dig(n));
}