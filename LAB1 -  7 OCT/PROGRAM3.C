#include<stdio.h>
int main(){
    int qty[100],n;
    double price[100], finalPrice=0, discount;
    int numPos=0, numNeg=0,numZero=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter the price of product %d:",i+1);
        scanf("%lf",&price[i]);
        printf("Enter the quantity of the product %d: ", i+1);
        scanf("%d", &qty[i]);
        finalPrice+=price[i]*qty[i];
    }
    if(finalPrice>=10000.0)
        {
            discount=finalPrice*0.05;
            printf("Congratulations!! You have received a discount of 5 percent\n");
        }
        else if(finalPrice>=7500)
        {
            discount=finalPrice*0.03;
            printf("Congratulations!! You have received a discount of 3 percent\n");
        }
        else if(finalPrice>=5000)
        {
            discount=finalPrice*0.02;
            printf("Congratulations!! You have received a discount of 2 percent \n");
        }else{
            printf("You receive no discount");
        }
        printf("\nThe total amount before discount: %f",finalPrice);
        printf("\nThe total price after discount: %f",finalPrice-discount);
    return 0;
}
