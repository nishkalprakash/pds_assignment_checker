/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Lab Test 1
Program to check the type of triangle.
*/
#include <stdio.h>
#include <math.h>
int x1,yb,x2,y2,x3,y3;
float t,b,c;
void getcoordinate(char a[],int l)  //Fetching the coordinates from the tuple
    {
     int p,q,i,c;
     for(i=0;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57)) //x1
            {
              x1=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                x1=p-48;
                c=i+1;
                break;
              }
         }
    for(i=c;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57))  //y1
            {
              yb=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                yb=p-48;
                c=i+1;
                break;
              }
         }
     for(i=c;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57))  //x2
            {
              x2=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                x2=p-48;
                c=i+1;
                break;
              }
         }
     
     for(i=c;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57))  //y2
            {
              y2=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                y2=p-48;
                c=i+1;
                break;
              }
         }
    for(i=c;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57))  //x3
            {
              x3=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                x3=p-48;
                c=i+1;
                break;
              }
         }
    for(i=c;i<l;i++)
        {
          p=a[i];
          q=a[i+1];
          if((p>=48)&&(p<=57)&&(q>=48)&&(q<=57))  //y3
            {
              y3=10*(p-48)+(q-48);
              c=i+2;
              break;
            }
          else if((p>=48)&&(p<=57))
              { 
                y3=p-48;
                c=i+1;
                break;
              }
         }
  
     }
void computelength()                         //length of sides
    {
      t=sqrt(pow((x2-x1),2)+pow((y2-yb),2));  
      b=sqrt(pow((x3-x1),2)+pow((y3-yb),2));
      c=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
     } 
int isvalid(float m, float n,float o)        // checking valid
   {
     float max,sum;
     sum=m+n+o;
     max=m;
     if(n>max)
      max=n;
     if(o>max)
       max=o;
     
     if((sum-max)>max)
     
       return 1;
     else
       return 0;
   }
int main()
   {
     char a[30];
     char c;
     int i=1,length,f;
     printf("Enter the coordinates\n");  //entering
     c=getchar();
     a[0]=c;
     while (c!='\n')
          {
            c=getchar();
            a[i]=c;
            i=i+1;
          }
      length=i;
      getcoordinate(a,length);
      computelength();
      f=isvalid(t,b,c);
      if (f==0)
        printf("Invalid\n");
      else
        {
          if(((t*t+b*b)==c*c)||((t*t+c*c)==b*b)||((c*c+b*b)==t*t))
            printf("Right angled\n");
         }
     return 0;
   }
