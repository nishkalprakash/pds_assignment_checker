#include<stdio.h>
#include<stdlib.h>
int arr[100], size;
void fill();
void exchange();
void rotate_right();
void rotate_left();
void search();
void fold();
int main()
{
  int c;
  printf("Menu choices :\ni. 1 ---- Fill\nii. 2 ---- Exchange\niii. 3 ---- Rotate right\niv. 4 ---- Rotate left\nv. 5 ---- Segregate\nvi. 6 ---- Search\nvii. 7---- Fold\nviii. 8 ---- Analyze\nix. 0,9 or any higher number ---- Exit\n");
 printf("enter your choice: ");
 scanf("%d",&c);
 if(c==1)fill(arr, size);
 else if(c==2){
    fill();
    exchange();
    }
 else if(c==3)
    {
    fill();
    rotate_right();
    }
 else if(c==4)
   {
    fill();
    rotate_left();
    }
 else if(c==5);
 else if(c==6)
    {
    fill();
    search();
    }
 else if(c==7)
   {
    fill();
    fold();
    }
 else if(c==8);
 else
  return 0;
return 0;
}
 void fill()
{int i;
  printf("enter the size of array:");
  scanf("%d",&size);
  while(size>100||size<1)
   { 
     printf("enter the size of array:");
     scanf("%d",&size);
   }
  for(i=0;i<size;i++)
   {
    arr[i]=100+rand()%900;
   }
  for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }printf("\n");
}
void exchange()
{
 int i,h,temp,v;
 for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
 h= size/2; 
 if(size%2==0)v=h;
 else {v=h+1;}
 for(i=0;i<h;i++)
 {
  temp = arr[i];
  arr[i]=arr[v];
  arr[v]=temp;
  v++;
 }
 for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
}
void rotate_right()
{ int arr1[size],i;
  for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
  for(i=0;i<size-1;i++)
  {
   arr1[i+1]=arr[i];
  }
  arr1[0]=arr[size-1];
  printf("\n");
   for(i=0;i<size;i++)
  {
   printf("%d  ",arr1[i]);
  }
 }
void rotate_left()
{ int arr1[size],i;
  for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
  for(i=1;i<size;i++)
  {
   arr1[i-1]=arr[i];
  }
  arr1[size-1]=arr[0];
  printf("\n");
   for(i=0;i<size;i++)
  {
   printf("%d  ",arr1[i]);
  }
 }
/*void segregate()
{ int i,arr1[50],arr2[50];
  for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
  for(i=0;i<size;i++)
  {
   if(arr[i]%2==0)arr1[i]=arr[i];
   else arr2[i]=arr[i];
  }
}*/
void search()
{int c,i,index,f=0;
 for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }
 printf("enter a no.: ");
 scanf("%d",&c);
 for(i=0;i<size;i++)
  {
   if(c==arr[i])
    {index=i;
     f=1;
     break;
    }
  }
  if(f==1)
   printf("index of the element is: %d",index);
  else
   printf("not found.");
}
void fold()
{
  int i,h,temp,v;
 h= size-1; 
 int arr1[50];
  if(size%2!=0)
 {
 v=size/2;
 for(i=0;i<=v;i++)
 {
  temp = arr[i]+arr[h];
  arr1[i]=temp;
  h--;
 }
 for(i=0;i<=v;i++)
  {
   printf("arr[%d]=%d ",i,arr1[i]);
  }printf("\n");
 }
 else
  {
   v=size/2+1;
  for(i=0;i<v;i++)
 {
  temp = arr[i]+arr[h];
  arr1[i]=temp;
  h--;
 }
 arr1[v]=arr[v];
 for(i=0;i<=v;i++)
  {
   printf("arr[%d]=%d ",i,arr1[i]);
  }printf("\n");
 }
}
















