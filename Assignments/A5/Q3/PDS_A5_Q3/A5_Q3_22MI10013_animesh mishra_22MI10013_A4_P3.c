
/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:5
discription : game
*/
#include<stdio.h>
int main() {
    int i,num=64,flag=1,guess,count=0;
    printf("guess the number randomly");
    scanf("%d", &guess);
    do  {
        if(num==guess)  {
          flag=0;
     }  else if(guess<num)  {
          flag=1;
          printf("your guess is too small");
          count++;
  }   else {
      flag=1;
      printf("your guess is too big");
      count++;
     }
     if(flag==1) {
       printf("sorry wrong enter try once more ");
       scanf("%d",&guess);
     }
  } while(flag);
   printf("congrates winner. %d", num);
   printf("total number of trails is:%d" , count);
}
