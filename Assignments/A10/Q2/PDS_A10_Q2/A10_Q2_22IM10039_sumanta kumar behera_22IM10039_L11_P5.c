# include<stdio.h>
# include<string.h>
struct list
{
  int n;
  struct list*next;
};

 int main ()
{
   int m=0, x=0;
   struct list L[5];
   printf("Enter the elements : \n");
   for(int i=0; i<5; i++)
{
   scanf("%d", &L[i].n); 
}
  
for(int i=0; i<5; i++)
{
  for(int j=i+1; j<5; j++)
{
   if(L[i].n < L[j].n)
   m++;
} 
}
 if(m == 10)
{
   printf("Ascending\n");
   x++;
}

  m=0;
for(int i=0; i<5; i++)
{
  for(int j=i+1; j<5; j++)
{
   if(L[i].n > L[j].n)
   m++;
} 
} if(m == 10)
{
   printf("Descending\n");
   x++;
}


 if(x==0)
 printf("No specific order\n");
return 0;
}
