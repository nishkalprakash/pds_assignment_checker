#include<stdio.h>

int main(){
int n;
printf("n = ");
scanf("%d\n",&n);

int A[101];
for(int i =0;i<n;i++){
scanf("%d",&A[i]);
}
//Sorting array
int x,temp;
for(x =0;x<n-1;x++){
for(int y =x + 1,z = 1;z<n-x;y++,z++){
  if(A[x] > A[y]){
  temp = A[x];
  A[x] = A[y];
  A[y] = temp;
  }
}
}
printf("A[n] = ");
for(int p =0;p<n;p++){
printf("%d ",A[p]);
}
printf("\n");

//Inserting m in array
int m;
printf("m = ");
scanf("%d",&m);

A[n + 1] = m;
int a,temp1;
for(a =0;a<n;a++){
for(int b =a + 1,c = 1;c<n + 1-a;b++,c++){
  if(A[a] > A[b]){
  temp1 = A[a];
  A[a] = A[b];
  A[b] = temp1;
  }
}
}

for(int j = 0;j<n+1;j++){
printf("%d ",A[j]);
}
}
