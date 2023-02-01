#include<math.h>
#include<stdio.h>



int main()
{
int LL[7];
int i,j,k,l;
printf("eneter the numbrs:");
for(i=0;i<6;i++){scanf("%d",&LL[i]);}

printf("\n what number to delete?");
scanf("%d",&l);

for(i=0;i<6;i++){
if(LL[i]==l){
LL[i]='\0';}
}

for(i=0;i<6;i++){
for(j=i+1;j<6;j++){if(LL[i]>LL[j]){
k=LL[i];
LL[i]=LL[j];
LL[j]=k;}}
}

for(i=1;i<6;i++){printf("%d",LL[i]);}




return 0;

}
