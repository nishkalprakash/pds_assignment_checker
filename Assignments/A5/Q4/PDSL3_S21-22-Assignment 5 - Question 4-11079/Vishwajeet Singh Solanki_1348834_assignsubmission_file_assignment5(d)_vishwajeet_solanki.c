/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:5(d)
*/

#include<stdio.h>

void multiplyMatrices(int a,int b,int c,int d,int x,int y,int n1,int n2,int n3,int m1[n1][n2],int k[n3][n3],int ans[x][y])            //Output value function
{
    a=0,c=0,b=n3,d=n3;
    for(int i=a; i<b; i++){
        for(int j=c; j<d; j++)
     ans[i][j] = 0;
    }
    for(int i=a; i<b; i++){
        for(int j=c; j<b; j++){
            ans[i][j] += m1[i][j]*k[i][j];
        }
    }
    a++;b++;
if(b == n1){
    int a=0,b=n3;
    c=c+1;
    d=d+1;
    void multiplyMatrices(int a,int b,int c,int d,int x,int y,int n1,int n2,int n3,int m1[n1][n2],int k[n3][n3],int ans[x][y]);
}
if(d == n2){
    return ;
}
}


int main ()                                                                   //main function
{
int n1,n2,n3,a,b,c,d,x,y;
x=n1-n3;
y=n2-n3;
int m1[n1][n2]; int k[n3][n3]; int ans[x][y];

printf("Enter the dimension of the input image matrix:");                    //Input
scanf("%d %d",&n1,&n2);
printf("Enter the input image matrix:\n");

for(int i=0; i<n1; i++) {
   for(int j=0; j<n2; j++)
    scanf("%d",&m1[i][j]);
}

printf(" Enter the kernel size:");
scanf("%d",&n3);

printf("Enter the kernel elements:");

  for(int i=0; i<n3; i++) {
    for(int j=0; j<n3; j++)
      scanf("%d",&k[i][j]);
     }
 void multiplyMatrices(int a,int b,int c,int d,int x,int y,int n1,int n2,int n3,int m1[n1][n2],int k[n3][n3],int ans[x][y]);

 for(int i=0; i<x; i++) {
   for(int j=0; j<y; j++)
    printf("%d",ans[i][j]);
}
  return 0;
}




