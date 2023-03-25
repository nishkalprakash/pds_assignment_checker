//22ME10091
#include<stdio.h>
int main()
{
    int a,b,c,d,e, count=counta=countb=countc=countd=counte=0;
    int n1=n2=n3=n4=n5=0;
    printf("Enter five numbers:\n");
    scanf("%d   %d  %d  %d  %d", &a,&b,&c,&d,&e);
    if(a%2==1)
    {
        ++counta;
        n1=a;

    }
    if(b%2==1)
    {
        ++countb;
        n2=b;
    }
    if(c%2==1)
    {
        ++countc;
        n3=c;
    }
    if(d%2==1)
    {
        ++countd;
        n4=d;
    }
    if(e%2==1)
    {
        ++counte;
        n5=e;
    }
    count = counta+countb+countc+countd+counte;
    if(count==3)
    {
        if(n1==0)
        {
            if(n2==0)
            {
              if(n3<=n4)
              {
                  if(n3<=n5)
                  {
                      if(n4<=n5)
                      {
                          printf("%d %d %d",n3,n4,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n3, n5, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n3,n4)
                  }
              }
              if(n4<n3)
              {
                  if(n4<=n5)
                  {
                      if(n3<=n5)
                      {
                          printf("%d %d %d",n4,n3,n5);
                      }
                      if(n5<=n3)
                      {
                         printf("%d %d %d",n4, n5, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n4,n3)
                  }

              }


            }
            if(n3==0)
            {
                if(n2<=n4)
              {
                  if(n2<=n5)
                  {
                      if(n4<=n5)
                      {
                          printf("%d %d %d",n2,n4,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n2, n5, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n2,n4)
                  }
              }
              if(n4<n2)
              {
                  if(n4<=n5)
                  {
                      if(n2<=n5)
                      {
                          printf("%d %d %d",n4,n2,n5);
                      }
                      if(n5<=n2)
                      {
                         printf("%d %d %d",n4, n5, n2);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n4,n2)
                  }

              }

            }
            if(n4==0)
            {
                if(n3<=n2)
              {
                  if(n3<=n5)
                  {
                      if(n2<=n5)
                      {
                          printf("%d %d %d",n3,n2,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n3, n5, n2);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n3,n2)
                  }
              }
              if(n2<n3)
              {
                  if(n2<=n5)
                  {
                      if(n3<=n5)
                      {
                          printf("%d %d %d",n2,n3,n5);
                      }
                      if(n5<=n3)
                      {
                         printf("%d %d %d",n2, n5, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n2,n3)
                  }

              }

            }
            if(n5==0)
            {
                if(n3<=n4)
              {
                  if(n3<=n2)
                  {
                      if(n4<=n2)
                      {
                          printf("%d %d %d",n3,n4,n2);
                      }
                      if(n2<=n4)
                      {
                         printf("%d %d %d",n3, n2, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n2,n3,n4)
                  }
              }
              if(n4<n3)
              {
                  if(n4<=n2)
                  {
                      if(n3<=n2)
                      {
                          printf("%d %d %d",n4,n3,n2);
                      }
                      if(n2<=n3)
                      {
                         printf("%d %d %d",n4, n2, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n2,n4,n3)
                  }

              }

            }
        }
        if(n2==0)
        {
            if(n1==0)
            {
              if(n3<=n4)
              {
                  if(n3<=n5)
                  {
                      if(n4<=n5)
                      {
                          printf("%d %d %d",n3,n4,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n3, n5, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n3,n4)
                  }
              }
              if(n4<n3)
              {
                  if(n4<=n5)
                  {
                      if(n3<=n5)
                      {
                          printf("%d %d %d",n4,n3,n5);
                      }
                      if(n5<=n3)
                      {
                         printf("%d %d %d",n4, n5, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n4,n3)
                  }

              }


            }
            if(n3==0)
            {
                if(n1<=n4)
              {
                  if(n1<=n5)
                  {
                      if(n4<=n5)
                      {
                          printf("%d %d %d",n1,n4,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n1, n5, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n1,n4)
                  }
              }
              if(n4<n1)
              {
                  if(n4<=n5)
                  {
                      if(n1<=n5)
                      {
                          printf("%d %d %d",n4,n1,n5);
                      }
                      if(n5<=n1)
                      {
                         printf("%d %d %d",n4, n5, n1);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n4,n1)
                  }

              }

            }
            if(n4==0)
            {
                if(n3<=n1)
              {
                  if(n3<=n5)
                  {
                      if(n2<=n5)
                      {
                          printf("%d %d %d",n3,n1,n5);
                      }
                      if(n5<=n4)
                      {
                         printf("%d %d %d",n3, n5, n1);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n3,n1)
                  }
              }
              if(n1<n3)
              {
                  if(n1<=n5)
                  {
                      if(n3<=n5)
                      {
                          printf("%d %d %d",n1,n3,n5);
                      }
                      if(n5<=n3)
                      {
                         printf("%d %d %d",n1, n5, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n5,n1,n3)
                  }

              }

            }
            if(n5==0)
            {
                if(n3<=n4)
              {
                  if(n3<=n1)
                  {
                      if(n4<=n1)
                      {
                          printf("%d %d %d",n3,n4,n1);
                      }
                      if(n1<=n4)
                      {
                         printf("%d %d %d",n3, n1, n4);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n1,n3,n4)
                  }
              }
              if(n4<n3)
              {
                  if(n4<=n1)
                  {
                      if(n3<=n1)
                      {
                          printf("%d %d %d",n4,n3,n1);
                      }
                      if(n1<=n3)
                      {
                         printf("%d %d %d",n4, n1, n3);
                      }
                  }
                  else
                  {
                      printf("%d %d %d",n1,n4,n3)
                  }

              }

            }
        }
        //if(n==3)
    }
   /* if(count==2)
    {
        if(a>b)
        {

        }

    }*/
    return 0;
}
