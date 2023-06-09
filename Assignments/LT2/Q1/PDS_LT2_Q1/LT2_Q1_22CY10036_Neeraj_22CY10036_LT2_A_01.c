/*
Name = Neeraj
Roll No = 22CY10036
*/#include<stdio.h>
float mean(int*a, int n){
float p = *a;
  float m = p/n;
  return m;


}
int main(){
    int n;

    scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
printf("List = [");
for(int i=0;i<n;i++){
printf("%d, ",arr[i]);
}
printf("]");
if (n==1){
        printf("List = [%d]",arr[0]);
        printf("Mean = %d",arr[0]);
        return 0;
    }
 {
int i,L1,L2,s1 = 0,s2 = 0;
for( i=0;i<(n/2);i++){

L1 = arr[i];

s1 = s1+L1;

}

int p;
p = n/2;
if(n%2==0){
    p = (n/2)-1;
}
else
    p= n/2;
for( i=n-1;i>p;i--){

 L2 = arr[i];

s2 = s2+L2;
}

float u1 = mean(&s1,n/2);

float u2 = mean(&s2,n/2);
float x = (u1+u2)/2;
printf("\nMean = %f",x);

}}
