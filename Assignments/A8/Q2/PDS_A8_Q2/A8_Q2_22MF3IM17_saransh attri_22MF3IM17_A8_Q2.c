/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
ASSIGNMENT 8*/

#include<stdio.h>

int main()
{
  
    int row,column;

    printf("number of elements in one row\n");
    scanf("%d",&row);
    printf("number of elements in one column\n");
    scanf("%d",&column);
    int a[row][column];

    printf("enter the elements\n");

         // to input the elements
        for(int e=0;e<row;e++)
    {
        for (int g= 0;g <column; g++)
        {
            scanf("%d",&a[e][g]);
        }
        printf("\n");
    }
       int min=100;
       int max=0;

    for(int i=0;i<column;i++)
    {
        for (int b = 0;b <row; b++)
        {
            if(min>a[b][i])
                min=a[b][i]

for(int k=0;k<column;k++)
    {
        for (int l = 0;l <row; l++)
        {
            if(max<a[k][l])
                max=a[k][l]
        }
    }

        }

if (max==min)

printf("%d is the saddle point",max):

   }

   


}
