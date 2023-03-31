#include<stdio.h>
int main()
{
    int n;
  float p,q,r,s,i;
  double total;
  printf("enter the no. of students-\n");
  scanf("%d",&n);//here enter the no. of students
  for( int a=1;a<=n;a++)
  { printf("for student-%d\n",a);
  if(n>0&&n<10)
  {printf("enter the marks in Attendance-");
  scanf("%f",&p);//marks of attendance
    while((p>40||p<0)){
    printf("wrong input\n please enter the marks in range ");
    scanf("%f",&p);
    }
  printf("enter the marks in class test-");
  scanf("%f",&q);//marks in class test
 while((q>20||q<0)){
    printf("wrong input\n please enter the marks in range ");
    scanf("%f",&q);
    }

  printf("enter the marks in mid-sem-");
  scanf("%f",&r);//marks in mid sem
   while((r>60||r<0)){
    printf("wrong input\n please enter the marks in range ");
    scanf("%f",&r);
    }


  printf("enter the marks in end-sem-");
  scanf("%f",&s);//marks in end sem
   while((s>100||s<0)){
    printf("wrong input\n please enter the marks in range ");
    scanf("%d",&s);
    }

  }

  total=(p/40.0)*10+(q/20.0)*20+(r/60.0)*30+(s/100.0)*40;
  printf("%f\n",total);//total marks which are printed

  if(total>=90)//grades are given accordingly the marks obtained by the student
  {
      printf("EX\n");
  }
  if((total>=80)&&(total<90))
  {
      printf("A\n");
  }
  if((total>=70)&&(total<80))
  {
      printf("B\n");
  }
if((total>=60)&&(total<70))
  {
      printf("C\n");
  }
if((total>50)&&(total<60))
  {
      printf("D\n");
  }
if((total>=35)&&(total<50))
  {
      printf("P\n");
  }
if((total<35))
  {
      printf("F\n");
  }
  }


  return 0;


}
