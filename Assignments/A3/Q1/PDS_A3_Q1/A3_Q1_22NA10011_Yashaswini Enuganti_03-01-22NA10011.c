#include<stdio.h>
int main()
{
    int p,q,r,s,t,n,max,n1,max1,n2,max2;
    int n3,n4,n5,n6,n7,n8,n9,max3,max4,max5,max6,max7,max8,max9,a,o1,o2,o3;
    printf("Enter five numbers");
    scanf("%d%d%d%d%d",&p,&q,&r,&s,&t);
    a=p%2+q%2+r%2+s%2+t%2;
    if(a=3)

    if(p%2==1)
        o1=p;
    if(q%2==1)
       o1=q;
    if(r%2==1)
        o1=r;
    if(s%2==1)
       o1=s;
     if(t%2==1)
       o1=t;

    if(p%2==1&&p!=o1)
        o2=p;
    if(q%2==1&&q!=o1)
       o2=q;
    if(r%2==1&&r!=o1)
        o2=r;
    if(s%2==1&&s!=o1)
       o2=s;
     if(t%2==1&&t!=o1)
       o2=t;

  if(p%2==1&&p!=o1&&p!=o2)
        o3=p;
    if(q%2==1&&q!=o1&&q!=o2)
       o3=q;#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3,A1;
    printf("Enter the values of coordinates(x1,y1,z1):");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("Enter the values of coordinates(x2,y2,z2):");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
 printf("Enter the values of coordinates(x3,y3,z3):");
    scanf("%lf%lf%lf",&x3,&y3,&z3);
    printf("A(x1,y1,z1)=(%lf,%lf,%lf)\nB(x2,y2,z2)=(%lf,%lf,%lf)\nC(x3,y3,z3)=(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    A1= 0.5*((x1*((y2*z3)-(z2*y3))-(x2*((y1*z3)-(y3*z1)))+(x3*((y1*z2)-(y2*z1)))));
    if(A1==0){printf("The given three points are collinear");

    }

    else{
       printf("The given three points are  not collinear");
    }

return 0;
};


    if(r%2==1&&r!=o1&&r!=o2)
        o3=r;
    if(s%2==1&&s!=o1&&s!=o2)
       o3=s;
     if(t%2==1&&t!=o1&&t!=o2)
       o3=t;
    }




    if(p%2!=0&&q%2!=0&&r%2==00&s%2==0&&t%2==0)
   {

    n=(r>s)?r:s;
    max=(n>t)?n:t;
    printf("Largest number=%d",max);
    }
    else if(p%2!=0&&q%2==0&&r%2!=00&s%2==0&&t%2==0)
 {

    n1=(q>s)?q:s;
    max1=(n1>t)?n1:t;
    printf("Largest number=%d",max1);

    } else if(p%2!=0&&q%2==0&&r%2==00&s%2!=0&&t%2==0)
 {

    n2=(q>t)?q:t;
    max2=(n2>r)?n2:r;
    printf("Largest number=%d",max2);

    }else if(p%2!=0&&q%2==0&&r%2!=00&s%2==0&&t%2==0)
   {

    n3=(q>s)?q:s;
    max3=(n3>t)?n3:t;
    printf("Largest number=%d",max3);
    }else if(p%2==0&&q%2!=0&&r%2!=00&s%2==0&&t%2==0)
   {

    n4=(p>s)?p:s;
    max4=(n4>t)?n4:t;
    printf("Largest number=%d",max4);
    }else if(p%2==0&&q%2!=0&&r%2==00&s%2!=0&&t%2==0)
   {

    n5=(p>r)?p:r;
    max5=(n5>t)?n5:t;
    printf("Largest number=%d",max5);
    }else if(p%2==0&&q%2==0&&r%2!=00&s%2!=0&&t%2==0)
   {#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3,A1;
    printf("Enter the values of coordinates(x1,y1,z1):");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("Enter the values of coordinates(x2,y2,z2):");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
 printf("Enter the values of coordinates(x3,y3,z3):");
    scanf("%lf%lf%lf",&x3,&y3,&z3);
    printf("A(x1,y1,z1)=(%lf,%lf,%lf)\nB(x2,y2,z2)=(%lf,%lf,%lf)\nC(x3,y3,z3)=(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    A1= 0.5*((x1*((y2*z3)-(z2*y3))-(x2*((y1*z3)-(y3*z1)))+(x3*((y1*z2)-(y2*z1)))));
    if(A1==0){printf("The given three points are collinear");

    }

    else{
       printf("The given three points are  not collinear");
    }

return 0;
};



    n6=(p>q)?p:q;
    max6=(n6>t)?n6:t;
    printf("Largest number=%d",max6);
    }else if(p%2==0&&q%2!=0&&r%2==00&s%2==0&&t%2!=0)
   {

    n7=(r>s)?r:s;
    max7=(n7>p)?n7:p;
    printf("Largest number=%d",max7);
    }
    else if(p%2==0&&q%2==0&&r%2!=00&s%2==0&&t%2!=0)
   {

    n8=(q>s)?q:s;
    max8=(n8>p)?n8:p;
    printf("Largest number=%d",max8);
    } else if(p%2==0&&q%2==0&&r%2==00&s%2!=0&&t%2!=0)
   {

    n9=(q>r)?q:r;
    max9=(n9>p)?n9:p;
    printf("Largest number=%d",max9);
    }
    else if(p%2!=0&&q%2!=0&&r%2!=00&s%2==0&&t%2==0)
   {

    }



}
