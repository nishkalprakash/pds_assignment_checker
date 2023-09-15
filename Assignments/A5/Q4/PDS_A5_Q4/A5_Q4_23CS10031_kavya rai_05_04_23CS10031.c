#include<stdio.h>
#include<stdlib.h>
int main()
{ int i,j,arr1[20],arr2[20],arr3[20],min=2001;
   for(i=0;i<20;i++)
	{
	  arr1[i]=1000+rand()%(1001);
          arr2[i]=15+rand()%(11);
          arr3[i]=rand()%101;
	}
   for(i=0;i<20;i++)
        {
          for(j=0;j<20;j++)
           {
              if(arr2[i]==arr2[j])
                {
                  printf("Roll:%d Age:%d Mark:%d\n",arr1[j],arr2[j],arr3[j]);
                }
            }
           printf(".................\n");
         }
   for(i=0;i<20;i++)
        {
          for(j=0;j<20;j++)
           {
              if(arr3[i]==arr3[j])
                {
                  printf("Roll:%d Age:%d Mark:%d\n",arr1[j],arr2[j],arr3[j]);
                }
            }
           printf(".................\n");
         }
 
}
