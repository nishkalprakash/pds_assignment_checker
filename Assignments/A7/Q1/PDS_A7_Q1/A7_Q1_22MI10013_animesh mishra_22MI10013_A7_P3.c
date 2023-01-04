#include<stdio.h>
int main()
{
  int arr1[100],i,n,p,inval;
   printf("\n\ninsert new value in the sorted array:\n");
   printf("-------------------------------------------\n");
  printf("input the size of array : ");
  scanf("%d", &n);
/*stored value into the array*/
   printf("input %d elements in the array in ascending order;\n",n);
   for(i=0;i<n;i++)
      {
     printf("element - %d : ",i);
     scanf("%d",&arr1[i]);
    }
  printf("input the value to be inserted : ");
  scanf("%d",&inval);
  printf("the exist array list is :\n");
  for (i=0;i<n;i++)
  printf("% 5d", arr1[i]);
/* determining position*/
 for(i=0;i<n;i++)
 {

  if(inval<arr1[i])
   {
      p=i;
      break;
   }
    else
   {
      p=i+1;
    }
   }
/* move all data at right side */
 for(i=n+1;i>=p;i--)
   arr1[i]=arr1[i-1];
   arr1[p]=inval;
   printf("\n\n after insert the list is :\n");
  for(i=0;i<=n;i++)
    printf("% 5d",arr1[i]);
    printf("\n");
 return 0;
}
