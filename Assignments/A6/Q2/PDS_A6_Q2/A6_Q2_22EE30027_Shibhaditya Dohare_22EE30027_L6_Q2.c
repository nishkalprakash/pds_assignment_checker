/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 6
Discription : To find co prime pairs 
*/
#include<stdio.h>
#include<math.h>
int gcd(int a,int b){
	if(a==0) return (b);
	if(b==0) return (a);
	else return(gcd(b,a%b));
}	
int main(){
	int n[5],k=0,i,j,flag,flag1;
	printf("Input 5 number:\n");
	for(k=0;k<5;k++){
	scanf("%d",&n[k]);
	if (ceil(n[k])!=k) flag1=1;
	}
	if (flag1==1){ 
	printf("Invalid entries: All entries should be integer.");
	return 0;
	}
	printf("Co-prime pairs:\n");
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			flag=gcd(n[i],n[j]);
			if (flag==1) printf("(%d,%d) ",n[i],n[j]);
		}
	}
return 0;
}

