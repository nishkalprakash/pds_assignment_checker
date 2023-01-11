/*Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:8
Description: Program to print saddle point.
*/

#include<stdio.h>
int main()
{
int r,c,f=0,x;
printf("shape of 2D array:");
scanf("%d,%d",&r,&c);

int a[r][c];
printf("Enter numbers\n");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		scanf("%d",&a[i][j]);
	}	
}




int big=-10000,small=10000;
for(int i=0;i<r;i++){                                                                    
	for(int j=0;j<c;j++){
		if(a[i][j]<small){
			small=a[i][j];
		}

		if(a[j][i]>big){
			big=a[j][i];
		}
	}

	if(big==small)
	{
		x=big;
		f++;
	}

	big=a[i+1][0];
	small=a[0][i+1];
	}

if(f==0)
printf("The saddle point is %d",x);
else
printf("There is no saddle point in this 2D array");
return 0;
}
