/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>

int main() {
int i,j,k,l;
int m1[4]={8200,8300,6900,9200};
int m2[4]={7700,3700,4900,9200};
int m3[4]={1100,6900,500,8600};
int m4[4]={800,900,9800,2300};
int temp,min;


for(int i,j,k,l=0;i,j,k,l<=3;i++,j++,k++,l++){
     int min=m1[i]+m2[j]+m3[k]+m4[l];
     temp=min;
     if (min<temp)
        break;
     else continue;
}
printf("minimum cost=%d", min);

return 0;
}
