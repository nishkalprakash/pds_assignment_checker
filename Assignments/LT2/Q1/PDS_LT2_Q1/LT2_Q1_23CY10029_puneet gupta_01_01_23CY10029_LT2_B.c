
	//PUNEET GUPTA 23CY10029



#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

	int arr[50];
	int maxmin(int arr[]){
	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}}
	int max=0;
	int min=100;
	for(int i=0; i<50;i++){
	if(max<arr[i])
	max=arr[i];
	if(min>arr[i])
	min=arr[i];
	}
	printf("min:%d   max:%d\n",min,max);

	}					//END OF MAXMIN FUNCTION

	
	int duplicate(int arr[]){
	int dup[50], k=0;
	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}
	
	}
	for(int i=0;i<50;i++){
	for(int j=i+1;j<50;j++){
	if (arr[i]==arr[j] && dup[k]!=arr[i]){
	dup[k++]=arr[i];
	break;}
	}

	}
	printf("\n duplicalte data is\n");
	for(int i=0;i<k;i++){
	printf("\n%d\t",dup[i]);
	}
	printf("\n");
	}
	
	int highestfreq(int arr[]){
	int k[50],count=0;
	for(int i=0;i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}
	}
	for(int i=0;i<50;i++){
	for(int j=i+1;j<50;j++){
	if (arr[i]==arr[j]){
	k[i]++;
	break;}
	}
	
	}
	int p;
	for(int i=0;i<50;i++){
	if (k[i]>count){
	count=k[i];
	p=i;
	}

	}
	printf("highest frequency is %d of %d number",count,arr[p]);
	}
	 int largestincreasing( int arr[]){
	int a[50],k=0;
	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}}
	for(int i=0; i<50;i++){
	for(int j=i+1; j<50; j++){
	if(arr[i]>arr[j]){
	a[k++]=arr[i];
	}
	
	
	}}
	printf("\nincreasing order is \n");
	for(int i=0; i<50; i++){
	printf("%d\t",a[i]);
	}
	}
	int largestdecreasing( int arr[]){
	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}

	}
	printf("\nlargest decreasing order is\n");
	}
	int removeduplicate(int arr[]){

	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}


	}
	printf("remove duplicated file is");
	}
	int main(){
	int a;
	
	for(int i=0; i<50;i++){
	arr[i]=rand()%81+20;
	}
	for(int i=0; i<50;i++){
 
	printf("%d\t",arr[i]);
	if(i==9 || i==19 || i==29 || i==39){
	printf("\n");
	}
	
	}
	while(1){
	printf("enter the number between 1 to 6\n");
	printf("1 : maxmin \n 2 : duplicate\n 3 : highist frquency\n 4: largest increasing\n 5 : largest decreasing\n 6 :removal duplicate\n");
	scanf("%d",&a);
	switch(a){
	case 1 : maxmin(arr);
	break;
	case 2 : duplicate(arr);
	break;
	
	case 3 : highestfreq(arr);
	break;
	case 4 :largestincreasing(arr);
	break;
	case 5 : largestdecreasing(arr);
	break;
	case 6 : removeduplicate(arr);
	break;
	default : ; return 0 ;
	}
	
	}
	

	}
	
