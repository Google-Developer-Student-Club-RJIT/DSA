#include <stdio.h>
 
int main()
{
    int A , B , C;
    printf("Enter number a : ");
        scanf("%d", &A); 
    printf("Enter number b : ");
        scanf("%d", &B); 
    printf("Enter number c : ");
        scanf("%d", &C); 
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
        printf("largest numbers is equal to another number or numbers are invalid invalid");
    }
    return 0;
}