//WAP to find the factorial of a function , GCD of two numbers and fibinacci series till nth term using Recursions
#include <stdio.h>

int factorial(int a){
    if (a==0||a==1)
    {
       return 1;
    }
    else
        return a*factorial(a-1);
}

int GCD(int a,int b){
    if (b != 0)
        return GCD(b, a % b);
    else
        return a;
    
}

int fibonacci(int a){
    if (a==1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    }
    else
        return fibonacci(a-1)+fibonacci(a-2);
    
}

void main(){
    int responce = -1;
    printf("Choose your operation by entering the serial number of the operation : \n 1)Factorial\t\t2)GCD\t\t3)Fibonacci Series");

    while (responce>3||responce<1)
    {
        printf("\nYour Responce : ");
        scanf("%d",&responce);
        if (responce>3||responce<1)
        {
            printf("\nInvalid input please try a valid input !\n");
        }
    }
    switch (responce)
    {
    case 1 :{
        int num_fact;
        printf("Enter number for which you want to find Factorial : ");
        scanf("%d",&num_fact);
        printf("Factorial of %d is %d ",num_fact,factorial(num_fact));
    }

    case 2 :{
        printf("Enter numbers to evaluate their GCD : \n");
        int num1,num2;
        scanf("%d %d",&num1,&num2);
        printf("GCD of %d and %d is %d",num1,num2,GCD(num1,num2));
    } 
        break;

    case 3 :{
        int num_fib;
        printf("Enter the number of terms you want to consider : ");
        scanf("%d",&num_fib);
        printf("%dth Fibonacci term is %d ",num_fib,fibonacci(num_fib));
    }
    }
}