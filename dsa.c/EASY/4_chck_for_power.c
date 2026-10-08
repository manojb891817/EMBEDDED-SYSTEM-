// find Check for power 
#include<stdio.h>
#include<stdbool.h>
int Check_power(int x,int y){
    int v=y;
    int c=0;
    while(y!=1){
        if(y%x==0){
            v=y/x;
            y=v;
        }
        else{
            return false;
        }
        
    }
    return true;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int result=Check_power(x,y);
    printf("%d",result);
}