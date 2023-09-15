//Bhumika Goyal
//23MI10014
#include <stdio.h>

int main (){
  unsigned int rn[10];
  float avgcg[10];
  printf("enter roll no.");
  scanf("%u%u%u%u%u%u%u%u%u%u",&rn[0],&rn[1],&rn[2],&rn[3],&rn[4],&rn[5],&rn[6],&rn[7],&rn[8],&rn[9]);
  printf("enter cgpa");
  scanf("%f%f%f%f%f%f%f%f%f%f",&avgcg[0],&avgcg[1],&avgcg[2],&avgcg[3],&avgcg[4],&avgcg[5],&avgcg[6],&avgcg[7],&avgcg[8],&avgcg[9]);

  float avg,sum=0;

    for(int i=0;i<10;i++){
      printf("%u=%f\n",rn[i],avgcg[i]);
    }
    for(int i=0;i<10;i++){
	
	sum=sum+avgcg[i];
	avg=sum/10;

    }
    
    printf("average cgpa of the students is%f\n",avg);

    for (int i=0;i<10;i++){
      for(int j=i+1;j<10;j++){
	if(avgcg[i]==avgcg[j]){
	  printf("roll no. of students whose cgpa are equal are %u,%u\n",rn[i],rn[j]);
	}
      }
    }
      

    
  return 0;
}
