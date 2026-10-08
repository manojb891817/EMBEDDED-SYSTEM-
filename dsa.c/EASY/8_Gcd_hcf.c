// finding GCD or HCF
#include<stdio.h>
int gcd(int a, int b) {
    int v;
    while (b!=0){
        int v=a%b;
        a=b;
        b=v;
        
    }
    return a;
    
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}