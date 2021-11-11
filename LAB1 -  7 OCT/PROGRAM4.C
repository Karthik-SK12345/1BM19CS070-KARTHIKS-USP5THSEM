#include<stdio.h>
int main(){
    int A[100],B[100],C[100],a,b=0,c=0;
    double price[100], finalPrice=0, discount;
    int sum=0,min=0,max=0;
    float avg=0;
    printf("Enter the number of elements: ");
    scanf("%d",&a);
    
    for(int i=0;i<a;i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &A[i]);
        if(A[i]%2==0){
            C[c++]=A[i];
        }else{
            B[b++]=A[i];
        }
    }
    min=C[0];
    for(int i=0;i<c;i++)
    {
        sum+=C[i];
        if(C[i]>max)
            max=C[i];
        if(C[i]<min)
            min=C[i];    
    }
    avg=(sum)/c;
    printf("The sum, avg, min, max : %d, %f, %d, %d", sum, avg, min, max);
    return 0;
}
