/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 3b
*/
#include<stdio.h>
#include<math.h>
struct poly
{
    int n;
    int exp[100];
    int coeff[100];
};

int main(){
    struct poly arr[2];
    char a[200],b[200];
    int i,j,e1=0,e2=0,c1=0,c2=0,t1=0,t2=0,m;
    for(i=0;i<100;i++){
        arr[0].coeff[i]=0;
    }
    for(i=0;i<100;i++){
        arr[1].coeff[i]=0;
    }
    printf("Enter the first polynomial as string:");
    scanf("%s",a);
    printf("Enter the second polynomial as string:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='+'||a[i]=='-'){
            if(a[i-1]=='x'){
                arr[0].exp[e1]=1;
                e1++;
            }
            else{
            arr[0].exp[e1]=a[i-1]-48;
            e1++;
            }
    }
    }
    for(i=0;b[i]!='\0';i++){
        if(b[i]=='+'||b[i]=='-'){
            if(b[i-1]=='x'){
                arr[1].exp[e2]=1;
                e2++;
            }

            else{
                arr[1].exp[e2]=b[i-1]-48;
                e2++;
            }
    }
    }
    /*finding no. of terms*/
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='+'||a[i]=='-'){
            t1++;
        }
    }
    arr[0].n=t1+1;
    for(i=0;b[i]!='\0';i++){
        if(b[i]=='+'||b[i]=='-'){
            t2++;
        }
    }
    arr[1].n=t2+1;
    return 0;
}
