//#include <stdio.h>


//int main() {
//
  //  printf("Hello World!");
 //   return 0;
//}

//--------------------------------------------------------------- [const using & others]

#include <stdio.h>
#include <stdbool.h>

int main()
{
/*
    {   
        int playerScore = 95;
        printf("%d\n", playerScore);

        playerScore = 200;
        printf("%d\n", playerScore);

        const double PI = 3.14;
        //PI = 3.9      (Ei line wrong, karon 'const' diye value fix kre dichi)
        printf("%lf\n", PI);
    }

//--------------------------------------------------------------- [Format spe. & bool func. using]

    {
        int age = 22;
        char section = 'A';
        float salary = 1000.89;
        double bonusSalary = 2000.15483;
        bool married = false;                  // False=0, True=1 dekhabe

        printf("Age: %d\n", age);
        printf("Section: %c\n", section);
        printf("Salary: %f\n", salary);     
        printf("Bonus Salary: %lf\n\n", bonusSalary);       // (\n\n diye Try krlm - 2 line break, It works!)
        printf("Married: %d\n\n", married);      // Ei line likhtei hbe (bool nile)- #include<stdbool.h>
    }
    
//--------------------------------------------------------------- [Input type, ek line e Print technic, s]

    {
        int num = 10;
        float num2 = 5.32;
        double num3 = 8.3654;
        char name = 'A';

        printf("Integer : %d Float : %f Double : %lf Character : %c", num, num2, num3, name);       //eivabe direct likhte gele comma thik vabe dite hbe,, Be Careful
    }

//--------------------------------------------------------------- [Taking input & output, ASCII, Multiple value]

    {
        int num;
        float num2;
        double num3;
        char name, nameM;

        printf("Enter Integer Number: ");
        scanf("%d", &num);
        printf("Enter Float Number: ");
        scanf("%f", &num2);
        printf("Enter Double Number: ");
        scanf("%lf", &num3);
        printf("Enter Character: ");
        scanf(" %c", &name);            // %c er age Space must dite hbe, na hy input na niyei finish krbe!
        
        printf("Enter Another Character: ");            //ASCII value input dewa
        scanf(" %c", &name);
        printf("Enter char & num: ");                   //Multiple value eksathe input newa
        scanf(" %c %d", &nameM, &num);
     //-------Output Part!
        printf("Integer Number: %d\n", num);
        printf("Float Number: %f\n", num2);
        printf("Double Number: %lf\n", num3);
        printf("Character: %c\n", name);

        printf("Another Character: %d\n", name);             //ASCII result showing, F.S-- %d,, mind it!
        printf("Char: %c Num: %d\n\n", nameM, num);      //Multiple value result showing
    }

//--------------------------------------------------------------- [Arithmetic, Increment & Decrement Operator]
*/
    {
        int a=9, b=4, c;
        
        c=a+b;
        printf("a+b = %d \n", c);
        c = a-b;
        printf("a-b = %d \n", c);
        c = a*b;
        printf("a*b = %d \n", c);
        c = a/b;
        printf("a/b = %d \n", c);
        c = a%b;
        printf("Remainder = %d \n\n", c);

        int A=10, B=100;
        float C=20.5, D=200.7;

        printf("++A = %d \n", ++A);
        printf("--B = %d \n", --B);
        printf("++C = %f \n", ++C);
        printf("--D = %f \n\n", --D);

    }    

//--------------------------------------------------------------- [Sizeoff evaluate the size of a variable]

    {
        int Type1;
        float Type2;
        double Type3;
        char Type4;
        
        printf("Size of integer: %zu bytes \n", sizeof(Type1));         // %zu  OR  %lu ekta dilei hoy
        printf("Size of float: %lu bytes \n", sizeof(Type2));
        printf("Size of double: %zu bytes \n", sizeof(Type3));
        printf("Size of character: %lu bytes \n", sizeof(Type4));
    }
    
    

    return 0;

}