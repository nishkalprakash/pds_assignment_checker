\\dhritish mondal
\\23ec30016
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[100];
  int n,size;

  while(1)
  {
  printf("Enter the size : ");
  scanf("%d",&n);

 switch(menu);
     case 1: printf(" Fill ");
    break;
     case 2: printf("exchange ");
    break;
     case 3: printf("rotate right");
    break;
     case 4: printf("rotate left");
    break;
     case 5: printf("segragate");
    break;
     case 6: printf("search");
    break;
     case 7: printf("fold");
    break;
     case 8: printf("analyze");
    break;
     case : break;
    break;
  }
  return 0;
}
void fill(){
  int i;
printf("enter the size of the array",i);
scanf("%d",&i)
for (i=0;i<n;i++){
arr[i]=rand()%91+1;
 printf(" random numbers between 1-100 : %d", arr[i]);
   }
}
void exchange(){
  int n,i,j,arr[k]
  for(i=0;i<=n;i++)
    for(j=0;j<=n;j++){
      printf("exchange of array",i,j);
    }
}
void rotate_right(){
  int i,j,n,temp=0;
  for(i=0;i<=size;i++){
    for(j=0;j<=size;j++)
      arr[n-j]=arr[n-1-j];
       arr[n-1-j]=temp;
      printf("rotate right :%d",);
  }
}
void rotate_left(){
  int i,j,n,temp=0;
  for(i=0;i<=size;i++){
    for(j=0;j<=size;j++)
      arr[n-j]=arr[n-j+1]
       arr[n-j+1]=temp;
      printf("rotate left :%d",);
  }
}
void segragate(){
  int i,j,k,n,size;
  for(i=0;i<=n;i++)
  if(i%2==0)
    printf(" %d",arr[j]);
  int even_count++;
  if(i%2!=0)
    printf("%d", arr[k]);
  int odd_count++;
  printf("%d %d", arr[j],arr[k]);
}
void fold(){
  int i,j,k;
  for(i=0;i<=n;i++)
    for(j=0;j<=n;j--)
      arr[k]=arr[i]+arr[j];
  printf(" %d", arr[k]);
}

