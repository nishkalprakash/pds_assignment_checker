// swarup jayaram dhanavade
// 23MI10052

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,rollnum[10];
  float CGPA[10],sum=0;
  printf("Enter number of studets (maximum 10):");
  scanf("%d",&n);

  for (int i=0;i<n;i++){
    printf("Roll Number :");
    scanf("%d",&rollnum[i]);
    printf("Enter CGPA (upto 2 decimal place):");
    scanf("%f",&CGPA[i]);
  }
  for (int i=0;i<n;i++){
    printf("\n Roll Number = %d   CGPA = %f\n",rollnum[i],CGPA[i]);
    sum = sum + CGPA[i];
     }
    printf("Average CGPA = %f\n",sum/n);
    for(int i=0 ;i<n;i++){
      for (int j=0;j<n;j++){
	if(CGPA[i]==CGPA[j] && i!=j) printf(" rollnum:%d & rollnum:%d are having same grade ,which is = %f\n",rollnum[i],rollnum[j],CGPA[i]);   
      }
    }
    
    

    return 0;
    
    
}
