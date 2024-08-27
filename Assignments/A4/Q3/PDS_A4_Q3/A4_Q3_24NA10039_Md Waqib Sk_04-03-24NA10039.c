
//prints numero pyramid
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
int main(){
int n;
int mid=1;
printf("Enter the number of rows:\n");
scanf("%d",&n);
for(int i=0;i<n;i++) //creates rows
{
for(int j=0;j<n-i;j++){

printf(" ");

}
int l=i+1;
for(int k=0;k<i;k++){

printf("%d",l%10);
l++;


}


printf("%d",mid%10);
mid+=2;

int r=l-1;
for(int k=0;k<i;k++){

printf("%d",r%10);
r--;


}



for(int j=0;j<n-i;j++){

printf(" ");

}

printf("\n");



}





}
