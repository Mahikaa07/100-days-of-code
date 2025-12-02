#include <stdio.h>
int main() {
    float s1,s2,s3;
    printf("enter the first side:\n");
    scanf("%f", &s1);
    printf("enter the second side:\n");
    scanf("%f", &s2);
    printf("enter the third side:\n");
    scanf("%f", &s3);

    if (s1 == s2 && s2 == s3 )
    {
        printf("The given triangle is a equilateral triangle\n");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3 ) {
        printf("The given triangle is an isosceles triangle\n");
    }
    else{
        printf("The given triangle is a scalene triangle\n");
    }
return 0;    
}
