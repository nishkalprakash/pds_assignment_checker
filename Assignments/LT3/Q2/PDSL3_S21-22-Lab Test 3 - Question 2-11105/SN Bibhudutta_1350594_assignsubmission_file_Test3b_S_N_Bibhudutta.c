// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 3

#include<stdio.h>
#include<stdlib.h>

typedef struct poly
{
    int coeficient[100];
    int expontial[100];
    int size;  
}poly;

void read_poly(poly* p)
{
   char c='+';
   char d,e;
   while (c!='\0')
   {
      scanf("%d",&p->coeficient[p->size]);
      scanf("%c",&e);
      scanf("%c",&d);
      if(e=='\n')
       return ;
      if(e=='x'&&d=='^')
      {
          scanf("%d",&p->expontial[p->size]);
          scanf("%c",&c);
      }
      else if(e=='x')
      {
          p->expontial[p->size]=1;
          c=d;
      }
      (p->size)++;

   }
   



}

void printpoly(poly*p1)
{
    for (int i = 0; i <p1->size; i++)
    {
        printf("\nPolnomial");
        printf("%d",p1->coeficient[i]);
        printf("x^");
        printf("%d",p1->expontial[i]);

        printf("+ ");
    }
    
}

int main()
{

    // printf("Enter the second polynomial as String ");
    // scanf("%s",s2);

    poly p1,p2,multi;

    
    printf("\nEnter the first polynomial as String ");
    read_poly(&p1);
    // read_poly(s2,&p2);
    
    printpoly(&p1);

    return 0;

}