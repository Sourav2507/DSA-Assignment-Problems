//Write a menu driven program to  1)Insert  2)Delete  3)Peek  4)Display     in a queue using LINKED LISTS

#include <stdio.h>

struct QUEUE{
    int data;
    struct QUEUE *next;
}*FRONT=NULL,*REAR=NULL;

void enqueue(int key){
    struct QUEUE *ptr;
    ptr = (struct QUEUE*)malloc(sizeof(struct QUEUE));
    if (ptr!=NULL)
    {
        if (FRONT==NULL)
            FRONT=ptr;
        if (REAR!=NULL)
            REAR->next=ptr;
        REAR=ptr;
        ptr->data = key;
        ptr->next = NULL;   
    }
}

void dequeue(){
    struct QUEUE *ptr=FRONT;
    if (ptr==NULL){
        printf("QUEUE Underflow!");
        return;
    }
    FRONT = FRONT->next;
    printf("%d deleted from the QUEUE",ptr->data);
    free(ptr);
}

int peek(){
    if (FRONT==NULL)
    {
        printf("QUEUE empty");
        return -999999999;
    }
    return FRONT->data;
}

void display(){
    struct QUEUE *ptr = FRONT;
    printf("\nContents of the QUEUE are : \n\n");
    while (ptr)
    {
        printf(" %d ",ptr->data);
    }
}

void main(){
    int responce = 0,input,limit;
    printf("Please enter your operation limit : ");
    scanf("%d",&limit);
    printf("Please enter the sequence number of the operation you want to perform :\n\t1>Insert\n\t2>Delete\n\t3>Peek\n\t4>Display");
    
    for (int i = 1; i <= limit; i++)
    {
            while (responce>4||responce<1)
        {
            printf("\nYour responce : ");
            scanf("%d",&responce);
            if (responce>4||responce<1)
            {
                printf("Invalid sequence number enter a valid sequence number!");
            }   
        }
        switch (responce)
        {
        case 1 :{
            printf("Enter the number you want to add in the Queue : ");
            scanf("%d",input);
            enqueue(input);
            display();
            responce = 0;
        }

        case 2 :{
            dequeue();
            display();
            responce = 0;
        }
        
        case 3 :{
            int k = peek();
            if (k!=-999999999)
                printf("%d peeked from the QUEUE");
            display();
            responce = 0;
        }
        
        case 4 :{
            display();
            responce = 0;
        }
        }
    }
}
