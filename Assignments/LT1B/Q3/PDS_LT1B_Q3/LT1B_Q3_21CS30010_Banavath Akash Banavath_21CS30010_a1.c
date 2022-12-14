/*name:banavath akash
roll no: 21CS30010
dept:computer science and engineering*/
#include<stdio.h>
#include<math.h>
int main()
 {
     int a[100],n,i,max=-1000,max2;
     printf("enter the number:");
     scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       printf("%d ",i);
       scanf("%d",&a[i]);
       if(a[i]<0)
        { printf("error1");
        return 0;
      }
   
     }
     
      for(i=0;i<n;i++)
      { 
      
       if(max<a[i])
        {
         max=a[i];
       }
        
     }
     printf(" largest number :%d\n",max);
	max2=-1000;
	for(i=0;i<n;i++)
       {
         if(a[i]>max2 && a[i]<max)
         {
           max2=a[i];
         }
         
      }
	printf(" second largest number :%d",max2);
    
  return 0;
     
 }

