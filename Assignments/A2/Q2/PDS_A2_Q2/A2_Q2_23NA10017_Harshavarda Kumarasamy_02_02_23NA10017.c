//Roll No:<23NA10017>//
//Name:<Harshavarda Kumarasamy>//
#include <stdio.h>

int main()
{
  int ageMonth; int ageYear;
  scanf("%d", &ageMonth);
  ageYear=ageMonth / 12;

  if(ageMonth %12 == 0){
    printf("The person is %d years old", ageYear);
  }
  else{
    printf("The person is %d years old", ageYear+1);
  }
  return 0;
}
