//amrita singh
//24na10014
#include<stdio.h>

//creating the bins
void createbin(int flag,int n,int a[]){
int i;

for(i=1;i<=flag;i=i+1){
	for(int j=0;j<n;j++){
	int flag2=flag;
	int bin[20];
	if(a[i]<=flag2){
		for(int r=0;r<=20;r++)
		bin[r]=a[i];//printing values to the newly formed array
		flag2=flag2+flag;}}
		printf("bin \n");
		/*for(int r=0,r<=20,r++)
		
		printf("%d",bin[r]);
		}
		return ;}*/
		
		

int main()
{
int n;
printf("enter the total no of elements");
scanf("%d",&n);

//creating the array
int a[n];
for(int i=0;i<n;i++){
	printf("enter the element");
	scanf("%d",&a[i]);}
	
int bin;
printf("enter the number of bin");
scanf("%d",&bin);

//to find the range of the array
int max,min;
max=min=a[1];
for(int i=0;i<n;i++){
	if(a[i]>=max)
	max=a[i];
	if(a[i]<=min)
	min=a[i];}
printf("the range of the array is [%d,%d]",min,max);
int flag=max/bin;// to calculate the ranges which will be formed 
//createbin(flag,n,a);
return 0;}


	

	

