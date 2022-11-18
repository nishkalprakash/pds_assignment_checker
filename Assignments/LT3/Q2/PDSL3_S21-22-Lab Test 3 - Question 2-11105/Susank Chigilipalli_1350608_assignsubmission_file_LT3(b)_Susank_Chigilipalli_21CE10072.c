/*This program is to multiply two polynominals*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : LT3
  question : 2*/
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
   int n;
   int *coff;
   int *exp;
}polynomial;
void main()
{
   polynomial p1,p2;
   int l1=0,l2=0,i,j,k1=0,k2=0;
   int *sum,*pro;
   char po1[40],po2[40];
   printf("Enter the value of number of terms in polynomial 1 : ");
   scanf("%d",&p1.n);
   printf("Enter the value of number of terms in polynomial 2 : ");
   scanf("%d",&p2.n);
   p1.coff=(int *)malloc(p1.n*sizeof(int));
   p2.coff=(int *)malloc(p2.n*sizeof(int));
   p1.exp=(int *)malloc(p1.n*sizeof(int));
   p2.exp=(int *)malloc(p2.n*sizeof(int));
   printf("Enter polynomial 1 as a string(please input +x as +1x, do not enter negative values) : ");
   scanf("%s",&po1);
   printf("Enter polynomial 2 as a string(please input +x as +1x, do not enter negative values) : ");
   scanf("%s",&po2);
   sum=(int *)malloc((p1.n*p2.n)*sizeof(int));
   pro=(int *)malloc((p1.n*p2.n)*sizeof(int));
   for(i=0;i<40;i++)
   {
      if(po1[i]=='\0')
      {
         break;
      }
      else
      {
         l1++;
      }
   }
   for(i=0;i<40;i++)
   {
      if(po2[i]=='\0')
      {
         break;
      }
      else
      {
         l2++;
      }
   }
   for(i=0;i<l1;i++)
   {
      if(po1[i]=='x')
      {
         if(po1[i+1]=='^')
         {
            p1.exp[k1]=po1[i+2]-'0';
            k1++;
         }
         if(po1[i+1]=='+')
         {
            p1.exp[k1]=1;
            k1++;
         }
      }
      if(po1[i]!='x'&&po1[i]!='+'&&po1[i]!='^')
      {
         if(po1[i+1]!='x'&&po1[i+1]!='+')
         {
            p1.exp[k1]=0;
            k1++;
         }
      }
   }
   for(i=0;i<l2;i++)
   {
      if(po2[i]=='x')
      {
         if(po2[i+1]=='^')
         {
            p2.exp[k2]=po2[i+2]-'0';
            k2++;
         }
         if(po2[i+1]=='+')
         {
            p2.exp[k2]=1;
            k2++;
         }
      }
      if(po2[i]!='x'&&po2[i]!='+'&&po2[i]!='^')
      {
         if(po2[i+1]!='x'&&po2[i+1]!='+')
         {
            p2.exp[k2]=0;
            k2++;
         }
      }
   }
   k1=0;
   k2=0;
   for(i=0;i<l1;i++)
   {
      if(po1[i+1]=='x')
      {
         p1.coff[k1]=po1[i]-'0';
         k1++;
      }
      if(po1[i+1]!='x'&&po1[i-1]=='+')
      {
         p1.coff[k1]=po1[i]-'0';
         k1++;
      }
   }
   for(i=0;i<l2;i++)
   {
      if(po2[i+1]=='x')
      {
         p2.coff[k2]=po2[i]-'0';
         k2++;
      }
      if(po2[i+1]!='x'&&(po1[i-1]=='+'||po1[i-1]=='-'))
      {
         p1.coff[k2]=po2[i]-'0';
         k2++;
      }
   }
   k1=0;
   k2=0;
   for(i=0;i<p1.n;i++)
   {
      for(j=0;j<p2.n;j++)
      {
         sum[k1]=p1.exp[i]+p2.exp[j];
         k1++;
      }
   }
   for(i=0;i<p1.n;i++)
   {
      for(j=0;j<p2.n;j++)
      {
         pro[k2]=p1.coff[i]*p2.coff[j];
         k2++;
      }
   }
   for(i=0;i<(p1.n)*(p2.n);i++)
   {
      printf("%dx^%d+",pro[i],sum[i]);
   }
}
