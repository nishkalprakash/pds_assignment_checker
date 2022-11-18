/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/

#include<stdio.h>
#include<math.h>

int main(){
    int k;
    float s,z;
    printf("Enter the value of z: ");
    scanf("%f",&z);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        s=sqrt(z);
        if(s==2*z||s==0.0){
            s-=(1/i);
            printf("(%f,%d)\n",z,(i+1));     //This has been added to display 0.25 corresponding to i=23
            z-=s*s;
            i++;
        }
        else
            z-=s;
        if(z==0.0||i==(k-1)){
            printf("(%f,%d)",z,(i+1));
            break;
            }
        if(z<0)
            z=-z;
        printf("(%f,%d)\n",z,(i+1));
    }
return 0;
}
