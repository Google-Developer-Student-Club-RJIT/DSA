#include <stdio.h>
 
int main()
{
    int A = 1, B = 2, C = 3;
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
 
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
 
    if (C >= A && C >= B)
        printf("%d is the largest number.", C);
 
    return 0;
}