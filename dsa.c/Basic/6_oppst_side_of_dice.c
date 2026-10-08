// Opposite Side of Dice
#include<stdio.h>
int Opst_dice(int n){
    int out=7-n;
    return out;

}
int main(){
    int n;
    scanf("%d",&n);
    int result=Opst_dice(n);
    printf("%d",result);
}