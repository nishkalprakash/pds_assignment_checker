/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/

#include <stdio.h>
#include<math.h>

int main(){
    int k,steps,flag;
    float s,z,prevZ;
    printf("Enter height: ");
    scanf("%f",&z);
    printf("Enter number of Iteration: ");
    scanf("%d",&k);
    steps=1; // to count the number of loops will go
    flag=0;
    prevZ=z; //  for comparing with prev value of Z
    while(steps<=k){
        s=sqrt(z);
        if(f==1)
        {
            s=s-(1/steps);
            z=z-(s*s);
            flag=0;
        }
        else
            z=z-s;

        if(z<0)
            z*=-1; // if z goes to negative to change the value to positive

        printf("(%f,%d) ",z,steps);
        printf("\n");

        if(z==0)
            break;

        if(z==prevZ)
            flag=1;

        steps++;
        prevZ=z;
    }
    return 0;
}
