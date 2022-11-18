/* Pushkaraj Jagtap
   21MF3IM12
   Codeblocks
   Assignment 5a*/

 #include<stdio.h>
 int increasing(int a,int b,int c){
       int max,mid,min;
       if(a>b && a>c){
        (max=a);
       }
       else if(b>a&&b>c){
           (max=b);
       }
       else{
           (max=c);
       }
        if(a<b && a<c){
           (min=a);
       }
       else if(b<a&&b<c){
           (min=b);
       }
       else{
            (min=c);
       }
       if(min<a<max){
         (mid=a);
       }
       else if(min<b<max){
         (mid=b);
       }
       else{
         (mid=c);
       }
       return (min=a,mid=b,max=c);
 }

 int main(){
      int a,b,c,*p,*q,*r,w;
      printf("Enter the three digits");
      scanf("%d%d%d",&a,&b,&c);
       p=&a; q=&b; r=&c;
        printf("Address of a:%d\n",p);
        printf("Address of b:%d\n",q);
        printf("Address of c:%d\n",r);
        printf("Values in a,b,c:%d,%d,%d\n",*p,*q,*r);
        w=increasing(*p,*q,*r);
         printf("Address of a:%d\n",p);
        printf("Address of b:%d\n",q);
        printf("Address of c:%d\n",r);
        printf("Values in a,b,c:%d,%d,%d\n",w,w,w);
 }
