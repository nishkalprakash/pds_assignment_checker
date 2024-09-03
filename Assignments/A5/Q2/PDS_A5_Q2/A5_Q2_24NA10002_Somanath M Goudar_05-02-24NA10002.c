#include<stdio.h>
int main(){
const int MAX_SIZE = 100;
int i, x, n, size;
int Originalarray [MAX_SIZE];\
int count=1;

for(i=0;i<n;i++)
  scanf("%d",& Originalarray[i]);
for(int i=0;i<n-1;i++){
for(int k=1;k<n-i;k++){

if(Originalarray[i]==Originalarray[i+k]){
x = Originalarray[i];
count++;
}
}
}
printf("Duplicates:\n");
printf("%d,%d" ,x ,count);

}

