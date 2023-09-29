//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int s, n, i, j, k;
  k=1;

  while(1){
    //Values of s and n must be within specified range, if not re-entry will be asked.//
  printf("Enter scale factor:");
  scanf("%d", &s);
  printf("Enter number of lines:");
  scanf("%d", &n);
  if(s>=1 && s<=6 && n>=1 && n<=10) break;
  else printf("Invalid input. Please enter again.\n");
  }
  //j will be used to control number of digits in a line. k will be used to print value between 1 to 3+s//
  for(i=1;i<=n;i++){
    //Number of digits in a line must not be more than the number of the line//
    j=0;
    while(j<i){
      //Once k exceeds the value of 3+s, it must go back to 1// 
      if(k<=3+s){
	printf("%d", k);
	k++;
      }
      else{
	k=1;
	printf("%d", k);
	k++;
      }
      j++;
    }
    printf("\n");
  }
  return 0;
}

  

