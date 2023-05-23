#include<stdio.h>
/*
int main()

{
    //if(prob)
 int a[10],i,n,temp,l;
 printf("enter limit : ");
 scanf("%d", &n);
 printf("enter elements : ", n) ;
 for(i=0;i<n;i++)
 {
     scanf("%d", &a[i]);
 }
 l=n-1;
   for(i=0;i<1;i++,l--)

   {
       temp=a[i];
       a[i]=a[l];
       a[l]=temp;
   }

printf("the reverse of array elements is : ");
for(i=0;i<n;i++)
{
    printf("%d ", a[i]);
}



    return 0;
}
*/
int main()
{
   char a[20],temp=' ';
   int i,l;
   printf("enter string : ");
   gets(a);
   for(l=0;a[l]!=0;l++);
   for(i=0;i<l/2;i++)
   {
       if(a[i]!=a[l-i-1])
       {
           temp=a[i];
           a[i]=a[l-i-1];
           a[l-i-1]=temp;
       }

   }

    //(temp==' ')? printf("The reverse of the string is %s i.e. The string is palindrome\n",a) :
//printf("The string is not palindrome. The reverse       string is %s \n",a);
printf(" The reverse string is %s \n",a);

    return 0;
}


