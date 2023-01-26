# include<stdio.h>
# include<string.h>
struct list
{
  int n;
  struct list*next;
};

int main()
{
   int g, x;
   printf("Enter the number of elements : \n");
   scanf("%d", &g);
   x = g/2;
   struct list l[g], m[x];
   
   for(int j=0; j<g; j++)
{
  scanf("%d", &l[j].n);
}

  for(int j=0; j< x; j++)
{
   m[j].n =l[2*j + 1].n;
}


 for(int j=0; j< x; j++)
  printf("%d\n", m[j].n);
return 0;

}
