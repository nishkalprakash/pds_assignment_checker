//NAME: TEJAARKA PIRIDI

//ROLL NO: 21MT10036

// LABTEST 2

// QUESTION 1



#include<stdio.h>


//main function
int main()
{
    int length,mvalue=0,lvalue=0;   //intialiesd values of ,m l

    //ENTERING THE NUMBER OF ELEMENTS


    printf("Type the length of the array\n");


    scanf("%d",&length);

    //ENTERING THE ARRAY ELEMENTS OF GIVEN LENGTH

    int array[length];

    printf("type the elements of the array\n");


    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);

    }


   int largestvalue=array[0];


    for(int i=0;i<length;i++)
    {
        int sum=0;

        //INCLUDE CURRENT ELEMENT TO PREVIOUS SUBARRAY ONLY


        //WHEN IT CAN ADD TO A BIGGER NUMBER THAN ITSELF.

        for(int j=i;j<length;j++)

        {
            sum=sum+array[j];


            if(sum>largestvalue)
            {
                mvalue=i;lvalue=j;
                largestvalue=sum;
            }
        }
    }

    //OUTPUT PRINTING OF SUBARRAY OF LARGER SUM

    //OUTPUT PRINTING OF THE VALUE OF LARGE SUM.

    printf("\n The required largest  contiguous sub array is");


    for(int x=mvalue;x<=lvalue;x++)


    {
        printf(" %d ",array[x]);

    }

    printf("\n The required sum of the largest contiguous sub array is");


    printf(" %d",largestvalue);


    return 0;
}
