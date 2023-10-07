//WAP to insert a number in a sorted array in Ascending order
#include <stdio.h>

void main()
{
   int arr1[100],i,n,p,inval;
    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("Enter element for index %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&inval);
   printf("The exist array is :\n");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);

   // Determining the position for new value
   for(i=0;i<n;i++)
   {
   	
    if(inval<arr1[i])
     {
       p = i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }

   // Moveing all data at right side of the array 
   for(i=n+1;i>=p;i--)
      arr1[i]= arr1[i-1];

   // Inserting value at the proper position 
      arr1[p]=inval;
      printf("\n\nAfter Insertion the Array is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}
