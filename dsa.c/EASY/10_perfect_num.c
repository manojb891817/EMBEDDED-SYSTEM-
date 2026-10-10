// FINDING  PERFECT NUMBER
#include<stdio.h>
#include<stdbool.h>
int Perf_num(int n){
    // n=15
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    if(Perf_num(n)==0){
        printf("FALSE");
    }
    else{
        printf("TRUE");
    }
}