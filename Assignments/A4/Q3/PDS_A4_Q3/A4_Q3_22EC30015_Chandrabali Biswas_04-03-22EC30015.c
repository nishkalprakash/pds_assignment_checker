/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:4
Description:Prints Numero-pyramid
*/
#include <stdio.h> //header file
int main()//main
{
    int n,mid,num=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    mid=((2*n-1)+1)/2;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=2*n-1;j++)
       {
          if(j<mid-i+1 || j>mid+i-1)  //prints blank space
          {
              printf(" ");
              continue;
          }
          if(j<=mid)
            {
                if(num==9)
                    num=0;
                else
                    num=num+1;
               printf("%d ",num);
            }
          if(j>mid)
          {
              if(num==0)
                num=9;
              else
                num=num-1;
              printf("%d ",num);
          }

       }
       printf("\n");
    }
    return 0;  //end
}
