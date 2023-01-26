# include<stdio.h>
# include<string.h>
struct list
{
  int n;
  struct list*next;
};

 int main()
{
   int x, m, y;
   printf("Enter the number of elements of L1 and L2");
   scanf("%d %d", &x, &y);
   
   struct list L1[x], L2[y];
   for(int j=0; j<x; j++)
{
   scanf("%d", &L1[j].n);
}
   
   for(int j=0; j<y; j++)
{
   scanf("%d", &L2[j].n);
}

 
printf("Union is : ");
for(int i=0; i<x; i++)
{
   m=0;
  for(int j=i+1; j<x; j++)
{
   if(L1[i].n==L1[j].n)
   m++;
}  if(m == 0)
   printf("%d ", L1[i].n);
}




 for(int i=0; i<y; i++)
{
   m=0;
 
 for(int j=i+1; j<y; j++)
{
   if(L2[i].n==L2[j].n)
   m++;
} 
   
for(int j=0; j<x; j++)
{
   if(L2[i].n==L1[j].n)
   m++;
} 
   if(m == 0)
   printf("%d ", L2[i].n);
}
  printf("\n");
printf("Intersection is : ");

for(int i=0; i<x; i++)
{
   m=0;
  for(int j=0; j<y; j++)
{
   if(L1[i].n==L2[j].n)
   m++;
}  if(m != 0)
   printf("%d ", L1[i].n);
}for(int i=0; i<y; i++)
{
   m=0;
  for(int j=0; j<x; j++)
{
   if(L2[i].n==L1[j].n)
   m++;
}  if(m != 0)
   printf("%d ", L2[i].n);
}



return 0;
}
