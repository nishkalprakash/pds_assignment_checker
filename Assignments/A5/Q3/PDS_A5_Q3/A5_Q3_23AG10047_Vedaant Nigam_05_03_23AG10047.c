#include <stdio.h>
int main(){
  int roll[10];
  float cg[10];
  int i, n;
  printf("enter number of students\n");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++){printf("enter roll no of student %d ",i+1);
    scanf("%d",&roll[i]);
    printf("\nenter CGPA of student %d ",i+1);
      scanf("%f",&cg[i]);
  }
  printf("\n");
  for(i=0;i<=n-1;i++){printf("roll no: %d and CGPA: %f \n",roll[i],cg[i]);}
  float sum=0,avg;
  int m;
  for(i=0;i<=n-1;i++){sum=sum+cg[i];}
  printf("\n average CGPA =%.2f\n",sum/n);
  int j;
  float temp[10];
  for(i=0;i<=n-1;i++){temp[i]=cg[i];
    for(m=0;m<i;m++){if(temp[m]==cg[i])continue;}



    for(j=i;j<=n-1;j++){if(((int) cg[j]*100)==((int) cg[i]*100)){printf(" roll no.=%d and cgpa=%f\n",roll[j],cg[j]);}
	else continue;
      
     
    }
    i=j;
  }
  return 0;
}
