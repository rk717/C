/**
 * C program to search an element in array using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100


/* Function declaration */
void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);



int main()
{
    int array[MAX_SIZE];
    int size, toSearch, searchIndex;


    /*
     * Input size and elements in array
     */
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    inputArray(array, size);


    // Input element to search from user
    printf("Enter element to search: ");
    scanf("%d", &toSearch);


    // Call search funtion to search element in array
    searchIndex = search(array, size, toSearch);


    // Print search results
    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", toSearch, searchIndex + 1);


    return 0;
}




/**
 * Function to input elements in array.
 *
 * @arr     Pointer to integer array
 * @size    Size of the array
 */
void inputArray(int * arr, int size)
{
    // Pointer to last array element arr[0]
    int * arrEnd = (arr + size - 1);


    // Run loop till last array element
    while(arr <= arrEnd)
    {
        scanf("%d", arr++);
    }
}




/**
 * Function to perform linear search in array. The function
 * returns an integer between 0 to size-1 specifying first 
 * index of successful searched element in array.
 *
 * @arr      Pointer to integer array.
 * @size     Size of the array.
 * @toSearch Element to search within array.
 *
 * @return   Returns -1 if element does not exists in array, 
 *           otherwise returns element index.
 */
int search(int * arr, int size, int toSearch)
{
    int index = 0;

    // Pointer to last array element arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /*
     * Run a loop from start of array to last array element (arr <= arrEnd), 
     * until current array element does not match element to search.
     */
    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }


    // If element is found
    if(arr <= arrEnd)
        return index;
    
    return -1;
}


/////////////////////////////////////////////
int search(int * arr, int size, int toSearch)
{
    // Pointer to last array element arr[size - 1]
    int * arrEnd = (arr + size - 1);
    
    while(arr <= arrEnd && *arr != toSearch) arr++;
    
    // If element is found
    if(arr <= arrEnd)
        return (arrEnd - arr) / sizeof(int) + 1;

    return -1;
}
