#include<stdio.h>
int Cosest_val(int n,int m){
    int s=(n-m);
    int e=(n+m);
    int min,v;
    for(int i=s;i<=e;i++){
        if (i%m==0){
            v=n-i;
            if(min>v){
                min=v;
            }
        }
    }
    return min;


}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int result=Cosest_val(n,m);
    printf("%d",result);
}