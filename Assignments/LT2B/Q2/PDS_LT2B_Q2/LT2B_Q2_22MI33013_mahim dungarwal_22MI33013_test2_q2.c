#include <stdio.h>


int main () {
int m,n;
int arr[m][n];

printf("enter values of m ,n : ");
scanf("%d%d",&m,&n);

for(int i=0;i<m;i++) {
for(int j=0;j<n;j++) {
for(int x=1;x<=(m*n);x++) {
arr[i][j] == x ;
printf("value of arr[%d][%d] is %d",m,n,x);
}
}
}


return 0;
}
