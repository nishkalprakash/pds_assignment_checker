#include<stdio.h>
int main()
{
    int a,b,c,d,e,t,x1,x2,x3,e1,e2,e3 ;
    int r=0 ;
    printf("enter five integers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t= (a%2)+(b%2)+(c%2)+(d%2)+(e%2) ;
    if (t==3){
     if ((a%2)==0)
     {
         a=0 ;
     } if ((b%2)==0)
     {
         b=0 ;
     } if ((c%2)==0)
     {
         c=0 ;
     } if ((d%2)==0)
     {
         d=0 ;
     } if ((e%2)==0)
     {
         e=0 ;
     } if (a != 0)
           {
           x1=a ;
           r =r +1 ;
           }
    if (b != 0)
           {if (r>0)
          {
           x2=b ;
           r =r +1 ;
           } else {
           x1=b;
           r= r+1 ;}

           }if (c != 0)
           { if (r==0){
           x1=c ;
           r = r+1 ;
           } else if (r==1) {
           x2=c ;
           r = r+1 ;
           } else if (r==2) {
           x3=c ;
           }
           }
           if (d != 0)
           { if (r==0){
           x1=d ;
           r = r+1;
           } else if (r==1) {
           x2=d ;
           r = r+1 ;
           } else if (r==2) {
           x3=d ;
           }
           }
           if (e != 0)
           { if (r==0){
           x1=e ;
           r = r+1;
           } else if (r==1) {
           x2=e ;
           r = r+1 ;
           } else if (r==2) {
           x3=e ;
           }
           } if ((x1!=x2)&&(x2!=x3))
  {
      if (x1>x2){
         if (x1>x3){
          if (x2>x3){
        e1 =x1 ;
         e2 =x2 ;
         e3 =x3 ;
      } else {
            e1= x1 ;
       e3 = x2  ;
         e2 =x3 ;
      }
      } else {
               e2 =x1 ;
        e3 =x2 ;
        e1= x3  ;
      }
      } else {
          if (x3>x2){
        e3=x1  ;
        e2= x2  ;
 e1=x3 ;
          } else {
               if (x1>x3){
       e2=x1 ;
       e1=x2 ;
         e3 =x3;
          } else {
        e3 = x1;
         e1=x2 ;
       e2=x3 ;
          }
          }
      }
      printf("(%d)<(%d)<(%d)\n",e3,e2,e1);
  }

} else if (t==2){
    if ((a%2)!=0)
     {
         a=0 ;
     } if ((b%2)!=0)
     {
         b=0 ;
     } if ((c%2)!=0)
     {
         c=0 ;
     } if ((d%2)!=0)
     {
         d=0 ;
     } if ((e%2)!=0)
     {
         e=0 ;
     } if (a != 0)
           {
           x1=a ;
           r =r +1 ;
           }
    if (b != 0)
           {if (r>0)
          {
           x2=b ;
           r =r +1 ;
           } else {
           x1=b;
           r= r+1 ;}

           }if (c != 0)
           { if (r==0){
           x1=c ;
           r = r+1 ;
           } else if (r==1) {
           x2=c ;
           r = r+1 ;
           } else if (r==2) {
           x3=c ;
           }
           }
           if (d != 0)
           { if (r==0){
           x1=d ;
           r = r+1;
           } else if (r==1) {
           x2=d ;
           r = r+1 ;
           } else if (r==2) {
           x3=d ;
           }
           }
           if (e != 0)
           { if (r==0){
           x1=e ;
           r = r+1;
           } else if (r==1) {
           x2=e ;
           r = r+1 ;
           } else if (r==2) {
           x3=e ;
           }
           } if ((x1!=x2)&&(x2!=x3))
  {
      if (x1>x2){
         if (x1>x3){
          if (x2>x3){
        e1 =x1 ;
         e2 =x2 ;
         e3 =x3 ;
      } else {
            e1= x1 ;
       e3 = x2  ;
         e2 =x3 ;
      }
      } else {
               e2 =x1 ;
        e3 =x2 ;
        e1= x3  ;
      }
      } else {
          if (x3>x2){
        e3=x1  ;
        e2= x2  ;
 e1=x3 ;
          } else {
               if (x1>x3){
       e2=x1 ;
       e1=x2 ;
         e3 =x3;
          } else {
        e3 = x1;
         e1=x2 ;
       e2=x3 ;
          }
          }
      }
      printf("(%d)\n",e1);
  }

}
}
