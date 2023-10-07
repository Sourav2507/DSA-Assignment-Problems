//WAP to print the positioon of the smallest number in an Array

#include <stdio.h>
void main(){
    int i,min=999999999,array[10],minIndex;
    printf("Initialise your Array:\n");

    //Initialising an Array
    for ( i = 0; i < 10; i++)
    {
        printf("Enter element for index %d : ",i);
        scanf("%d",&array[i]);
        if (array[i]<min)
        {
            min = array[i];
            minIndex = i;
        }
    }

    //Printing Smallest Element
    printf("Smallest element in the array is %d present at index %d",min,minIndex);
}