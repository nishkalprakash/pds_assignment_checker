//Roll No: 23NA30028
//Name: Ritvik Puvvada

#include <stdio.h>
#include <stdlib.h>

int main(){
  int r[20],a[20],m[20],i,j,n;
  for(i=0;i<20;i++){
    r[i]= rand()%1000+1001;
    a[i]= rand()%15+11;
    m[i]=rand()%101;
  }
  for(i=0;i<20;i++){
    printf("Roll:%d Age:%d Mark:%d\n",r[i],a[i],m[i]);
  }
  printf("check\n");
  for(i=0;i<20;i++){
    for(i=j+1;j<20;j++){
      if(m[i]==m[j]){
	printf("Roll:%d Age:%d Mark:%d\n",r[j],a[j],m[j]);
      }
    }
  }
  return 0;
}
