#include<stdio.h>
int main(){
  int roln[10];
  float cgpa[10];
  int n,i;
  printf("enter the number of such students:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter roll no and cgpa  ");
    scanf("%d ",&roln[i]) ;
    scanf(" %f",&cgpa[i]) ;
  }
  for(i=0;i<n;i++){
       printf("roll no:%d cgpa:%f",roln[i],cgpa[i]);
       printf("\n");
     }
     //average cgpa
  float sum=0.0;
  for(i=0;i<n;i++){
	sum=sum+cgpa[i];
      }
      float average=(sum/n);
      printf("\n average of cgpa of students:%f",average);
      //part 3
      for(i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
	   if(cgpa[i]==cgpa[j]){
	     printf("roll no:%d cgpa:%f",roln[i],cgpa[i]);
	     printf("\n");
	   }
	 
	 else break;
       }
       }
       return 0;
}
