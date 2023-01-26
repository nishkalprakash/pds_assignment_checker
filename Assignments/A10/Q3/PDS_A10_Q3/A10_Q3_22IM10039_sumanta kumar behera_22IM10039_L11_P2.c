# include<stdio.h>
# include<string.h>
struct list
{
  int n;
  struct list*next;
};


int main ()
{
   int x, n, y=0, m=0;
   struct list l[20];
   printf("Number of elements : ");
   scanf("%d", &n);
   l[n-1].next = NULL;


   for(int j=0; j<n; j++)
{
   scanf("%d", &l[j].n);
   m++;
}
 
 printf("Duplicate numbers are : ");

 for(int i=0; i<m; i++)
{
   x=0;
  for(int j=i+1; j<m; j++)
{
   if(l[i].n==l[j].n)
   x++;
}  if(x > 0)
  {
   printf("%d ", l[i].n);
   y++;
  } 
} 
if(y==0)
    printf("There is no duplicate number");


  int max, min;
   max= l[0].n;
   min = l[0].n;
   for(int j=1; j<m; j++)
  {  if(max < l[j].n)
      max = l[j].n;

     if(min > l[j].n)
     min = l[j].n;  
  }
  printf("\n");
  printf("Maximum : %d\n", max);
  printf("Minimum : %d\n", min);

   return 0;
}




