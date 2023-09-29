//ROll No.-23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>

int main () {
  int s, n;

  int num=1;        //number to be printed

  printf("Enter scale factor\n");
  scanf("%d",&s);
  printf("Enter the number of lines\n");
  scanf("%d",&n);

  printf("\n");

  if (((s>=1)&&(s<=6)) && ((n>=1)&&(n<=10))) {   

    for (int i=1; i<=n; i++) {        //Number of lines
      for (int j=1; j<=i; j++) {      //Number of values printed on that line
	printf("%d ", num);
	num++;                                 
	if (num>3+s) {
	  num=1;                       //if number exceeds limit, it gets reset to 1
	}
      }
      printf("\n");
    }

  }

  else {
    printf("wrong inputs!!\n");           //in case of incorrect input
  }

  return 0;
}
	
