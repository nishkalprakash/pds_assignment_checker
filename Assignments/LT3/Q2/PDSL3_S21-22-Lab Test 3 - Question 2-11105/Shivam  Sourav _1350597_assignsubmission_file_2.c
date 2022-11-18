

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct pol{
    int nt;
    int coeff[100];
    int exponent[100];
    
}pol[2];
int value1(char str[],int s)
{
    int i=s,num=0,c=0;
    while(str[i]<='9'&&str[i]>='0')
    {
       num=num*10+str[i++];
    }
    return(num);
}
    
int value2(char str[],int s)
{
    int i=s,num=0,c;
    while(str[i]<='9'&&str[i]>='0')
    {
      num=num+str[i--]*((int)pow(10,c++));  
    }
    return(num);
}

int main()
{
    int ar[100]={0};
    char p1[100],p2[100];
    printf("enter the first polynomial");
    scanf("%s",p1);
    printf("enter the second polynomial");
    scanf("%s",p2);
    int i=0,j=0;
    pol[0].nt=1;
    pol[1].nt=1;
    while(p1[i]!='\0')
    {
        if(p1[i]=='+')
        pol[0].nt++;
        if(p1[i]=='x')
        {
            pol[0].coeff[j]=value2(p1,i-1);
            pol[0].exponent[j++]=value1(p1,i+2);
            if(p1[i+1]=='+')
            {
            pol[0].coeff[j]=value2(p1,i-1);
            pol[0].exponent[j++]=1;
            }
            i++;
        }
        if(j<pol[0].nt)
        {
            pol[0].exponent[j]=0;
            pol[0].coeff[j]=value2(p1,i-1);
        }
    }
    i=0,j=0;
        while(p2[i]!='\0')
    {
        if(p2[i]=='+')
        pol[1].nt++;
        if(p2[i]=='x')
        {
            pol[1].coeff[j]=value2(p2,i-1);
            pol[1].exponent[j++]=value1(p2,i+2);
            if(p2[i+1]=='+')
            {
            pol[1].coeff[j]=value2(p2,i-1);
            pol[1].exponent[j++]=1;
            }
            i++;
        }
        if(j<pol[1].nt)
        {
            pol[1].exponent[j]=0;
            pol[1].coeff[j]=value2(p2,i-1);
        }
    }
    for(i=0;i<pol[0].nt;i++)
    {
        for(j=0;j<pol[1].nt;j++)
        {
          ar [pol[0].exponent[i]+pol[1].exponent[j]]+= pol[0].coeff[i]*pol[1].coeff[j];
        }
    }
        
  for(i=100;i>0;i--)
  {
      if(ar[i]>0)
      printf("%dx^%d +",ar[i],i);
  }
    
  
    
    

    return 0;
}
