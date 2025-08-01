/* #include <stdio.h>

int main() {
    int A;
    double B;
    float C;
    char D;

    printf("Enter an integer value: ");
    scanf("%d", &A);
    printf("Enter a double value: ");
    scanf("%lf", &B);
    printf("Enter a float value: ");
    scanf("%f", &C);
    printf("Enter a character: ");
    scanf(" %c", &D);

    printf("int: %d \n", A);
    printf("double: %f \n",B);
    printf("float: %lf \n", C);
    printf("character: %c \n", D);

    return 0;

} */

//-----------------------------------------------------------------

/* #include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c is = %d", c, c);
    
    return 0;

} */

//-----------------------------------------------------------------

#include<stdio.h>
int main()
{
    int A1;
    float B1;
    double C1;
    char D1;

    printf("Enter an integer number = ");       // Onno vabe try krlam, output eki dey!
    scanf("%d", &A1);
    printf("Enter a float number = ");
    scanf("%f", &B1);
    printf("Enter a double number = ");
    scanf("%lf", &C1);
    printf("Enter a character = ");
    scanf(" %c", &D1);

    printf("Size of integer = %zu bytes \n", sizeof(A1));
    printf("Size of float = %zu bytes \n",sizeof(B1));
    printf("Size of double = %zu bytes \n", sizeof(C1));
    printf("Size of character = %zu bytes \n", sizeof(D1));

    return 0;

    
}


