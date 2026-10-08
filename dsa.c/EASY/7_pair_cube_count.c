// pair cube sum count
// 9=2pair, 27=1 pair..
#include<stdio.h>
int Pair_count(int n){
    int val=0;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            val=i*i*i+j*j*j;
            if(val == n && (i != 0 || j == 0)){
                c++;
            }

        }
    }
    return c;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Pair_count(n));
}