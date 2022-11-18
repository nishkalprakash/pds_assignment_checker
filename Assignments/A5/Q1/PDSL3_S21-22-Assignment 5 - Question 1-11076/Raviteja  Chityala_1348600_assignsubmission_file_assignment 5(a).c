/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */
#include <stdio.h>
#include <stdlib.h>
void nondec(int a,int b,int c,int d,int e,int f){
    int a1,a2,a3;
    if ((a>=b)&&(a>=c)&&(b>=c)){
        a1=a,a2=b,a3=c;
    } 
    else if ((a>=b)&&(a>=c)&&(c>=b)){
        a1=a,a2=c,a3=b;
    }
    else if ((b>=a)&&(b>=c)&&(a>=c)){
        a1=b,a2=a,a3=c;
    }
    else if ((b>=a)&&(b>=c)&&(c>=a)){
        a1=b,a2=c,a3=a;
    }
    else if ((c>=b)&&(c>=a)&&(a>=b)){
        a1=c,a2=a,a3=b;
    }
    else if ((c>=b)&&(c>=a)&&(b>=a)){
        a1=c,a2=b,a3=a;
    }
    printf("address of a=%d \n ",d);
    printf("address of b=%d \n",e);
    printf("address of c=%d \n",f);
    printf("values in a,b,c=%d,%d,%d",a3,a2,a1);
}


int main(){
    int a,b,c,*p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    printf("enter three integers");
    scanf("%d%d%d",&a,&b,&c);
    printf("before function call");
    printf("address of a= %d\n",&a);
    printf("address of b= %d\n",&b);
    printf("address of c= %d\n",&c);
    printf("values in a,b,c=%d,%d,%d\n",a,b,c);
    printf("after function call");
    nondec(a,b,c,p,q,r);
    return 0;
    
    
}