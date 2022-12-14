/*
satya prakash nanda
22ag10041
section 14
lab test 1
set a
ques 3
*/
#include<stdio.h>
#include<math.h>
int main(){
int x1,x2,x3,y1,y2,y3, max, min,avg ,side1, side2,side3;
printf("enter x1, y1:");
scanf("%d %d", &x1,&y1);
printf("enter x2, y2:");
scanf("%d %d", &x2, &y2);
printf("enter x3, y3:");
scanf("%d %d", &x3,&y3);

side1= sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2));
side2= sqrt((x2-x3)*(x2-x3)+ (y2-y3)*(y2-y3));
side3= sqrt((x3-x1)*(x3-x1)+ (y3-y1)*(y3-y1));


int arr[3];
arr[0]=side1;
arr[1]=side2;
arr[2]=side3;

max=arr[0];
min=arr[1];
for(int i=0; i<3; i++){
	if(arr[i]>max){max=arr[i];}
}

for(int i=0; i<3; i++){
	if(arr[i]<min){min=arr[i];}
	}
for(int i=0; i<3; i++){
        if((arr[i]>min)&&(arr[i]<max)){arr[i]=avg;}
}


if(max>min+avg){
		printf("invalid ");
		}


if(max*max==min*min+avg*avg){printf("right angled");}
else if(max*max>min*min+avg*avg){printf("obtuse");}
else{printf("acute");}


return 0;
}

