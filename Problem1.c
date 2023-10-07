//WAP to read and display numbers using an array

#include<stdio.h>
void main(){
    int i,array[10];
    printf("Enter elements to initialise the array : \n");

    //Initilising the array
    for ( i = 0; i < 10; i++)
    {
        printf("Enter element for index %d : ",i);
        scanf("%d",&array[i]);
    }
    
    //Printing the Array
    printf("\nElements of the array are : ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d ",array[i]);
    }
}