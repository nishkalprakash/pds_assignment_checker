/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int maxAlphaValue(int a[]);
int main()
{ int i, a[20];
printf("enter the array"); //assuming the array size to be 20
 for ( i = 0; i < 20; i++)
 { scanf("%d",&a[i]);
 }
 printf(" output : %d",maxAlphaValue(a));//function call

return(0);
}
int maxAlphaValue(int a[]){int i,j,count,max_count=0; //function for finding max alpha value
    for ( i = 0; i < 20; i++)
 {
     for ( j = 0; j <=i; j++)
     {
      if ((a[j]%a[i]==0)&&(i!=j))
      { count++;
      }}
      if (count>max_count)
      {
          max_count=count;
      }



 }
 return max_count;
}
