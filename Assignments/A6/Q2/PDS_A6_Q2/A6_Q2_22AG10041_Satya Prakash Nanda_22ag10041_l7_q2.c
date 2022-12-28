/*
satya prakash nanda
sec 14
roll no 22AG10041
asignment 7
*/

#include<stdio.h>
int gcd(int m, int n);
void pair(int arr[]);


int main(){
int arr[5];
for(int i=0; i<5;i++){
printf("enter %d element:", i+1);
scanf("%d", &arr[i]);
while(arr[i]<0 || arr[i]%1!=0){
				printf("invalid input!\n");
				printf("enter %d element:", i+1);
				scanf("%d", &arr[i]);
				}

}
printf("coprime pairs\n");
pair(arr);
printf(" \n");


return 0;
}
int gcd(int m, int n){
int a;
for(int i=1; i<=m && i<=n; i++){
			if(m%i==0 && n%i==0){
						a=i;		
						}
			}
return a;
}

void pair(int arr[]){
for(int i=0; i<5; i++){
	for(int j=i+1; j<5; j++){
				if(gcd(arr[i],arr[j])==1){printf("(%d,%d)\t", arr[i],arr[j]);}	
						}
			}

}
