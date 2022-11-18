/*This program is to do a program to find the minimum possible difference between team IQs as an integer value*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : test 2
  question 3*/
#include<stdio.h>
int n[20],m;
int minTotalIqDif(int M,int sn[M])
{
   int i,j,temp;
   for(i=0;i<m-1;i++)
   {
      for (j=0;j<m-i-1;j++)
      {
         if(sn[j]>sn[j+1])
         {
            temp=sn[j];
            sn[j]=sn[j+1];
            sn[j+1]=temp;
         }
      }
   }

}
void main()
{
   int i;
   printf("Enter total number of students : ");
   scanf("%d",&m);
   printf("Enter %d elements one by one : ",m);
   for(i=0;i<m;i++)
   {
      scanf("%d",n[i]);
   }
   minTotalIqDif(m,n);
}
