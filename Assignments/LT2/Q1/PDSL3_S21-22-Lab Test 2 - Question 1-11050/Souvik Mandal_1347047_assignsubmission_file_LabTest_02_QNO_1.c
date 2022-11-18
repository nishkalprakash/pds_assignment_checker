/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/


#include <stdio.h>

int function(int array[], int n)
{


    int largest = array[0];
    int p = 0, q = 0;
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + array[j];
            if (sum > largest)
            {
                p = i;

                q = j;
                
                largest = sum;
            }
        }
    }

    printf("\n largest sum = ");
    printf(" %d", largest);

    printf("\n Sub-arrays");
    for (int k = p; k <= q; k++)
    {
        printf(" %d ", array[k]);
    }
}


int main()
{
    int n;

    printf("Enter n:\n");
    scanf("%d", &n);
    
    
    int array[n];
    printf("Enter elements:\n");


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }



    function(array, n);
    return 0;


}