/*Name=Pawan yadav
sec=2
lab test 1
question 2*/
#include<stdio.h>
int main()
{
 int a,b,sum=0,d,sum1=0,c,e,f,g;
 printf ("Enter the number :\n");
 scanf ("%d",&a);
 f=a;
 if (a%2==0){   //when input integer is even .
    while(a!=0){
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;}
        e=sum;     // reversing the given number
        while(sum!=0){
                d=sum;
        sum1=0;
        c=0;
       while (d!=0){c=d%10;
        sum1=(sum1*10)+c;
        d=d/10;}
         sum=sum/10;
     printf ("%d ,",sum1);}
     printf ("\n");
     printf ("Reverse number = %d \n",e);
     g=f-e;
     if (g<0) g=g*(-1);
     printf ("Difference between Reverse and original number= %d ",g);


 }
 return 0;
}
