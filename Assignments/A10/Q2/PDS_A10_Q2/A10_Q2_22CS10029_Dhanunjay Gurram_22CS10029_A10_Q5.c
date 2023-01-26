/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:10*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *list,i=1,asc=0,t=0,desc=0;
	char d;
	printf("L = ");
	list=(int *)malloc(i*sizeof(int));
	scanf("%d",&list[i-1]);
	d=getchar();
	while(d!='\n'){
		i++;
		list=realloc(list,i*sizeof(int));
		scanf("%d",&list[i-1]);
		d=getchar();
	}
	for (int j=0;j<i-1;j++){
		if (list[j]<list[j+1]) {asc=1; continue;}
		else {asc=0; break;}}
	if (asc==1){ printf("The input list L is in ascending order\n");}
    t+=asc;
	for (int j=0;j<i-1;j++){
		if (list[j]>list[j+1]) {desc=1; continue;}
		else {desc=0; break;}}
	if (desc==1){printf("The input list L is in descending order\n");}
	t+=desc;
	if (t==0) printf("The input list L is not in sorted order\n");
	return 0;

}