//  finding lcm
#include<stdio.h>
int lcm(int a, int b) {
    int v,output;
    int o_a=a;
    int o_b=b;
    while(b!=0){
        v=a%b;
        a=b;
        b=v;
    }
    output=(o_a*o_b)/a;
    return output;
    
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",lcm(a,b));
}