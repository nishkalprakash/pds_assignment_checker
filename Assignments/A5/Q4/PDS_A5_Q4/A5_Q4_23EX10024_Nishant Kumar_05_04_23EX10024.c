//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int temp,temp1,temp2, i,m,n,p,q,s,k,z,t,r[20],age[20],marks[20];
  for(i=0;i<20;i++){
    printf("Roll:%d Age:%d Marks:%d\n",r[i]= 1000+ rand()%1001, age[i]= 15 + rand()%11, marks[i]= rand()%101);
  }
  printf("The students having same age are\n");
  for(p=0;p<19;p++){
    for(q=p+1;q<20;q++){
      if(age[p]==age[q]){
	printf("Roll:%d Age:%d Marks:%d\n", r[p],age[p],marks[p]);
	printf("Roll:%d Age:%d Marks:%d\n", r[q],age[q],marks[q]);
      }
    }
  }
  printf("The students having same marks are:\n");
  for(m=0;m<19;m++){
    for(n=m+1;n<20;n++){
      if(marks[m]==marks[n]){
	printf("Roll:%d Age:%d Marks:%d\n", r[m],age[m],marks[m]);
	printf("Roll:%d Age:%d Marks:%d\n",r[n],age[n],marks[n]);
      }
    }
  }
  for(s=0;s<999999;s++){
  for(k=0;k<19;k++){
    if(r[k]>r[k+1]){
      temp = r[k];
      temp1= marks[k];
      temp2= age [k];
      r[k]=r[k+1];
      r[k+1]=temp;
      marks[k]=marks[k+1];
      marks[k+1]=temp1;
      age[k]=age[k+1];
      age[k+1]=temp2;
      
    }
  }
  }
  printf("The sorted list is:\n");
  for(t=0;t<20;t++){
    printf("Roll:%d Age:%d Marks:%d\n",r[t],age[t],marks[t]);
  }
  return 0;
}
       
      
   
      
