//Roll No.: 23ME10044
//Name: Lalit Karthikeyan

#include<stdio.h>


int main(){

  int a=0,b=0,c=0,d=0;

  
  for(int i=0;1; i++){
    if(i%4==0){
      printf("Enter number: ");
      scanf("%d",&a);
    }
    if(i%4==1){
      printf("Enter number:");
      scanf("%d",&b);
    }
    if(i%4==2){
      printf("Enter number:");
      scanf("%d",&c);
    }
    if(i%4==3){
      printf("Enter number:");
      scanf("%d",&d);
    }

    if(a==5){
      if(b==1){
	if(c>0){
	  if(d==7){
	    printf("Pattern Found!!");
	    break;
	  }}}
    }
    if(b==5){
      if(c==1){
	if(d>0){
	  if(a==7){
	    printf("Pattern found!!");
	    break;}}}
    }
    if(c==5){
      if(d==1){
	if(a>0){
	  if(b==7){
	    printf("Pattern found!!");
	    break;}}}
    }
    if(d==5){
      if(a==1){
	if(b>0){
	  if(c==7){
	    printf("Pattern found!!");
	    break;}}}
    }
  }
  return 0;
}
    
	
