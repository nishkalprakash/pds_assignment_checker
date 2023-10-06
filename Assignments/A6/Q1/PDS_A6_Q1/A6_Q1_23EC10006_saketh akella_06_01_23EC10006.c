#include<stdio.h>
#include<stdlib.h>
int a[100];int size;
void fill(){
  int x;
  for(int i=0;i<size;i++){
    x=rand()%900;
    x=x+100;
    a[i]=x;
  }
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
  printf("\n");

}
void exchange(){
  int y;
  for(int i=0;i<size;i++){
    printf("%d,   ",a[i]);
  }
  printf("\n");
  int j;
  if(size%2!=0) j=(size+1)/2;
  else j=size/2;
  for(int i=0;i<j;i++){
    y=a[i];
    a[i]=a[j+i];
    a[j+i]=y;
  }
   for(int i=0;i<size;i++){
    printf("%d,   ",a[i]);
  }
  printf("\n");
}
void rotateleft(){
  int c,b;
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  b=a[0];
  for(int i=0;i<size;i++){
    c= a[i+1];
    a[i]=c;
  }
  a[size-1]=b;
  for(int i=0;i<size;i++){
    printf("%d  ",a[i]);
    
  }
  printf("\n");
}
void rotateright(){
  int b,c;
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  b= a[size-1];
  for(int i=0;i<size;i++){
    c=a[size-i-2];
    a[size-i-1]=c;
  }
 a[0]=b;
 for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
  printf("\n");


}
void segregate(){
  int b[100];
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  int j=0;
  for(int i=0;i<size;i++){
    if(a[i]%2==0){
      b[j]=a[i];
      j++;
    }
  }
  for(int i=0;i<size;i++){
    if(a[i]%2==1){
      b[j]=a[i];
      j++;
    }
  }
   for(int i=0;i<size;i++){
    printf("%d ",b[i]);
  }
  printf("\n");



}
void search(){
  int x;
   for (int i=0;i<size;i++){
  printf("%d  ",a[i]);

}
printf("\n");
  printf("enter the number u want yo search: \n");
  scanf("%d",&x);
  int flag=0;
  for(int i=0;i<size;i++){
    if(x==a[i]){printf("index = %d \n",i);flag++;}
  }
  if(flag==0)printf("not found \n");


}
void fold();
void analyse();


int main(){
  int a;
  printf("enter the size \n");
  scanf("%d",&size);
  if((size<100)&&(size>0)){
  while(1){
    printf("1--fill \n");
    printf("2--exchange \n");
    printf("3--rotate right \n");
    printf("4--rotate left \n");
    printf("5--segregate \n");
    printf("6--search \n");
    printf("7--fold \n");
    printf("8--analyse \n");
    printf("0 or 9 -- exit \n");
    scanf("%d",&a);
    if((a==0)||(a==9))break;
    else if(a==1)fill();
    else if(a==2)exchange();
    else if(a==3)rotateright();
     else if(a==4)rotateleft();
     else if(a==5)segregate();
    else if(a==6)search();
    /*  else if(a==7)fold();
    else if(a==8)analyse();*/
  }
  }
  else printf("wrong entry \n");
  return 0;
}
