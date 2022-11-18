/*Name - Pushkaraj Jagtap
  Roll no. - 21MF3IM12
  GROUP NO. - 5
  Package - Code Blocks*/

#include<stdio.h>
int main(){
 int x[10],y[10],j,i;
 float p,q,m,b;
 p=0;
 q=0;
 i=0;
 j=0;
 printf("x");
      while(i<10){
      scanf("%d",&x[i]);

      i++;
      }
       printf("y");
     while(j<10){
     scanf("%d",&y[j]);

     j++;
     }

        while(i<10){
        p=x[i]+p;
        i++;}
       while(j<10){
         q=y[j]+q;
         j++;}
         m=-1.1;
         b=14;
     while(i<10){
        while(j<10){
            m=(((x[i]-p)*(y[i]-q))/(x[i]-p*(x[i]-p)));

            }

            }

        printf("m:%f\n",m);

        printf("b:%f\n",b);


        printf("y=%f*x+%f",m,b);

}
