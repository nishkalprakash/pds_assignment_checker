# include <stdio.h>
void binarr (int arr[],int N,int bins)[
int max=arr[0];min=arr[0];
for(int i=1;i<=N;i=i+1){
if(max<arr[i])
max=arr[i];
else if (min >arr[i]) min=arr[i];}// array contain elements in the range of (min,max)
int size=(max-min +1)/bins;
int a=min+size-1;
for (int i=1;i<=bins;i=i+1){
int b=0;
printf("\n bin %d=");
 for(int j=0;j<N;j=j+1){
  if(min+(i-1)*size)<=arr[j]<=(i*size)){
  b=b+1;
  printf("%d"arr[j]);}
  }
  printf(" elements=%d",b);

}
int main(){
int N;
printf("N=%d\n",&N);
int a[N];
int b[n];
printf("\n a[N]=");
scanf("%d",&N);
for(int i=1;i<=N;i=i+1){
scanf("%d",&a[i]);
}
printf("\n Bins=");
scanf("%d",$bin);
binarr(a,n,bin);
return 0;
}
