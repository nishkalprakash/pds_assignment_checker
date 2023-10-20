//Name:<Harshavarda Kumarasamy
//Roll No:<23NA10017>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void create(char ***sptr, int *n ){
  int s, i, j,k;char str[25];
  printf("How many words will you enter\n");
  scanf("%d", &(*n));
  *sptr=(char **)malloc((*n)*sizeof(char*));
  for(i=0;i<(*n);i++){
       scanf("%s",  str);
       j=strlen(str);
       (*sptr)[i]=(char*)malloc(j*sizeof(char));
      for(k=0;k<j;k++){
	(*sptr)[i][k]=str[k];
      }
  }
  for(i=0;i<(*n);i++){
    printf("%s\n", (*sptr)[i]);
  }
  return;
}

void lengthStat(char **sptr,int n){
  int x=0,y=0,z=0, j=0, i=0;
  for(i=0;i<(n+1);i++){
    j=strlen(sptr[i]);
    if(j<=2){x++;}
    else if(j<=3){y++;}
    else {z++;}}
  printf("1-2:%d\n", x);
  printf("3-5:%d\n", y);
  printf("Above 5:%d\n", z);
  return;
}
/*
void (char **sptr,int n ){
  int x,y,z, j=0, i=0;
  for(i=0;i<n;i++){
    if(sptr[i]){x++;}
    else if(j<=4){y++;}
    else {z++;}}
  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", z);
  return;
}
*/
int main()
{char **sptr;
  int n, k;
   while(1){
  printf("Enter a number between 1 and 7:\n");
  while(1){
    scanf("%d", &n);
    if(1<=n<=7) break;
  }
  switch(n){
  case 1:create(&sptr,&k);
    break;
    case 2:lengthStat(sptr,n);
      break;
    //se 3:
    //ase 4:
    //ase 5:
    //se 6:
    //ase 7:
  case 0:return 0;
  }
}
}
    
