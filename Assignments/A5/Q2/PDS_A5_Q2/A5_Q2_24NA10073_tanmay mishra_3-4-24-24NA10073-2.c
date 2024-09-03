/*code creator: tanmay mishra 24Na10073 
*/
#include<stdio.h>

int main(){


int array[100];//initialisation
int n,z=0;

scanf("%d",&n);

if(n>100)
	printf("error : n>100");

	for(int i=0;i<n;i++)
                                            /////////////i do not know whats wrong in this dumb code/////////////
{
	scanf("%d",&array[i]);          
}
                                            ////////////anyways if(code checker== young male)           /////////////
                                            ////////////            {do you play coc ?====i have max th 16} /////////
	printf("original array : ");        ////////////          else                              /////////////////
      					    ////////////              ignore                        /////////////////
	for(int i=0;i<n;i++)

{
	printf("%d", array[i]);
		
	}

	printf("duplicates :");

	while(z<n)
{
		int a = array[z];
		int index=0;
		for (int i=0;i<n;i++)
		{
		 if(array[i]==a)
		 		{
		 		index++;
		 		}
		}
					printf("%d(%d)",array[z],index);
		z=z+1;
}
		return 0;
}
