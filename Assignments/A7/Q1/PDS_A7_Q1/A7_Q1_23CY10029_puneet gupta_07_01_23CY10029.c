#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 void find_max(int m,int n,int matrix[][20])
{	int maxr=0,maxc=0;
	int max=-1;
        int sum=0;
	int r=0,q=0;
	while(r<m-2)
        {
        q=0;
	while(q<n-2){
        sum=0;
	for(int i=r;i<r+3;i++)
	{

	for(int j=q;j<q+3;j++){

	sum+=matrix[i][j];
	
	}
	}
        
	if (sum>max){
	max =sum;
	maxr=r;
	maxc=q;	
	}
	
	q++;	
	}
        r++;
	}
       printf("max submatrix\n");
	for(int i=maxr;i<maxr+3;i++)
	{
	for(int j=maxc;j<maxc+3;j++){
	printf("%d\t",matrix[i][j]);
	}
	printf("\n");	
	}
	printf(" max = %d  \n ",max);
}//end of max funtion
void findmin(int m,int n,int matrix[][20])
{
	int sum=0;
	int r=0,q=0;
	 int minr=0,minc=0;
	int min=90;
       
	while(r<m-2)
        {
        q=0;
	while(q<n-2){
        sum=0;
	for(int i=r;i<r+3;i++)
	{

	for(int j=q;j<q+3;j++){

	sum+=matrix[i][j];
	
	}
	}
        
	if (sum<min){
	min = sum;
	minr=r;
	minc=q;	
	}
	
	q++;	
	}
        r++;
	}
       printf("min submatrix\n");
	for(int i=minr;i<minr+3;i++)
	{
	for(int j=minc;j<minc+3;j++){
	printf("%d\t",matrix[i][j]);
	}
	printf("\n");	
	}
	printf(" min = %d\n   ",min);	
}//end of min funtion
void minmax(int m,int n,int matrix[][20])
{
	int min=10,max[20]={0};

	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	
	if(max[i]<matrix[i][j])
	max[i]=matrix[i][j];
}

}
	printf("max for the row is");
	for(int k=0;k<n;k++){
	if(min>max[k])
	min=max[k];
	printf(" %d\t",max[k]);

}
printf("\nminimum of these is = %d\n",min);
}//end of minmax funtion
	void maxmin(int m,int n,int matrix[][20])
{
	int max=0,min[20]={10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};

	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	
	if(min[i]>matrix[i][j])
	min[i]=matrix[i][j];
}

}
	printf("min for the row is");
	for(int k=0;k<n;k++){
	if(max>min[k])
	max=min[k];
	printf("%d\t",min[k]);

}
printf("\nmaximum of theseis = %d\n",max);

}//end of maxmin funtion
int main()
{
	int matrix[20][20],m,n;
	
	printf("enter the value of m between 2 to 20 and n between 2 to 20\n");
	scanf("%d%d",&m,&n);
	if (m<3||m>19||n<3||n>19)
	return 1;
	
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++){
	matrix[i][j]= rand()%11;
	}	
	}
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++){
	printf("%d\t",matrix[i][j]);
	}
	printf("\n");	
	}
	
	find_max(m,n,matrix);
       findmin(m,n,matrix);
	minmax(m,n,matrix);
	 maxmin(m,n,matrix);
	return 0;
}
