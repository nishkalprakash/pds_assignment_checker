/*
section 14
roll no:22MI10013
name:animesh mishra
assignment no:11
desccription:
*/
#include<stdio.h>
void main()
{
   int i,n;
   float s=0.0;
   printf("input the number of terms :");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
        if(i<n)
        {
       printf("1/%d + ",i);
       s+=1/(float)i;
         }
       if(i==n)
       {
       printf("1/%d",i);
       s+=1/(float)i;
       }
       }
           printf("\nsum of series upto %d terms is : %f\n" ,n,s);
}
