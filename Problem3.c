//WAP to find whether the array of integers contains an duplicate number

#include <stdio.h>

//Checking Duplicates
void checkDuplicate(int array[]){
    for ( int i = 0; i < 10; i++)
    {
        for ( int j = i+1; j < 10; j++)
        {
            if (array[i]==array[j])
            {
                printf("Duplicate element found!");
                return;
            }
            
        }
    }
    printf("No Duplicte element found!");
}

void main(){
    int array[10];
    printf("Initialise your Array:\n");

    //Initialising an Array
    for ( int i = 0; i < 10; i++)
    {
        printf("Enter element for index %d : ",i);
        scanf("%d",&array[i]);
    }

    //Checking Duplicates
    checkDuplicate(array);

}