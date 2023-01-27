# include<stdio.h>
# include<string.h>
struct customer
{
  int acc_num;
  char name[20];
  int balance;
};
int main ()
{
   int n;
   printf("Enter number of users : ");
   scanf("%d", &n);
   struct customer c[n];
   for(int j=0; j<n; j++)
{
   scanf("%d", &c[j].acc_num);
   scanf("%s", c[j].name);
   scanf("%d", &c[j].balance);
}


   for(int j=0; j<n; j++)
{
   printf("%d\n", c[j].acc_num);
   printf("%s\n", c[j].name);
   printf("%d\n", c[j].balance);
   printf("\n");
}  
 return 0;
}
