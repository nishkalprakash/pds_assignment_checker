#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

  void call(int* m1,int* m2)
  {
      int change =*m1;
      *m1=*m2;
      *m2=change;
  }

void aftercall(int *p,int *q,int *r)
{
   // if(*p>*q){call(p,q);}
   //  if(*q>*r){call(q,r);}
     if(*r>*p) {call(r,p);}
     if(*p>*q){call(p,q);}
     if(*q>*r){call(q,r);}
}
int main()
{
    int a,b,c;
    printf("Enter three integers:\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("---Before function call---\n");
    printf("Address of a=%d\n",&a);     // address and  values of interger before sorting out
    printf("Address of b=%d\n",&b);
    printf("Address of c=%d\n",&c);
    printf("Values in a,b,c=%d,%d,%d\n",a,b,c);

    int *p=&a;
    int *q=&b;
    int *r=&c;

    aftercall(&a,&b,&c);  //calling a function to rearrange numbers in non decreasing order

    printf("---After function call---\n");
    printf("Address of a=%d\n",&a);
    printf("Address of b=%d\n",&b);
    printf("Address of c=%d\n",&c);
    printf("Values in a,b,c=%d,%d,%d\n",a,b,c);  // values of integers after sorting out

}
