#include <stdio.h>
int main(){
	int x,y,z,p, count=0;
	printf("Enter the first value:");
	scanf("%d",&x);
	printf("\nEnter the second value:");
	scanf("%d",&y);
	printf("\nEnter the third value:");
	scanf("%d",&z);
	printf("\nEnter the fourth value:");
	scanf("%d",&p);
	if (y==x){
		count+=1;}
	if (z==x){
		count+=1;}
	if (p==x){
		count+=1;}
	if (y==z){
		count+=1;}
	if (y==p){
		count+=1;}
	if (z==p){
		count+=1;}
	if (count==1){
		printf("\nYES");}
	else{
		printf("\n NO");
	return 0;
}

}
	
	
