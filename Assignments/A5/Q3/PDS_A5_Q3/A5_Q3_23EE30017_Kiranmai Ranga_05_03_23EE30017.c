//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  unsigned int roll_no[10];
  float cgpa[10];
  int n,i,sum=0,a,b;
  float avg_cgpa;
  printf("Enter the no of students(max 10)\n");
  scanf("%d", &n);
  for(i=0;i<n;i++) {
    printf("Enter the roll no:\n");
    scanf("%d" , &roll_no[i]);
    printf("Roll no:%d\n",roll_no[i]);
    printf("Enter the cgpa:\n");
    scanf("%f" , &cgpa[i]);
    printf("cgpa=%f\n",cgpa[i]);
    sum+=cgpa[i];
  }
  for(i=0;i<n;i++) {
    printf("Roll no:%d  cgpa:%f\n",roll_no[i],cgpa[i]);
  }
  avg_cgpa=(float)sum/n;
  printf("The avg cgpa of the students=%f\n",avg_cgpa);
  for(a=0;a<n-1;a++) {
    for(b=a+1;b<n;b++) {
      if(cgpa[a]==cgpa[b]) {
      printf("The roll no of the students having identical cgpa %f are:\nroll no:%d\nroll no:%d\n",cgpa[a],roll_no[a],roll_no[b]);
      }
    }
  }
  return 0;
}
