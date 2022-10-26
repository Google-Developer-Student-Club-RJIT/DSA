#include <stdio.h>
 
int main()
{
    int A = 3, B = 3, C = 3;
    if (A > B && A > C){
        printf("%d is the largest number.", A);
    }
    else if (B > A && B > C){
        printf("%d is the largest number.", B);
    }
    else if (C > A && C > B){
        printf("%d is the largest number.", C);
    }
    else{
        printf("numbers are equal or invalid");
    }
    return 0;
}