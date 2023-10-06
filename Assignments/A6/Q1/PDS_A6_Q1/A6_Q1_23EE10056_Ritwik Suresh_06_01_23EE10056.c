#include<stdio.h>
#include<stdlib.h>
int arr[100],size;
void fill(int a[])
{
  int i;
  printf("Enter the size of the array(1-100):\n");
  scanf("%d",&size);
  while(size<1||size>100)
    {
      printf("Incorrect value of size\n");
      printf("Re-enter the value of size:\n");
      scanf("%d",&size);
    }
  printf("The array of size %d is:\n",size);
  for(i=0;i<size;i++){
    arr[i] = rand()%900 + 100;
    printf("arr[%d] = %d  ",i,arr[i]);
  }
  printf("\n");
}
void exchange(int a[])
{
  int i,temp;
  printf("\nThe elements of the existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("The elements of the array after exchange:\n");
  if((size-1)%2==0)
    {
      for(i=0;i<(size/2);i++)
	{
	  temp = arr[((size-1)/2)+i+1];
	  arr[((size-1)/2)+i+1] = arr[i];
	  arr[i] = temp;
	}
    }
  else
    {
      for(i=0;i<(size/2);i++)
	{
	  temp = arr[(size/2)+i];
	  arr[(size/2)+i] = arr[i];
	  arr[i] = temp;
	}
    }
  for(i=0;i<size;i++)
    {
      printf("arr[%d]=%d  ",i,arr[i]);
    }
  printf("\n");
}
void rotateright(int a[])
{
  int temp,i;
  printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\nThe array after right rotate is:\n");
  temp = arr[size-1];
  for(i=size-1;i>0;i--)
    arr[i]=arr[i-1];
  arr[0]=temp;
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\n");
}
void rotateleft(int a[])
{
   int temp,i;
  printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\nThe array after left rotate is:\n");
  temp = arr[0];
  for(i=0;i<size-1;i++)
    arr[i]=arr[i+1];
  arr[size-1]=temp;
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\n");
}
void segregate(int a[])
{
  int even[100],odd[100],ecount=0,ocount=0,i,j;
  printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\nThe array after segregation is:\n");
  for(i=0;i<size;i++){
    if(arr[i]%2 == 0){
      even[ecount]=arr[i];
      ecount++;
    }
  }
  for(i=0;i<size;i++){
    if(arr[i]%2 !=0){
      odd[ocount]=arr[i];
      ocount++;
    }
  }
  for(i=0;i<ecount;i++)
    {
      arr[i]=even[i];
      printf("arr[%d]=%d  ",i,arr[i]);
    }
  for(i=ecount;i<(ecount+ocount);i++)
    {
      arr[i]=odd[i-ecount];
       printf("arr[%d]=%d  ",i,arr[i]);
    }
}
void search(int a[]){
  int i,flag=0,ele;
   printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("\nEnter the element to be found:\n");
  scanf("%d",&ele);
  for(i=0;i<size;i++){
    if(arr[i]==ele){
      printf("The element is present at index %d",i);
      flag = 1;
      break;
    }
  }
  if(flag==0)
    printf("Element not found\n");
}
void fold(int a[])
{
  int foldarr[100],i;
   printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("The array after folding:\n");
    printf("[");
  if(size%2==0)
    {
      for(i=0;i< (size/2);i++)
	{
	  foldarr[i] = arr[i]+arr[size-1-i];
	  printf(" %d ",foldarr[i]);
	}
    }
  else{
    for(i=0;i<(size/2);i++)
      {
	foldarr[i]= arr[i]+arr[size-1-i];
	printf(" %d ",foldarr[i]);
      }
    printf(" %d ",arr[size/2]);
  }
  printf("]");
}
void analyze(int a[]){
  int mpos,msize=0,pos,isize=0,seqcount=0,i,j;
    printf("The existing array is:\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d  ",i,arr[i]);
  printf("The increasing sequences are:\n");
  for(i=0;i<size;i++){
    isize=0;
    if(arr[i]<arr[i+1]){
      printf("\n%d %d",arr[i],arr[i+1]);
      isize++;
      seqcount++;
    for(j=i+1;j<size;j++){
      if(arr[j]<arr[j+1]){
	printf(" %d ",arr[j+1]);
	pos=i;
	isize++;
	seqcount++;
      }
    }
    }
    if(isize>msize){
      msize = isize;
      mpos= pos;
    }
  }
  if(seqcount>0){
  printf("The largest sequence of increasing nos. is:\n");
  for(i=mpos;i< (mpos+msize);i++)
    printf(" %d ",arr[i]);
  }
  else
    printf("No increasing sequence of numbers present\n");
}
int main(){
  int n;
  while(1){
    printf("\nMenu choices:\n");
    printf("\t1 --- Fill\n");
    printf("\t2 --- Exchange\n");
    printf("\t3 --- Rotate right\n");
    printf("\t4 --- Rotate left\n");
    printf("\t5 --- Segregate\n");
    printf("\t6 --- Search\n");
    printf("\t7 --- Fold\n");
    printf("\t8 --- Analyze\n");
    printf("\t0,9 or any higher number --- Exit\n");
    printf("\nEnter your choice\n");
    scanf("%d",&n);
    if(n<0)
      return 0;
    switch(n){
    case 1: fill(arr);
      break; 
    case 2: exchange(arr);
       break;
    case 3: rotateright(arr);
       break;
    case 4: rotateleft(arr);
       break;
    case 5: segregate(arr);
       break;
    case 6: search(arr);
       break;
    case 7: fold(arr);
       break;
    case 8: analyze(arr);
       break;
    default: return 0;
    }
  }
  return 0;
}
      

    
    

    
    
  
     
      
   
      
  
