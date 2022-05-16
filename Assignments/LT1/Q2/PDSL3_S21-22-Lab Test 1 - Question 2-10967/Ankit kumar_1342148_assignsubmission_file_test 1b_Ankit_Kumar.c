/*Ankit kumar
Roll no.21MI10010*/
#include<stdio.h>
#include<math.h>

int main(){
    float x0,x1,e;
    int n;
    scanf("%f%d%f",&x0,&n,&e);
    printf("%f %d\n",x0,n);
    for(int i=0;i<n;i++){
        x1=x0-((pow(x0,3)-25)/(3*pow(x0,2)));
        printf("%f %f %f\n",x0,x1,fabs(x1-x0));
        if(fabs(x1-x0)<e){
            break;
        }
        x0=x1;

    }
}