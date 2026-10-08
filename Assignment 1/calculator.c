#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    
    printf ("enter the values of a, b and c :\n");
    scanf ("%lf\n %lf\n %lf", &a, &b, &c);
    printf (" these are the numbers you have given us: %lf\n %lf\n %lf\n", a,b,c);
    
    // ADDITION
    double sum = a+b+c;
    // DIFFERENCE
    double difference = a-b-c;
    // MULTIPLICATION
    double product = a*b*c;
    // DIVISION
    double quotient = a/b;
   
    printf("what operation would you like to perform?\n For Addition, press A/a\n For Subtraction, press S/s\n for Multiplication, press M/m\n For Division, press D/d \n");
    char Operation;
    scanf(" %c", &Operation);
    printf("the operation chosen is %c\n", Operation);
    
    
    if (Operation== 'a' || Operation == 'A')
    {
        printf ("The sum is: %lf", sum);
    }
    
    else if (Operation== 'S' || Operation == 's')
    {
        printf ("The difference (a-b-c) is: %lf", difference);
    } 
    
    else if (Operation== 'M' || Operation == 'm')
    {
        printf ("The product is: %lf", product);
    }
   
    else if (Operation== 'D' || Operation == 'd')
    {
        if (a==0 || b==0|| c==0)
        {
            printf("Division by zero is indefinite");
        }
        else
        {
            printf("the quotient is %lf", quotient);
        }
        
    }
    else
    {
        printf("Invalid input");
    }
    

    return 0;
}