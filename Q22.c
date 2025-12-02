#include <stdio.h>
int main() {
    float SP,CP,profit,loss,percentage;
    printf("Enter the selling price of the product:\n");
    scanf("%f", &SP);
    printf("Enter the cost price of the product:\n");
    scanf("%f", &CP);

    if(SP>CP) {
        profit= SP - CP;
        percentage= (SP - CP)/100;
        printf("Profit: %.2f\n", profit);
        printf("profit percentage: %.2f\n", percentage);
    }
    else if(SP<CP) {
        loss = CP - SP;
        percentage= (CP - SP)/100;
        printf("Loss: %.2f\n", loss);
        printf("Loss percentage: %.2f\n",percentage);
    }
    else{
        printf("no profit, no loss.\n");
    }
return 0;
}
