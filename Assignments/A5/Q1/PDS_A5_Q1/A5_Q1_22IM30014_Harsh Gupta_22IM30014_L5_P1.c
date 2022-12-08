/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 5 
Description - question1
*/

#include <stdio.h>
#include<stdlib.h>
float pow1(int x,int y){
	float c=1;
	for (int i=0;i<(y);i++){
		c=c*x;	
	}
	return c;

}
int fact(int n){
	int a=1;
	for (int i =1;i<=n;i++){
		a=a*i;	
	
	}
	return a;
}
int main(){
	int x,n;
	scanf("%d %d",&x,&n);
	float m=1;
	for (int i =1;i<(n);i++){
		m=m+pow1(x,i)/(fact(i));		
	}
	printf("%f",m);      
	
         



return 0 ;

}
