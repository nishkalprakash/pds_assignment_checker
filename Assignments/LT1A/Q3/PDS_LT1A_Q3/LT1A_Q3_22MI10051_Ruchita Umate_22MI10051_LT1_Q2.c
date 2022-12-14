#include <stdio.h>
#include <math.h>
int main(){
int length1,length2,length3,lengthm,a,b,c,d,e,f;
printf("ENTER FIRST COORDINATE:");
scanf("%d,%d",&a,&b);
printf("ENTER SECOND COORDINATE:");
scanf("%d,%d",&c,&d);
printf("ENTER THIRD COORDINATE:");
scanf("%d,%d",&e,&f);

length1=sqrt((a-c)*(a-c) + (b-d)*(b-d));
length2=sqrt((a-e)*(a-e) + (b-f)*(b-f));
length3=sqrt((e-c)*(e-c) + (f-d)*(f-d));


if(length1>length2 && length1>length3){
int max=length1;
if(max>(length2+length3)){
printf("invalid");
}
}

if(length2>length1 && length2>length3){
int max=length2;
if(max>(length1+length3)){
printf("invalid");
}
}

if(length3>length2 && length3>length1){
int max=length3;
if(max>(length2+length1)){
printf("invalid");
}
}

return 0;
}



