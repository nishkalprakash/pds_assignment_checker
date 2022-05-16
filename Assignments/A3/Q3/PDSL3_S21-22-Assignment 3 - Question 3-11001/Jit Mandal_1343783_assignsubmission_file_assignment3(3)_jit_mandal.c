#include<stdio.h>

float find_intersec(float a1,float a2,float b1,float b2,float c1,float c2,float arr[]){
    float d=a1*b2-a2*b1;

    if(a1/b1!=a2/b2)
    {
        float x1=(c1*b2-c2*b1)/d;

        float y1=(a1*c2-a2*c1)/d;

        arr[0]=x1;

        arr[1]=y1;
        return 1;

   }
     else{
        return -1;
     }

}

int main(){
    float arr[2];
    find_intersec(1,0,0,1,1,1,arr);
    printf("%f %f",arr[0],arr[1]);



}
