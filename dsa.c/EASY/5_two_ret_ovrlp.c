// Find if Two Rectangles Overlap
#include<stdio.h>
#include<stdbool.h>
int Rect_ovrlp(int l1[],int l2[],int r1[],int r2[]){
    if (l1[0]>r2[0] || l2[0]>r1[0]){
        return false;
    }
    if(l1[1]<r2[1] || l2[1]<r1[1]){
        return false;
    }
    return true;


}
int main(){
    int l1[2]={7,5};
    int r1[2]={5,0};
    int l2[2]={5,0};
    int r2[2]={6,0};
    int result=Rect_ovrlp(l1,l2,r1,r2);
    printf("%d",result);

}