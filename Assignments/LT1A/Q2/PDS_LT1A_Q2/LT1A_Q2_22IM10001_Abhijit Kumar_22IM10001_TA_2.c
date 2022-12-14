//Name: Abhijit Kumar 
//Roll no. 22IM10001
//Test Set A
//Topic of question: Printing a pattern with increasing output of pattern elements
#include <stdio.h>
int main()
{
    int ROWS,r,c,n;                              // ROWS stores the row count
    printf("Enter the value of ROWS: ");
    scanf("%d", &ROWS);
if(ROWS<0)
printf("Invalid Input");
else
{

    for (r=1,n=1;r<=ROWS;r++)           	 // r loop for rows
    {
        for (c=0;c<r;c++)    			 // c loop for columns
        {                         
                printf("%d ",n);		 // Prints the value which has been set to 1 and keeps increasing by 1 as long as the loop condition is satisfied. 
		n++;            
        }
        printf("\n");                  		 // This adds a new line after every c run
    }
}
    return 0;
}
