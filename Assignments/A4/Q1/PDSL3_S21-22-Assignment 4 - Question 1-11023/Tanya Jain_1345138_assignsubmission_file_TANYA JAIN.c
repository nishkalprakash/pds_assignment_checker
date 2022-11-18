/*
 Tanya Jain
 assignment 4 ques 1
 */

#include<stdio.h>

//function to make all possible combinations of l elements from total n
 create_combinations(int store[], int array[], int print, int l, int start, int end)
{
    if (print == l)
    {
        for (int i = 0; i < l; i++)
        printf("%d ", array[store[i]]);
        printf("\n");
        return 0;
    }
    for (int i = start; i <= end; i++)
    {
        store[print] = i;
        create_combinations(store, array, print + 1, l, i, end);
    }
    return 0;
}

//function for storing all combinations
int display_combinations(int array[], int n, int l)
{
    int store[l + 1];
 create_combinations(store, array, 0, l, 0, n - 1);
    return 0;
}

//main function
int main()
{
    
    //declaring variables
    int array[100];
    int n;
    int l;
    
    printf("Give n:");
    scanf("%d",&n);                               //taking input n from user
    
    printf("give %d integers for array:",n);
    for(int i=0; i<n; i++)
    {
    scanf("%d", &array[i]);                    //taking input elements for array from user
    }

    printf("give l(combination length):");
    scanf("%d",&l);                            ////taking input l(combination length from user
    
    printf("The all combinations are : \n");       //printing all possible combinations of r elements fron total n
    display_combinations(array, n, l);
    
    return 0;
}