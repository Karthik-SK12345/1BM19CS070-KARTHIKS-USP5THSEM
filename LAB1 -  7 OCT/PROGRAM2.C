#include<stdio.h>
int main(){
    int nums[100],n;
    int numPos=0, numNeg=0,numZero=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            numPos++;
        }else if(nums[i]<0){
            numNeg++;
        }else{
            numZero++;
        }
    }
    printf("num of pos, neg and zeros : %d, %d, %d", numPos,numNeg, numZero);
    return 0;
}
