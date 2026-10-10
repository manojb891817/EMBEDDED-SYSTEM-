#include<stdio.h>
#include<stdbool.h>
int Armstrng(int n){
    int digit,sum=0,org=n;
    while (n>0){
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==org && org>0){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    if(Armstrng(n)==true){
        printf("the number is armstrng");
    }
    else{
        printf("the number is not armstrng");
    }
}