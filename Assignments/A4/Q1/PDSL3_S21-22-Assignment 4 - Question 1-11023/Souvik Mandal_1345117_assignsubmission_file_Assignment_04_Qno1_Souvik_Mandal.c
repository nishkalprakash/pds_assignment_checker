
/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/




#include <stdio.h>

void function(int arr[],int l,int com,int temp[],int num){
if(com==l)
{
    for(int j=0;j<l;j++)
    {
        printf("%d ",temp[j]);
    }
    printf("\n");
    return ;
}

for(int j=0;j<num;j++)
{
        temp[com]=arr[j];
    function(arr,l,com+1,temp,num);
}

}


int main()
{
    int n,I;

     printf("no. of elements \n");
     scanf("%d",&n);

     int arr[n];
    printf("Enter array elements : ");

	for(int i=0; i<n ; i++)
    {
		scanf("%d",&arr[i]);
	}


	printf("Enter value of I : ");
	scanf("%d",&I);

	int temp[I];
    function(arr,I,0,temp,n);
}