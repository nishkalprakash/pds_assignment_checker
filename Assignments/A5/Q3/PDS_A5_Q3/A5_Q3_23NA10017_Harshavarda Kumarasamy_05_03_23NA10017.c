//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{unsigned int Rn[9];
  int  i, n, a, x, y;
  float Cg[9], sum=0, avg;

  printf("Enter number of students:\n");
  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
     printf("Input Roll number of student %d: ", i+1);
     scanf("%d", &Rn[i]);
     printf("Input CGPA of student %d: ", i+1);
     scanf("%f", &Cg[i]);
    }

  a=0;

  while(a<n){
    sum += Cg[a];
    a++;
      }
  avg=sum/n;

  a=0;

  while(a<n)
    {printf("Student %d: Roll no:%d, CGPA=%f\n", a+1, Rn[a], Cg[a]);
      a++;
    }

  printf("Average CGPA is %f\n",avg);
  
  for(x=0; x<n; x++){
    for(y=x+1; y<n; y++){
      if((Cg[x]-Cg[y])<0.01 || (Cg[y]-Cg[x])<0.01){
	  printf("Roll numbers %d and %d have similar CGPA.", Rn[x], Rn[y]);
      }
    }
 }

return 0;
}
