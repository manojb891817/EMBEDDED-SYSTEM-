#include<stdio.h>
int main(){
    int c=10;
    int *cptr=&c;
    printf("%d\n",cptr);
    printf("%d\n",*cptr);
    printf("%d\n",&cptr);
    printf("%p\n",cptr);
    printf("%p\n",*cptr);
    printf("%p\n",&cptr);

}