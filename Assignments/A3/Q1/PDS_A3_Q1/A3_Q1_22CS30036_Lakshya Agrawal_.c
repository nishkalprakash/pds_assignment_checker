#include<stdio.h>

int main()
{
    int a,b,c,d,e,eCount=0,oCount=0,max,ol=0,om=0,or=0,temp;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2 == 0){
        max = a;
        eCount++;
    }else{
        oCount++;
        max = a;
        ol=a;
    }
    if(b%2 == 0){
        if(b>max) max = b;
        eCount++;
    }else{
        oCount++;
         if(b>max) max = b;
        if(ol==0){
           ol= b;
        }else if(om==0){
        om=b;
        }else{
        or=b;
        }
    }
    if(c%2 == 0){
        if(c>max) max = c;
        eCount++;
    }else{
        oCount++;
        if(c>max) max = c;
         if(ol==0){
           ol= c;
        }else if(om==0){
        om=c;
        }else{
        or=c;
        }
    }
    if(d%2 == 0){
        if(d>max) max = d;
        eCount++;
    }else{
        oCount++;
         if(d>max) max = d;
         if(ol==0){
           ol= d;
        }else if(om==0){
        om=d;
        }else{
        or=d;
        }
    }
    if(e%2 == 0){
        if(e>max) max = e;
        eCount++;
    }else{
        oCount++;
         if(e>max) max = e;
          if(ol==0){
           ol= e;
        }else if(om==0){
        om=e;
        }else{
        or=e;
        }
    }
    if(oCount==3){
            if(ol>om){
                temp = ol;
                ol = om;
                om = temp;
            }
            if(om>or){
                temp = om;
                om = or;
                or = temp;
            }
            if(ol>om){
                temp = ol;
                ol = om;
                om = temp;
            }
        printf("Smallest three odd numbers:\n%d %d %d",ol,om,or);
    }else if(eCount == 3){
        printf("Largest number:\n%d",max);
    }
    return 0;
}