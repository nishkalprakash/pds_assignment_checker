#include <stdio.h>

int main()
{
    int n1,n2,n3,e,o,n4,n5,max,a,b,c,num1,num2,num3,num4,num5;
    printf("Enter any 5 numbers");
    scanf("&d &d &d &d &d",&n1,&n2,&n3,&n4,&n5);
    if ((n1%2)==0)
        e=e+1;
    else{
        o=o+1;
        num1=n1;
    }
    if ((n2%2)==0)
        e=e+1;
    else{
        o=o+1;
        num2=n2;
    }
    if ((n3%2)==0)
        e=e+1;
    else{
        o=o+1;
        num3=n3;
    }
    if ((n4%2)==0)
        e=e+1;
    else{
        o=o+1;
        num4=n4;
    }
    if ((n5%2)==0)
        e=e+1;
    else{
        o=o+1;
        num5=n5;
    }
    if((n1>n2)&&(n1>n3)&&(n1>n4)&&(n1>n5))
        max=n1;
    else if((n2>n1)&&(n2>n3)&&(n2>n4)&&(n2>n5))
        max=n2;
    else if((n3>n2)&&(n3>n1)&&(n3>n4)&&(n3>n5))
        max=n3;
    else if((n4>n2)&&(n4>n3)&&(n4>n1)&&(n5>n5))
        max=n4;
    else if((n5>n2)&&(n5>n3)&&(n5>n4)&&(n5>n1))
        max=n5;

   if(e==3)
   {printf(" Largest number is %d",max);
   }
   else if(o==3)
   {
       if(num1==0 && num2==0)
        a,b,c=num3,num4,num5;
       else if(num1==0 && num3==0)
        a,b,c=num2,num4,num5;
       else if(num1==0 && num4==0)
        a,b,c=num3,num2,num5;
       else if(num1==0 && num5==0)
        a,b,c=num3,num4,num5;
       else if(num2==0 && num1==0)
        a,b,c=num3,num4,num5;
       else if(num2==0 && num3==0)
        a,b,c=num1,num4,num5;
       else if(num2==0 && num4==0)
        a,b,c=num1,num3,num5;
       else if(num2==0 && num5==0)
        a,b,c=num1,num4,num3;
       else if(num3==0 && num1==0)
        a,b,c=num2,num4,num5;
       else if(num3==0 && num2==0)
        a,b,c=num1,num4,num5;
       else if(num3==0 && num4==0)
        a,b,c=num1,num2,num5;
       else if(num3==0 && num5==0)
        a,b,c=num1,num4,num2;
       else if(num4==0 && num1==0)
        a,b,c=num3,num2,num5;
       else if(num4==0 && num2==0)
        a,b,c=num3,num1,num5;
       else if(num4==0 && num3==0)
        a,b,c=num1,num2,num5;
       else if(num4==0 && num5==0)
        a,b,c=num1,num2,num3;
       else if(num5==0 && num1==0)
        a,b,c=num2,num3,num4;
       else if(num5==0 && num2==0)
        a,b,c=num1,num3,num5;
       else if(num5==0 && num3==0)
        a,b,c=num1,num4,num2;
       else if(num5==0 && num4==0)
        a,b,c=num1,num2,num3;


       if(a<b<c)
        printf("%d %d %d",a,b,c);
       else if(a<c<b)
        printf("%d %d %d",a,c,b);
       else if(b<a<c)
        printf("%d %d %d",b,a,c);
       else if(b<c<a)
        printf("%d %d %d",b,c,a);
        else if(c<a<b)
        printf("%d %d %d",c,a,b);
        else if(c<b<a)
        printf("%d %d %d",c,b,a);

   }




}
