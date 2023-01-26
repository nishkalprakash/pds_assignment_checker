/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:10*/
#include <stdio.h>
#include <stdlib.h>
int min(int *l,int n){
	int min;
	for (int i=0;i<n;i++){
		if (l[i]==0) continue;
		if (i==0) {min=l[0]; continue;}
		else if (min>l[i]) min=l[i];
	}
	return min;
}
int max(int *l,int n){
	int max;
	for (int i=0;i<n;i++){
		if (i==0) {max=l[0]; continue;}
		else if (max<l[i]) max=l[i];
	}
	return max;
}
int main(){
	int *list,i=1,k=1;
	printf("L = ");
	char d;
	list=(int *)malloc(i*sizeof(int));
	scanf("%d",&list[i-1]);
	d=getchar();
	while(d!='\n'){
		i++; list=realloc(list,(i)*sizeof(int));
		scanf("%d",&list[i-1]);
		d=getchar();
	}
	int *dup;
	dup=(int *)malloc(k*sizeof(int));
	for (int j=0;j<i;j++){
		if (list[j]==0) continue;
		for (int m=j+1;m<i;m++){
			if (list[j]==list[m]) {dup[k-1]=list[j]; 
				                   k++;  dup=realloc(dup,k*sizeof(int)); list[m]=0; break;}
		}}
		if (k>1) printf("The input list contains duplicate numbers of:");
		else printf("The input list does not contain any duplicate number");
	for (int j=0;j<k-1;j++){
		printf("%d ",dup[j]);
	}
	printf(" \n");
	printf("Minimum number is:%d\n",min(list,i));
	printf("Maximum number is:%d\n",max(list,i));
	return 0;
	}
