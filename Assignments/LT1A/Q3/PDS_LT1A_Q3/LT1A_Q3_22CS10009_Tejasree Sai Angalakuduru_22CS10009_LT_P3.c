/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : Lab Test
 Description  : Printing Triangle type
*/
#include<stdio.h>
#include<math.h>
int len(int a1,int b1,int a2,int b2);
int tri_ine(int l1,int l2,int l3);


int main ()
{
 int x[3],y[3];
 int l1,l2,l3;
 int i;
 for (i=0;i<3;i++)
 {
   printf("Enter the  1st co-ordinates of point :\n");
   scanf("%d",&x[i]);
   printf("Enter the  2nd co-ordinates of point :\n");
   scanf("%d",&y[i]);
  }

 l1=len(x[0],x[1],y[0],y[1]);
 l2=len(x[1],x[2],y[1],y[2]);  
 l3=len(x[2],x[0],y[2],y[0]);
 if(tri_ine(l1,l2,l3)==0)
 {
   printf("Invalid");
 }
 else
 {if(l1>l2 && l1>l3)
  {
   if((l1*l1)==(l2*l2)+(l3*l3))
    printf("Right Angled Triangle");
   else if((l1*l1)>=(l2*l2)+(l3*l3))
    printf("Acute Angled Triangle");
   else if((l1*l1)<=(l2*l2)+(l3*l3))
    printf("Obtuse Angled Triangle");
  }
 else if(l2>l1 && l2>l3)
  {
   if((l2*l2)==(l1*l1)+(l3*l3))
    printf("Right Angled Triangle");
   else if((l2*l2)>=(l1*l1)+(l3*l3))
    printf("Acute Angled Triangle");
   else if((l2*l2)<=(l1*l1)+(l3*l3))
    printf("Obtuse Angled Triangle");
  }
 else if(l3>l2 && l3>l1)
  {
   if((l3*l3)==(l2*l2)+(l1*l1))
    printf("Right Angled Triangle");
   else if((l3*l3)>=(l2*l2)+(l1*l1))
    printf("Acute Angled Triangle");
   else if((l3*l3)<=(l2*l2)+(l1*l1))
    printf("Obtuse Angled Triangle");
  }
   
 }
 return 0;
}

int len(int a1,int b1,int a2,int b2)
{
 int l;
 l=  sqrt(pow((a1-b1),2)+pow((a2-b2),2));
 return (l);
}

int tri_ine(int l1,int l2,int l3)
{
 if((l1+l2>l3)&&(l2+l3>l1)&&(l1+l3>l2))
  return 1;
 else 
  return 0;
}



