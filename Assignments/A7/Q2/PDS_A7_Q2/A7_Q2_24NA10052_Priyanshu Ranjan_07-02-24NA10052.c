#include <stdio.h>
//declaratio of functions
int gcd(int a,int b);
void pair(int a[]);
//declaring global z for no coprime
int z=0;
int main(){
//taking varibles
	int a[5];
	//taking inputs
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
		}
	//calling fn
	pair(a);
	//checking no prime
	if (z==0){
		printf("No Co-Prime found");}
		

}
//forming functions of checking values
void pair(int a[]){
	for (int i =0;i<4;i++){
		for (int j=i+1;j<5;j++){
			gcd(a[i],a[j]);
		}
		}

}
//forming function of checking gcd
int gcd(int a,int b){
	int l=0;
	for (int k =1;k<=a;k++){
	if (a%k==0 && b%k==0){
		l+=1;}
		}
	if(l==1){
	z+=1;}
	if(a!=b){
	if (l==1){
	printf("\n %d and %d are  coprime",a,b);}}
	
	
}
