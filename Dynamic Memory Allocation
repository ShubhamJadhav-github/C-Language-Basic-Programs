// C Program for dynamic memory allocation

#include<stdio.h>

// malloc() is a library function that allows C to allocate memory dynamically from the heap.
// The heap is an area of memory where something is stored. 
// malloc() is part of stdlib. h and to be able to use it you need to use #include <stdlib.h>
#include<stdlib.h>

int main()
{
    int *arr,n;

    //Accepting size of array into an integer variable n
    printf("ENter size of array: ");
    scanf("%d",&n);
    
    // malloc() is a function which takes an integer value as an argument and returns a value of type void pointer value
    // This void pointer should be converted into an integer pointer value 
    // Because we want to create an array of integer values
    arr = (int*)malloc((sizeof(int)*n));

    //Accepting Values from the user
    for(int i=0;i<n;i++)
    {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //Displaying Values on screen
    printf("\n\nYour Array: ");
    for(int i=0;i<n;i++)
    {
        printf("\nElement no. %d = %d",i+1,arr[i]);
    }
    return 0;
}
