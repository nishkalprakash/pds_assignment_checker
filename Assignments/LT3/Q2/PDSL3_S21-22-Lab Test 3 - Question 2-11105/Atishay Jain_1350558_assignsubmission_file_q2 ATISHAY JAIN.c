#include<stdio.h>
#include<math.h>
struct polynomial
{
    int exp[50];
    int term[50];
    float coeff[50];
};
void main()
{
    struct polynomial A[4];
    printf("enter your variable in polynomial:");
    char v;
    scanf("%c",&v);
    char str1[50],str2[50];
    printf("enter first polynomial:");
    fflush(stdin);
    gets(str1);
    printf("enter second polynomial:");
    gets(str2);
    int i,j,k=0,t1,t2;
    for(i=0;str1[i];i++)
        if(str1[i]==v);
        {
            A[0].term[k]=k;
            if(str1[i-1]==')')
               A[0].coeff[k]=(-str1[i-2]);
            else
               A[0].coeff[k]=str1[i-1];
            A[0].exp[k]=str1[i+2];
            k++;
        }
         printf("enter the constant term of first polynomial:");
        scanf("%f",&A[0].coeff[k]);
        A[0].term[k]=k;
        A[0].exp[k]=0;
        t1=k+1;
    for(i=0,k=0;str2[i];i++)
        if(str2[i]==v);
        {
            A[1].term[k]=k;
            if(str2[i-1]==')')
               A[1].coeff[k]=(-str2[i-2]);
            else
               A[1].coeff[k]=str2[i-1];
            A[1].exp[k]=str2[i+2];
            k++;
        }
         printf("enter the constant term of second polynomial:");
        scanf("%f",&A[1].coeff[k]);
        A[1].term[k]=k;
        A[1].exp[k]=0;
        t2=k+1;
        for(i=0,k=0;i<=t1;i++)
         for(j=0;j<=t2;j++)
        {
            A[3].exp[k]=A[0].exp[i]+A[1].exp[j];
            A[3].coeff[k]=A[0].coeff[i]*A[1].coeff[j];
        }
        int high;
        high=A[0].exp[0]+A[1].exp[0];
        float p=0;

        for(i=high;i>0;i++,p=0)
         for(j=0;j<t1*t2;j++)
           if(A[3].exp[j]==i)
             {
                 A[3].coeff[high-i]=p+A[3].coeff[j];
                 p=A[3].coeff[high-i];
             }
        printf("final polynomial is:");
         for(i=0;i<=t1*t1;i++)
         {
             if(A[3].coeff[i]!=0)
             printf("%f%c^%d+",A[3].coeff[i],v,A[3].exp[i]);
         }
         getch();






}

