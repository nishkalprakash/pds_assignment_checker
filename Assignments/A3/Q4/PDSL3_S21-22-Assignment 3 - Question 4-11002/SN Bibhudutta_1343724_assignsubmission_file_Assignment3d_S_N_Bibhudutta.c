// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 1

#include<stdio.h>

int max = 20;
int n, num[max];
int flaga,key;

//CHECKING FOR SORTING
int sort(int num[max])
{
    int k;
    for (k=0;k<max;k++)
    {
        if (num[k+1]>num[k])
            break;
    }
    flaga = 1;
}

// LINEAR SEARCH

int linear(int num[max])
{
    int key,i,flag = 0;

    for(i = 0; i < max; i++)
    {
        if(num[i] == key)
        {
            flag = 1;
            break;
        }
    }

    return flag;

/*if(flag == 1)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");

    return 0;*/
}

int iterativeBinarySearch(int array[], int start_index, int end_index, int key){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == key)
         return middle;
      if (array[middle] < key)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}

int main()
{
    int p=0;
    int type;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: ")
    for (p=0;p<max;p++)
    {
        scanf("%d", &num[p]);
    }

    int sort(num);
    
    if (flaga!=1)
    {
        printf("Enter the elements in sorted order: ")
        for (p=0;p<max;p++)
    {
        scanf("%d", &num[p]);
    }
    }
    
    printf("Enter the key: ")
    scanf("%d",&key)
    print("Choose the algorithm: Type 1 for linear search and 2 for binary search");
    scanf("%d", &type);
    
    if(type=1)
    {
        int linear(num);
        if(flag == 1)
        printf("Successful search\n");
        else
        printf("Search Not Found\n");
    }
    else if(type=2)
    {
        int iterativeBinarySearch(num, 0, max-1, key)
        if(found_index == -1 ) {
      printf("Search Not Found");
   }
        else {
      printf("Successfull search");
   }
   return 0;
}

}