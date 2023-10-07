//WAP to perform push() operation of 5 elements in a stack and perform pop() operation and display the stac after each operation . Write this program in a menu driven program.

#include <stdio.h>

#define SIZE 20
int STACK [SIZE];
int TOP = -1;

void push(int a){
    if (TOP==SIZE-1)
    {
        printf("STACK Overflow!");
        return;
    }
    TOP++;
    STACK[TOP] = a;
    
}

int pop(){
    if (TOP==-1)
    {
        printf("STACK Underflow!");
        return -99999;
    }
    int temp = STACK[TOP];
    TOP--;
    return temp;
}

void printArray(){
    printf("Current contents of the STACK are : ");
    for (int i = 0; i <= TOP; i++)
    {
        printf(" %d ",STACK[i]);
    }
    
}

 void main(){
    int limit,responce = 0,num;
    printf("Please select your operation limit : ");
    scanf("%d",&limit);
    printf("\nEnter 1)to push()   2)to pop() : ");

    for (int i = 1; i <= limit; i++)
    {
        while (responce<1||responce>2)
        {
            printf("\nEnter your operation : ");
            scanf("%d",&responce);
            if (responce<1||responce>2)
            {
               printf("Invalid input try a valid input");
            } 
        }
        if (responce==1)
        {
            printf("Enter value to be pushed in the stack : ");
            scanf("%d",&num);
            push(num);
            printArray();
            responce = 0;
        }
        if (responce==2)
        {
            if (TOP==-1)
            {
                pop();
            }
            else{
                printf("%d popped successfully from the stack ",pop());
                printArray();  
            }
            responce = 0;
        }
    }
 }
