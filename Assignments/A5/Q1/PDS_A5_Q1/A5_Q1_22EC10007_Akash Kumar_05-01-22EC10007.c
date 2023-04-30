/*
* Section 2
* Roll No. : 22EC!0007
* Name : Akash Kumar
* Assignment : 5
* Question 1
* Description : Getting n number of input from user, and arranging them according to their sign
*/

#include<stdio.h>
#define N 100

int main()
{


    int myarr [N];


    // number of inputs
    int n;

    printf("Enter the number n\n");
    scanf("%d", &n);

    while (n > N )
    {
        printf("Error: n > 100\n");
        printf("Enter the number n\n");
        scanf("%d", &n);
    }


    // Defining an array


    int i = 0;
    while (i< n)
    {
        int t;
        printf("Enter the number %d\n", i+1);
        scanf("%d", &t);
        myarr[i] = t;
        i++;
    }

    int a0, a1, a2, a3, a4;  // saving the original inputs in original order

    a0 = myarr[0];
    a1 = myarr[1];
    a2 = myarr[2];
    a3 = myarr[3];
    a4 = myarr[4];


    // printing the original array

    printf("Original Array : ");
    int j = 0;
    while (j<n)
    {
        printf("%d ", myarr[j]);
        j++;
    }

    printf("\n");






    // printing the rearranged array


    int n0, n1, n2,n3, n4;  // to store the rearranged values



    // Printing the negative numbers
    j = 0;
    int k = 0;
    while (j<n)
    {
        if (myarr[j] < 0)
        {
            myarr[k] = myarr[j];
            if (k == 0)
            {
                n0 = myarr[k];
            }

            if (k == 1)
            {
                n1 = myarr[k];
            }

            if (k == 2)
            {
                n2 = myarr[k];
            }

            if (k == 3)
            {
                n3 = myarr[k];
            }

            if (k == 4)
            {
                n4 = myarr[k];
            }

            k++;

        }

        j++;
    }


    myarr[0] = a0;
    myarr[1] = a1;
    myarr[2] = a2;
    myarr[3] = a3;
    myarr[4] = a4;


    // Printing if any input = 0
    j = 0;
    while (j<n)
    {
        if (myarr[j] == 0)
        {
            myarr[k] = myarr[j];
            if (k == 0)
            {
                n0 = myarr[k];
            }

            if (k == 1)
            {
                n1 = myarr[k];
            }

            if (k == 2)
            {
                n2 = myarr[k];
            }

            if (k == 3)
            {
                n3 = myarr[k];
            }

            if (k == 4)
            {
                n4 = myarr[k];
            }
            k++;
        }
        j++;
    }


    myarr[0] = a0;
    myarr[1] = a1;
    myarr[2] = a2;
    myarr[3] = a3;
    myarr[4] = a4;

    // Printing the positive numbers
    j = 0;
    while (j<n)
    {
        if (myarr[j] > 0)
        {
            myarr[k] = myarr[j];
            if (k == 0)
            {
                n0 = myarr[k];
            }

            if (k == 1)
            {
                n1 = myarr[k];
            }

            if (k == 2)
            {
                n2 = myarr[k];
            }

            if (k == 3)
            {
                n3 = myarr[k];
            }

            if (k == 4)
            {
                n4 = myarr[k];
            }
            k++;
        }
        j++;
    }


    myarr[0] = n0;
    myarr[1] = n1;
    myarr[2] = n2;
    myarr[3] = n3;
    myarr[4] = n4;




    printf("Rearranged Array : ");
    k = 0;

    while (k < n)
    {
        printf("%d ", myarr[k]);
        k++;
    }

    return 0;
}

