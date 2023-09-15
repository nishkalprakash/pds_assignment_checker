// Name - Anshuman Acharya
// Roll No. - 23CH10006.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  //Roll no and cgpa
  int n, i, j, flag = 0, num, store1;
  const int maxi = 10;
  unsigned int roll[maxi];
  float cg[maxi], sum = 0;
  printf("Enter the number of elements in your array: ");
  scanf("%d", &n);
  printf("Roll no.  CGPA\n");
    for(i = 0;i < n;i++){
      scanf("%d %f",&roll[i], &cg[i]);
    }
    for(i = 0;i < n;i++){
      printf("roll no.: %d CGPA:  %.2f\n",roll[i], cg[i]);                     //Nicely formatting
    }
    
    printf("\n");

    for(i = 0;i < n;i++){
      sum += cg[i];
    }
    printf("The average CGPA is %.2f\n",sum/n);                               //CGPA computed and printed

    printf("\n");

    //Checking same cgpa

    for(i = 0;i < n;i++){
      for(j = 0;j < i;j++){
	if(cg[i] == cg[j]){
	  store1 = cg[i];
	  num = roll[i];
	  flag = 1;
	}
      }
      if(flag == 1){
	printf("Roll no.: %d CGPA: %.2f\n",num,store1);
      
  return 0;
}
