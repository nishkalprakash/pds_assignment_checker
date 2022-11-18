/*
Name : Ankit Yaadav
Roll No  : 21EE30005
Department : Electical Engineering
Package : Codeblocks
Lab Test : 2
*/


#include<stdio.h>

int maxAlphaValue(int s[],int m){

int a,b,count;
int max=0;

for(a=1;a<m;a++){
                                                        //function that return Maximum Alpha Value
    count=0;

    for(b=0;b<a;b++){

        if((s[b]%s[a])==0)count++;
    }
    if(count>max){
        max=count;
    }
}
return max;
}





int main(){

int a[50],n,i,t;

printf("Enter the size of array\n");
scanf("%d",&n);

printf("\nEnter the Array");

for(i=0;i<n;i++){

    scanf("%d",&a[i]);                            //Entering the Array

}

t=maxAlphaValue(a,n);                             //Calling the function

printf("%d",t);

return 0;}
