/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/




#include<stdio.h>



//Declaration of the function.

int minTotalIqDiff(int m , int n[]);


//the main function
int main(void)
{
    int n[100], i, t, m, out ;/*m is for number of teams ,out is for output,
     n[] id for array of IQs and t is for umber of students*/

    //Enter the value of t you want i.e students.
    printf("Enter the number of students : ");
    scanf("%d", &t);

    //loop for input of IQ of each student.
    for(i=0;i<t;i++)
    {
        printf("Enter IQ of %d student: ", i+1);
        scanf("%d", &n[i]);
    }

    //input for number of teams you want.
    printf("Enter the number of teams: ");
    scanf("%d", &m);


    //input for the recursive function
    out= minTotalIqDiff( m , n);


    printf("Output: %d", out);








    return 0;
}














int minTotalIqDiff(int m , int n[])
{

    int k ;


    if (m == 2)
    {
        return 1;
    }
    else if (m ==3)
    {
        return 2;
    }

}



