#include<stdio.h>
#include<stdlib.h>

void input(int m,int n){
printf("enetr 'm' ");
scanf("%d",&m);
printf("enetr 'n' ");
scanf("%d",&n);
int a,b;
int A[m][n];
printf("enetr %d elements:\n",m*n);
for(a=0;a<m;a++){                 // gets the input for the array
for(b=0;b<n;b++){
scanf("%d",&A[a][b]);
    }
}

for(a=0;a<m;a++){printf("\n");      //prints the 2D array in matrix form
for(b=0;b<n;b++){
printf("%d ",A[a][b]);
    }
}
//////////////////////////        i  am not able to use recursions
//if(i<n){
//printf("%d %d%d ",A[i][j],i,j);
//i++;
//input(i,j);}

}

int main()
 {
int i,j;
input(i,j);                            //calls the function to create  2D array
return 0;
 }





