#include<stdio.h>
int main() {
    float bill=0;
    int units;
    printf("enter the no of units:\n");
    scanf("%d", &units);

    if(units<=100) {
        bill=units*5;
    }
    else if(units<=200) {
        bill=(100*5)+((units-100)*7);
    }
    else if(units<=300) {
        bill=(100*5)+(100*7)+((units-200)*10);
    }
    else {
        bill=(100*5)+(100*7)+(100*10)+((units-300)*12);
    }
    printf("the bill is Rs %f\n", bill);
return 0;
}
