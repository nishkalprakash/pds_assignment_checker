//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST:1
//description:
#include<stdio.h>
int primeCheck (int i)
{
    int a,p,flag=0;
    for (a=2;a<i;a++)
    {
        p=i%a;
        if (p==0)
        {
            flag++;
            return 0;
        }
    }
    if (flag==0)
    {
        return 1;
    }
}
int main()
{
   int a,i,j;
   scanf("%d",&a);
   if (a%2==0 && a>=4)
   {
       for (i=2;i<a;i++)
       {
           j=a-i;
           if (primeCheck(i)==1 && primeCheck(j)==1 )
           {
               printf("%d,%d",i,j);
               break;
           }
       }
   }
   else
    printf("%d",-1);


}

