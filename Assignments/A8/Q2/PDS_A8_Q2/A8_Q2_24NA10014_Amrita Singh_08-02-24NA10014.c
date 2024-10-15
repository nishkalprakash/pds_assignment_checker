//amrita singh
//24na10014
#include<stdio.h>

void sort(int a[], int n){
	//sorting the array
	for(int start=0;start<n;start++){
	int min=a[start];//fixing for ref
	int ind,temp;
	temp=min;
	for(int i=start;i<n;i++){
	if (a[i]<min){
	min=a[i];
	ind=i;}
	a[start]=min;//giving the value
	
	a[ind]=temp;//swaping
	}printf("%d ,",a[start]);};
	//printf("%d ",a[n-1]);
	}
	
void addi(int a[],int n ,int add){
int ind,temp;
	for(int i=0;i<n;i++){
	a[i]>add;
	ind=i;}
	printf("to be inserted in %d place",ind);//finding pllace
	
	
	for(int i=n;i>=ind;i--){
	a[i]=a[i-1];}
	a[ind]=add;
	
	for(int j=0;j<=n;j++)
	printf("%d ",a[j]);}
	
	
	
	

int main(){

	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
	scanf("\n%d",&a[i]);}
	
	sort(a,n);//function call
	int add;
	printf("enetr the value to be added");
	scanf("%d",&add);
	addi(a,n,add);
	
	
	
	}
	
	
	

