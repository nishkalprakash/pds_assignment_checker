/*section 14
Name:P.sri Harsha Vardhan 
Roll no:22MA10040
labtest 2 
*/
#include<stdio.h>
#include<stdlib.h>
void print_array(int **array,int c,int d,int cols)
{
if(c==1 && d==1) {
printf("%d\n",array[0][0]);
return;
}
else
{
printf("%d\n",array[c][d-1]);
if(d==1){
printf("\n");
return
print_array(array,c-1,cols,cols);
}
else return print_array(array,c,d-1,cols);
}}
int main()
{
int c,d,num;
printf("Enter m:");   
scanf("%d",&c);        //entering the no:of rows//
printf("Entr n:");
scanf("%d",&d);         //entering the no:of columns//
int **array;
array=(int **)malloc(c*sizeof(int *));
for(int i=0;i<d;i++)
{
array[i]=(int *)malloc(d*sizeof(int ));
}
if(c>d){
array[c-1]=(int *)malloc(d*sizeof(int ));
}
printf("Enter %d Elements:",c*d);
for(int i=0;i<c;i++)
{
for(int j=0;j<d;j++){
scanf("%d",&array[i][j]);
}
}
print_array(array,c,d,d);
return 0;
}





















