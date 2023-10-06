#include<stdio.h>
#include<stdlib.h>
int arr[100];
int n;
int fill(int x[])
{
  int b1=0;
  printf("Enter the size of the array");
  scanf("%d",&n);
  if(n<1||n>100){
    while(n<1||n>100){
      printf("Enter the size of the array");
      scanf("%d",&n);}}
  for(int i=0;i<n;i++)
    x[i]=(rand()%899)+100;
  for(int i=0;i<n;i++)
    printf("arr[%d]=%d, ",i,x[i]);
}
int roright(int x[],int size)
{
  if(size-1!=0){
    x[size-1]=x[size-2];
    roright(x,size-1);}
}

int roleft(int x[],int size)
{
  if(size!=1){
    x[n-size]=x[n-size-1];
    roleft(x,size-1);}
  
}
int main()
{
  int i1;
  printf("menu choices\n1---Fill\n2---Exchange\n3---Rotate Right\n4---Rotate Left\n5---Segregate\n6---Search\n7---Fold\n8---Analyze\n0,9---Exit\n");
  scanf("%d",&i1);
  if (i1==1){
    fill(arr);
    main();}
  else if(i1==3){
    for(int i=0;i<n;i++)
    printf("arr[%d]=%d, ",i,arr[i]);
    arr[0]=arr[n-1];
    roright(arr,n);
    printf("\nprinting\n");
    for(int i=0;i<n;i++)
      printf("arr[%d]=%d, ",i,arr[i]);
    main()
  }
  else if(i1==4){
    for(int i=0;i<n;i++)
    printf("arr[%d]=%d, ",i,arr[i]);
    arr[n-1]=arr[0];
    roleft(arr,n);
    printf("\nprinting\n");
    for(int i=0;i<n;i++)
      printf("arr[%d]=%d, ",i,arr[i]);}
    main();
}


  
  
  
  
  
  


  
  
 
    
