#include <stdio.h>
int main() {
    float percentage;
    printf("enter your percentage:\n");
    scanf("%f", &percentage);
    
    if(percentage >= 90) {
        printf("your grade is A\n");
    }
    else if(percentage >= 80) {
        printf("your grade is B\n");
    }
    else if(percentage >= 70) {
        printf("your grade is C\n");
    }
    else if(percentage >= 60) {
        printf("your grade is D\n");
    }
    else {
        printf("your grade is F\n");
    }
return 0;
}
