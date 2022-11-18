//GUNNU HEMANTH
//21BT30006
//SEC-3

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,K,m;
    printf("enter  K : ");//user inputs the value of n.

	   scanf("%d",&n);

	printf("enter  K : ");//user inputs the value of t.

	   scanf("%d",&t);

	printf("enter m : ");//user inputs the value of m.

	   scanf("%d",&m);

	int N=now(K,0,n,m);//function.

	   printf("%d\n",N);//printd the no of ways.
}

int now(int K,int i,int n,int m){//declaration of function.//now means no of ways.

    if(K<0){

		return 0;

		}

    if(K==0){

		return 1;

	}

	int a,N=0;

	N=now(K+a,i,n,m);//now means no of ways.

	return N;

	}
