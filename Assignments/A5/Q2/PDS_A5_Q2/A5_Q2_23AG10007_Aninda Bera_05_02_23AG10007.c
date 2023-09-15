# include <stdio.h>
# include <stdlib.h>
int main()
{
  int n,a[50];
  printf("enter the number of random  numbers u want\n");
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    int x=(rand()%40)+10;
    a[i]=x;
  }
  for(int k=0;k<n;k++){
    printf("%d ",a[k]);}
    printf("\n");
  int l=0,v=1;
  for(int j=0;j<n;j++){
    if(j!=l && (j+1)!=v){
      if((a[l]+a[v]+a[j])==60){
	printf("the array indices are:%d %d %d\n",l,v,j);
	printf("the values are:%d %d %d\n",a[l],a[v],a[j]);
      }
    }
    l++;
    v++;
  }
  return 0;
}
