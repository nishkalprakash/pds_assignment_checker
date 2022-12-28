#include<stdio.h>
int*buildset(int n) //declaring and defining the new function called buildset//
{
int n,setA,*p;
printf("read n mumbers of elements"); //entering the numbers//
scanf("%d",&n);
setA=n;
p=&setA;
printf(“Content of location pointed to by p is %d”, *p); // storing the location//
}

int searchset(int*A,int*x) //declaring and defining the new function called searchset//
{
int setA,x;
if(x==setA)
{
printf("%d present in set A",x);
}
int*union(int*A,int*B) //declaring and defining the nnew function called union//
{
int a,setA,setB;
a=union(int*A,int*B);
return a;
}
int *intersection(int*A,int*B); //declaring and defining the nnew function called intersection//
{
int b,setA,setB;
b=intersection(int*A,int*B);
return b;
}
int *differnce(int*A,int*B)//declaring and defining the nnew function called diffrence//
{
int c,setA,setB;
c=differnce(int*A,int*B);
return c;
}



int main() 
{
int setA,x,b,c,setB;
printf("%d present in set A",x);
printf("union : %d",a);
printf("intersection : %d",b);
printf("differnce : %d",c);
buildset(int n); //calling the function named buildset//
searchset(int*A,int*x);//calling the function named searchset//
*union(int*A,int*B);//calling the function named union//
*intersection(int*A,int*B);//calling the function named intersection//
*differnce(int*A,int*B);//calling the function named differnce//
return 0;

}

