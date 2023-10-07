//WAP to delete a number from a particular location in an Array.
//WAP to delete a number from a particular location in an Array.
#include <stdio.h> 
  
void main ()  
{  
    int arr[50];  
    int pos, i, num;
    printf (" \n Enter the number of elements in an array:  ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
      
    for (i = 0; i < num; i++ )  
    {   printf ("Enter element for %dth index of the array : ", i);  
        scanf (" %d", &arr[i]);  
    }  
      
    printf( " Define the index of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
      
    if (pos >= num || pos < 0)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        printf("\n\n%d successfully deleted from the array\n\n\n",arr[pos]);
        for (i = pos; i < num; i++)  
        {  
            arr[i] = arr[i+1];
        }  
          
        printf (" \n The resultant array is: \n");  
          
        for (i = 0; i< num-1; i++)  
        {  
            printf (" %d  ", arr[i]);  
        }  
    }  
}
