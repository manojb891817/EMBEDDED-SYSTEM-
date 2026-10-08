#include<stdio.h>
int sumOfDigits(int n) {
    int digit,sum=0;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int main(){
    int digit,sum;
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigits(n));
}
