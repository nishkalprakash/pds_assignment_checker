/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10*/

#iclude<stdio.h>
int myhostelchangingtrips(int k, int i, int m, int n);
int main()
{
   int n,k,m,i=1,t;
   printf("Enter number of days within which you have to shift(n)\n");
   scanf("%d",&n);
   printf("Enter number of items, you need to shift(k)\n");
   scanf("%d",&k);
   printf("Enter number of items can be shifted in one trip(m)\n");
   scanf("%d",&m);

   t = myhostelchangingtrips(k,i,n,m);

   printf("The total number of trips are : %d",t);

   return 0;
}


int myhostelchanginftrips(int k, int i, int n, int m)
{
    if(n%m == 0)
    {
        return
    }
}
