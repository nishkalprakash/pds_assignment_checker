/*name-gaurav meena
roll no-22CE10025
lab test-2
*/
#include<stdio.h>
#include<stdlib.h>

int A[3][3];
int count=0;



int input(int m,int n){

  printf("Enter m:");
  scanf("%d",&m);

  printf("Enter n:");
  scanf("%d",&n);

  printf("Enter elements: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
             scanf("%d",&A[i][j]);
             
		}	
	}


	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	             printf("%d\n",A[j][i]);
	         }
	         }

}











int main(){

	int a;
	int b;

	input(a,b);
	

	


return 0;
	
}




