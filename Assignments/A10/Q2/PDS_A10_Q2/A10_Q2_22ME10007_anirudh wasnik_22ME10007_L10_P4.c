#include<stdio.h>



int main()
{
int L[20],Lasc[20],Ldsc[20],Ltemp[20];
int a,b,c,f,flaga,flagd;
int same=1;
char count;
  //prompting an input
printf("enter elements:(press 'x' to stop)\n");    
for(a=0,count=1;a<20;a++){
scanf("%d",&L[a]);
if(getchar()=='x'){
break;}
count++;
}
//creating a temp array to compare with
for(a=0;a<count-1;a++){
Ltemp[a]=L[a];                               
}   
//making a ASC order array
for(a=0;a<count-1;a++){
for(b=a+1;b<count-1;b++){                      
if(L[a]>L[b]){
f=L[a];
L[a]=L[b];
L[b]=f;
}
}}

for(a=0;a<count-1;a++){
Lasc[a]=L[a];  

}    
//making a DSC order aray to compare
for(a=0;a<count-1;a++){
for(b=a+1;b<count-1;b++){
if(L[a]<L[b]){
f=L[a];
L[a]=L[b];
L[b]=f;
}
}}

for(a=0;a<count-1;a++){
Ldsc[a]=L[a]; 

}

//comparing temp array with asc and dsc
for(a=0,flaga=0,flagd=0;a<count-1;a++){
if(Ltemp[a]==Lasc[a]){flaga++;}
if(Ltemp[a]==Ldsc[a]){flagd++;}
}

if(flaga==count-1){printf("asc");}
if(flagd==count-1){printf("dsc");}
if(flaga!=count-1&&flagd!=count-1){printf("not sorted");}

return 0;}
