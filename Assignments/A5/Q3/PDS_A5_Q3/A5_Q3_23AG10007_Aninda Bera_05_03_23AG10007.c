# include <stdio.h>
int main()
{
  int n,r[10];float a[10],b=0;
  printf("enter the no of students data u want\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("enter the roll number\n");
    scanf("%d",&r[i]);
    printf("enter the cgpa\n");
    scanf("%f",&a[i]);
  }
  for(int j=0;j<n;j++){
    printf("the roll number is:\n");
    printf("%d\n",r[j]);
    printf("the cgpa is:\n");
    printf("%f\n",a[j]);
  }
  for(int k=0;k<n;k++){
    b=b+a[k];
  }
  float average= (float)(b/n) ;
  printf("the average is:%f\n",average);
  int l=0,count=0;
    for(int m=1;m<n;m++){
      if((int)(a[l]*100)==(int)(a[m]*100)){
	count++;
	if(count<2){
	  printf("the identical roll no is:%d\n",r[l]);
	  printf("the identical cgpa is:%f\n",a[l]);
	  printf("the identical roll no is:%d\n",r[m]);
	  printf("the identical cgpa is:%f\n",a[m]);
	}
	else{
	  printf("the identical roll no is:%d\n",r[m]);
	  printf("the identical cgpa is:%f\n",a[m]);
	}
      }
    }
return 0;
}
    
  
