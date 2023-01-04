/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 7*/
#define max_size 100

#include<stdio.h>
int main()
{
  int arr[max_size];
  int size,i,j,count=0,key,found;
  printf("Enter the  number of elements in array:");
 scanf("%d\n",&size);
printf("Enter the elements: \n");
  for(i=0;i<size;i++)
            { 
                 
              scanf("%d",&arr[i]);
            }

for(i=0;i<size;i++)
{  
  key=arr[i];
{ 
  for(j=0;j<size;j++)

   if (arr[j]==key)
 {
  found=1;
  count ++;
} printf("%d appeares %d times\n",key,count);

}
}
return 0;
}



















              
