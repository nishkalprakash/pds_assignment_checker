/*name: Adicherla Vaibhav
  rollno: 21BT10002
  Department: Biotechnology and Biochemistry Btech
  package: code blocks
  OS: windows*/

#include<stdio.h>
#include<math.h>

int main(){
    float x0,x1,e,fxn,pxn;
    printf("xo=");
    scanf("%f",&x0);
    printf("e=");
    scanf("%f",&e);

    int x,i;
    printf("max_iteration=");
    scanf("%d",&x);
    fxn= pow(x0,3)-25;
    pxn= 3*pow(x0,2);




    for(i=1;i<x;i++)
        {
            x0=x1;
        x1= x0-((fxn)/(pxn));

        printf("%f %f %f\n",x0,x1,sqrt(pow(x0-x1,2)));
        if(sqrt(pow(x0-x1,2))< e)
        {
            break;
        }


    }



}
