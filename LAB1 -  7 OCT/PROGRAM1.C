#include<stdio.h>
int main(){
    int nums[100],n;
    int sumEven=0, sumOdd=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i=i+2){
        sumEven+=nums[i];
    }
    for(int j=1;j<n;j=j+2){
        sumOdd+=nums[j];
    }
    printf("Sum of even and odd indices: %d, %d", sumEven,sumOdd);
}
