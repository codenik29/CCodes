#include<stdio.h>
int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int oned_array[5];
   /*Counter variables for the loop*/
   int i, n=5;
   for(i=0; i<n; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &oned_array[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<n; i++) 
   {
    printf("%d ", oned_array[i]);
	}


    // Insert one element into the array at the end by replacing the last element

    int a;
    printf("Insert A Number ");
    scanf("%d", &a);
    oned_array[n - 1] = a;
    
    //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<n; i++) 
   {
    printf("%d ", oned_array[i]);
	}
    return 0;
}