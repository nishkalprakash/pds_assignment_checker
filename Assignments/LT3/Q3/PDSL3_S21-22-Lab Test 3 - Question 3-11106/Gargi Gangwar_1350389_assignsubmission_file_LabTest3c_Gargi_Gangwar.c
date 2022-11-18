//Gargi Gangwar
//21MF10017
//C program to generates all numbers of 5 digits, made of c and d, and not divisible by c + d

#include<stdio.h>

//prototype for combination function
void combo(int c, int d, int data[], int start, int end, int index);

//main function that prints all combinations
void printCombo(int c, int d, int n)
    {
     int data[5];   // temporary array that stores all combinations

     combo(c,d, data, 0, n-1, 0);   // Printing all combos using temporary array 'data[]'
    }

void combo(int c,int d, int data[], int start, int end, int index)
    {
       // printing the current combination
       if (index == 5)
       {
        for (int j=0; j<5; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
       }

       for (int i=start; i<=end && end-i+1 >= 5-index; i++)
       {
        data[index] = c;
        combo(c,d, data, i+1, end, index+1);
       }
    }

int main()
{
    int c,d,sum;
    //read two digits from 1 to 9
    printf("Enter 1st digit from 1 to 9\n");
    scanf("%d\n",&c);
    printf("Enter 2nd digit from 1 to 9");
    scanf("%d\n",&d);
    //summing the two numbers
    sum=c+d;
    printf("The sum is %d\n",sum);

}
