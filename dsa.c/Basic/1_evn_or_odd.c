// EVEN OR ODD
#include <stdbool.h>
#include<stdio.h>
int isEven(int n) {
    if (n%2==0){
        return true;
        
    }
    else{
       return false;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int result=isEven(n);
    // printf("%d\n",result);
    if (result==0){
        printf("false");
    }
    else{
        printf("true");
    }
    return 0;
}
    
