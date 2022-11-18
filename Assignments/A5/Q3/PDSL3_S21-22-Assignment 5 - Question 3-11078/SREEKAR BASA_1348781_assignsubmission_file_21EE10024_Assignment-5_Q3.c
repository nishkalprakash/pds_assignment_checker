/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 5
Question : 3
*/

#include <stdio.h>

int saddle(int a[][10],int x, int y)
{
    int i,j,k,min,max,t;
    int k1,k2,k3,k4;
    int l1,l2,l3,l4;

    for(i=0;i<x;i++)   //inspecting rows //
    {
        min = a[i][0]; // initial assumption //
        max = a[i][0]; // initial assumption //
        for(j=0;j<y;j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                k1 = i;
                k2 = j;
            }
            if(a[i][j]>max)
            {
                max = a[i][j];
                k3 = i;
                k4 = j;
            }
        }
    }
    for(i=0;i<y;i++)    //inspecting columns x and y are changed //
    {
        min = a[i][0];    // initial assumption //
        max = a[i][0];    // initial assumption //
        for(j=0;j<x;j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                l1 = i;
                l2 = j;
            }
            if(a[i][j]>max)
            {
                max = a[i][j];
                l3 = i;
                l4 = j;
            }
        }
    }

    if((k1==l3) && (k2==l4))
    {
        t = (k1*10)+k2 ;
    }

    else{

    if((k3==l1) && (k4==l2))
    {
        t = (k1*10)+k2 ;
    }
    else return 0;
    }
}

int main()
{
    int row,col;
    int i,j,k,x,y,t;
    printf(" Enter no.of rows : ");
    scanf("%d",&row);
    printf(" Enter no.of rows : ");
    scanf("%d",&col);
    int a[row][col];

    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
     {
         printf(" a[%d][%d] = ",i,j);
         scanf("%d",&a[i][j]);
     }
    }

    k = saddle(a,row,col);
    x = k/10 ; // We get row no. //
    y = k%10 ; // we get col no. //
    if(k==0) printf(" No saddle point");
    else printf(" saddle point is a[%d][%d] = %d",x,y,a[x][y]);

}
