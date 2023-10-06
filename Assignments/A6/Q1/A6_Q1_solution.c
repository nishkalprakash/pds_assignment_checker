/*
1.	Write a C program that would help perform various types of operations on an integer array. First declare a global  integer array of size 100 named arr  and an integer variable named size that indicates the present size (number of valid entries) of the array. For example, if size is 50, only arr[0] to arr[49] contain valid values and  arr[50] to arr[99] do not contain valid values and are to be ignored. Your program  should have the following functions:
a.	main: Perform the following in an infinite loop: a) display the following menu choice, b) read the user choice and c) call the appropriate function based on the user choice. It should exit when the user enters either 0 or any number greater than or equal to 9. 
                   Menu choices:
i.	1 ----   Fill
ii.	2 ----   Exchange
iii.	3 ----   Rotate right
iv.	4 ----   Rotate left
v.	5 ----   Segregate
vi.	6 ----   Search
vii.	7 ----  Fold 
viii.	8 ----  Analyze
ix.	 0, 9 or any higher number  ----   Exit 

b.	fill: This function should prompt the user to enter the size of the array to be used and store the entered value in the global variable size. It should only accept value of size  in the range [1,100], if an entered value is outside this range, it should keep on prompting until, the user enters a valid value within the range. It should then fill the array with random integral numbers in the range [100,999] generated  by appropriately calling the rand() library function.  It should finally display the array contents nicely formatted.                                                                                          
c.	exchange: This function should first display the elements of the original array. It should then exchange the lower and upper halves of the array (illustrated in the following diagram) and display the resultant array. If the number of elements in the array is odd, the middle element remains undisturbed. Do not use an extra array for implementing the exchange operation, otherwise 50% penalty will apply.                                                                                                             

 

d.	rotate right: It should first display the elements of the original array. It should then right rotate the array one position (the last element should become the first element) and then display the resultant array.  An example is given in the following.                                                                    
 
e.	rotate left: It should first display the elements of the original array. It should then left rotate the array one position (the first element should become the last element) and then display the resultant array.  An example is given in the following.                                                                
 
f.	segregate: It should first display the elements of the original array. Then, it should segregate the odd and even numbers in the array without disturbing their relative position among themselves. For example, if the original array contents is [8,7,13,17,20,5,40] then the segregate function should change it as [8,20,40,7,13,17,5].                                                                                          
g.	search: It should first display the elements of the original array. It should then ask the user to enter an integer value to be searched. It should then perform a linear search for the element and display the array index at which the element is located. If the element is not present in the array, it should display “Not found.”                                                                                                        
h.	Fold: This function should fold the array in the middle and add the corresponding values. If the array is [1,2,3,4,5]  after folding it should be [6,6,3]. That is, it should fold it in middle and add the corresponding values as shown:                                                                                      
 
           If the array is [1,2,3,4,5,6],  after folding it should be [7,7,7]. That is, it should fold it in middle and add the corresponding values as shown:     
 
i.	analyze: This function should first display the elements of the original array. It should then find and display all increasing sequence of consecutive numbers and also display the largest increasing sequence. It may so happen that there are no increasing sequences of numbers. In this case, it should display an appropriate message.  If there are multiple largest sequences, displaying  any one of these should be fine. If there are no sequences of increasing numbers, it should display “No increasing sequence of numbers present”. [Hint: To determine the largest increasing sequence, you need to define  2 integer variables pos, and isize to keep track of the position of the array at which the largest sequence occurs and also the sequence size and update these as required. Further, you can use another pair of variables: mpos and msize to keep track of the position of the maximum increasing sequence and its size.]
Example: if the array elements are [1,5,3,2,7,15,23,12,15,21], then it should display: The  increasing sequences are: (1,5),  (2,7,15,23), (12,15,21) and the largest increasing sequence is  (2,7,15,23). 
*/

#include <stdio.h>
#include <stdlib.h>

int arr[100];

void fill();
void exchange();
void rotate_right();
void rotate_left();
void segregate();
void search();
void fold();
void analyze();

int main()
{
    int choice;
    
    while(1)
    {
        printf("Menu choices:\n");
        printf("1 ----   Fill\n");
        printf("2 ----   Exchange\n");
        printf("3 ----   Rotate right\n");
        printf("4 ----   Rotate left\n");
        printf("5 ----   Segregate\n");
        printf("6 ----   Search\n");
        printf("7 ----   Fold\n");
        printf("8 ----   Analyze\n");
        printf("0, 9 or any higher number  ----   Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                fill();
                break;
            case 2:
                exchange();
                break;
            case 3:
                rotate_right();
                break;
            case 4:
                rotate_left();
                break;
            case 5:
                segregate();
                break;
            case 6:
                search();
                break;
            case 7:
                fold();
                break;
            case 8:
                analyze();
                break;
            default:
                exit(0);
        }
    }
    
    return 0;
}

void fill()
{
    int i;
    int size;
    
    do
    {
        printf("Enter size of array: ");
        scanf("%d", &size);
    }while(size < 1 || size > 100);
    
    for(i=0; i<size; i++)
    {
        arr[i] = rand()%900 + 100;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void exchange()
{
    int i;
    int size;
    int temp;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size/2 + i + size%2];
        arr[size/2 + i + size%2] = temp;
    }
    
    printf("Array elements after exchange are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotate_right()
{
    int i;
    int size;
    int temp;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    temp = arr[size-1];
    for(i=size-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
    printf("Array elements after right rotation are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotate_left()
{
    int i;
    int size;
    int temp;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    temp = arr[0];
    for(i=0; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    
    printf("Array elements after left rotation are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void segregate()
{
    int i;
    int size;
    int temp;
    int n;
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    n = size;
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            temp = arr[i];
            arr[i] = arr[size-1];
            arr[size-1] = temp;
            size--;
            i--;
        }
    }
    
    printf("Array elements after segregation are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search()
{
    int i;
    int size;
    int key;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter element to be searched: ");
    scanf("%d", &key);
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    
    printf("Element not found\n");
}

void fold()
{
    int i;
    int size;
    int temp;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i=0; i<size/2; i++)
    {
        arr[i] += arr[size-1-i];
    }
    
    for(i=size/2; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    printf("Array elements after folding are: \n");
    for(i=0; i<size/2; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void analyze()
{
    int i;
    int size;
    int pos;
    int isize;
    int mpos;
    int msize;
    
    size = 0;
    while(arr[size] != 0)
    {
        size++;
    }
    
    printf("Array elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    pos = 0;
    isize = 1;
    mpos = 0;
    msize = 1;
    
    for(i=1; i<size; i++)
    {
        if(arr[i] > arr[i-1])
        {
            isize++;
        }
        else
        {
            if(isize > msize)
            {
                mpos = pos;
                msize = isize;
            }
            pos = i;
            isize = 1;
        }
    }
    
    if(isize > msize)
    {
        mpos = pos;
        msize = isize;
    }
    
    if(msize == 1)
    {
        printf("No increasing sequence of numbers present\n");
    }
    else
    {
        printf("The increasing sequences are: ");
        for(i=mpos; i<mpos+msize; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        
        printf("The largest increasing sequence is: ");
        for(i=mpos; i<mpos+msize; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}