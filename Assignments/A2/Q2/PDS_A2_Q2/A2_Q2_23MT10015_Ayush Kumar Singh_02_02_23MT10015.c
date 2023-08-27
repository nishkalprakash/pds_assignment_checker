//NAME: AYUSH KUAMR SINGH
// Roll No.: 23MT10015
#include <stdio.h>
int main(){
  int age;
  scanf("%d", &age);
  int years= age/12;
  if(age%12==0){
    
    printf("The person is %d years old",years);
      }else {
    printf("The person is %d years old", years+1);
  }
  
  return 0;
}
