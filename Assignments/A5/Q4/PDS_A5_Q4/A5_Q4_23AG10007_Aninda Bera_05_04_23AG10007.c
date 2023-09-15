# include <stdio.h>
# include <stdlib.h>
int main()
{
  int a[20],b[20],c[20],age=0,roll=0,marks=0;
  for(int i=0;i<20;i++)
    {
      roll=(rand()%1001)+1000;
      a[i]=roll;
      age=(rand()%11)+15;
      b[i]=age;
      marks=rand()%101;
      c[i]=marks;
    }
  for(int k=0;k<20;k++){
    printf("roll:%d age:%d marks:%d",a[k],b[k],c[k]);
    printf("\n");}
  int l=0,count=0;
  for(int j=0;j<20;j++)
    {
      if(j!=l){
	if(b[l]==b[j]){
	  count++;
	  if(count<2){
	    printf("roll:%d age:%d marks:%d \n",a[l],b[l],c[l]);
	    printf("roll:%d age:%d marks:%d \n",a[j],b[j],c[j]);
	  }
	  else{
	    printf("roll:%d age:%d marks:%d \n",a[j],b[j],c[j]);}
	}
      }
    }
  l++;
  return 0;
}
      
