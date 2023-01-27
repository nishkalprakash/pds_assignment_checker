/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 9
 *Description   : calculating salary
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct{
 char name[20];
 int w_d;
 int n;
}em;

float netpay(em *p)
{
  float bp;
  float hra,ta,t;
 bp=(p->w_d)*(p->n);
 if(bp<1000)
  
    hra=(12.0/100)*bp;
  
 else
   hra=(20.0/100)*bp;
 if(p->n>19)
   ta=(10.0/100)*bp;
 else
  ta=0;
 t=bp+hra+ta;
return t;
}

int main ()
{
  em *p;
  
  int num,i,j;
  float s;
  printf("Enter the no.of employee(s) \n ");
  scanf("%d",&num);
  p=(em*)malloc(num*sizeof(em));
  for(i=0;i<num;i++)
  {
    printf("enter name of employee-%d :",i+1);
    scanf("%s",p[i].name);
    printf("enter wages per day of employee -%d :",i+1);
    scanf("%d",&p[i].w_d);
    printf("enter no.of days present by  employee-%d :",i+1);
    scanf("%d",&p[i].n);
  }
  for(i=0;i<num;i++)
  {
    s=netpay(&p[i]);
    printf("Name : ");
    for(j=0;p[i].name[j]!='\0';j++)
     printf("%c",p[i].name[j]);
   printf("\nNetpay : %f\n",s);
    
  }
  
  
  return 0;
}


