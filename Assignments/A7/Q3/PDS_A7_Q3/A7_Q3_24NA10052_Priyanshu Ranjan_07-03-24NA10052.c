#include <stdio.h>
//declaring functions
int minimum(int a[],int n);
int mixmum(int a[],int n);
int main(){
//decalaring variables
	int n,bin;
	printf("N ");
	scanf("%d",&n);
	//making arrays
	int a[n];
	int b[n];
	printf("A[]=");
	//taking inputs 
	for (int i =0;i<n;i++){
		scanf("%d",&a[i]);
		}
	printf("Bin ");
	scanf("%d",&bin);
	int c[n];
	for (int i=0;i<n;i++){
		c[i]=a[i];
		for (int j=0;j<n/2;j++){
			int k =a[0];
		for (int o=1;o<n;o++){
			if (k>c[o]){
				k=c[o];}}
				b[j]=k;}
		int l =a[0];
		for (int p=1;p<n;p++){
			if (l<a[p]){
				l=a[p];}
			b[n/2-p]=l;}
			
			}
	for (int i =0;i<n;i++){
		printf(" %d",b[i]);
		}
	


}
//making functions
int minimum(int a[],int n){
	int k =a[0];
	for (int i=1;i<n;i++){
		if (k>a[i]){
			k=a[i];}}
	printf("\n Smallest number %d",k);
}
int mixmum(int a[],int n){
	int k =a[0];
	for (int i=1;i<n;i++){
		if (k<a[i]){
			k=a[i];}}
	printf("\n Greatest num %d",k);
}
