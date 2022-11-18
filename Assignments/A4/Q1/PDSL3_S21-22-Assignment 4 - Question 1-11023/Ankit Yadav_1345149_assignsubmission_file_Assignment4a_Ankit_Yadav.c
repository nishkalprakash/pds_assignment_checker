/*
Name : Ankit Yadav
Roll NO: 21EE30005
Department: Electrical Engineering
Package : Codeblocks
Operating system: Windows 11
Assignment : 4
*/

#include<stdio.h>

int poscomb(int a[20], int b,int x1,int x2,int x3){



printf("%d %d %d\n",a[x1],a[x2],a[x3]);                //function to print the cases
x3++;
if(x3>b){
    x3=0;
    x2++;
}
if(x2>b){
    x2=0;
    x1++;
}
if(x1>b){
    return 1;
}

poscomb(a,b,x1,x2,x3);

}


int main(){

int x[20],i,n,j;
int k1=0,k2=0,k3=0;

printf("Enter the number of elements of the array");    //number of elements of array
scanf(" %d",&n);

printf("\n Enter the elements of the array");
for(j=0;j<n;j++){scanf("%d",&x[j]);}                   //entering the array

printf("\n Enter the value of I");                     //entering the value of I
scanf("%d",&i);


poscomb(x,i,k1,k2,k3);


return 0;
}
