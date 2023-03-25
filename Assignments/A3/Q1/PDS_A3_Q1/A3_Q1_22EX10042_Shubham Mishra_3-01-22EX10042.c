#include<stdio.h>
#include<math.h>
int main(){
int n1, n2, n3, n4, n5;
printf("enter five numbers");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
// counting odd numbers
 int o=0,e=0;
int f1,f2,f3;
  if(n1%2==0)
  {
   e=e+1;


  }

  else
  {
   o=o+1;

  }
 if(n2%2==0)
  {
   e=e+1;

  }
  else
  {
   o=o+1;

  }
  if(n3%2==0)
  {
   e=e+1;

  }

  else
  {
   o=o+1;

  }
  if(n4%2==0)
  {
   e=e+1;

  }

  else
  {
   o=o+1;

  }
  if(n5%2==0)
  {
   e=e+1;

  }

  else
  {
   o=o+1;

  }
  // check if 3 even and 3 odd
  if(e==3)
  {
    int w = fmax(n1,fmax(n2,fmax(n3,fmax(n4,n5))));
    printf("the largest number is : %d",w);
  }
  if(o==3)
  {
    int x=-1,y=-1,z=-1;


    if(n1%2!=0)
    {
      x=n1;
    }

    if(n2%2!=0)
    {
      if(x==-1)
      {
         x=n2;
      }
      else{
        y=n2;
      }

    }
    if(n3%2!=0)
    {
      if(x!=-1&&y!=-1)
      {


       z=n3;
      }
      else if (y==-1)
               {
                   y=n3;
               }
      else
               {
                   x=n3;
               }
    }
    if(n4%2!=0)
    {
       if(x!=-1&&y!=-1)
      {


       z=n4;
      }
      else if (x!=-1&&z!=-1)
               {
                   y=n4;
               }
      else if (y!=-1&&z!=-1)
               {
                   x=n4;
               }
    }
    if(n5%2!=0)
    {
       if(x!=-1&&y!=-1)
      {


       z=n5;
      }
       else if (x!=-1&&z!=-1)
               {
                   y=n5;
               }
      else if (y!=-1&&z!=-1)
               {
                   x=n5;
               }

    }
    f1=fmin(x,fmin(y,z));
    f2=fmax(x,fmax(y,z));
    if(x!=-1&&x!=f1&&x!=f2)
    {
        f3=x;
    }
    if(y!=-1&&y!=f1&&y!=f2)
    {
        f3=y;
    }
    if(z!=-1&&z!=f1&&z!=f2)
    {
        f3=z;
    }



   printf("the nos in ascending order is: %d %d %d",f1,f3,f2);
  }
}
