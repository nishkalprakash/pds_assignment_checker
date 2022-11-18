/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k,m;
    printf("enter  n : ");
	scanf("%d",&n);

	printf("enter  k : ");
	scanf("%d",&k);

	printf("enter m : ");
	scanf("%d",&m);

	int htel=MTR(k,0,n,m);
	printf("%d\n",htel);
}

int MTR(int k,int i,int n,int m){

    if(k<0)
    {
		return 0;
	}

    if(k==0)
    {
		return 1;
	}

	int s;
    int htel=0;
	MTR(k-s,i,n,m);
	return htel;
}