/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */
  #include<stdio.h>
  #define max 20
  
//defining structure
  typedef struct students{
          char f_n[max];
          char l_n[max];
          char gender[5];
          float marks;
      } student;

  int main(){
      //taking inputs
      printf("Enter the number of students:");
      int n,i;
      scanf("%d",&n);
      student s[n];
      printf("\nEnter the student details:\n");
      for(i=0;i<n;i++){
          scanf("%s %s %s",s[i].f_n,s[i].l_n,s[i].gender);
          scanf("%f",&s[i].marks);
          getchar();
      }
      printf("\n\nPrinting the student records..\n\n");
      for(i=0;i<n;i++){
          printf("%s %s %s - %.2f\n",s[i].f_n,s[i].l_n,s[i].gender,s[i].marks);
      }
      float m=0;//max marks
      int t;//index of max marks
      for(i=0;i<n;i++){
          if(s[i].marks>m){
              m = s[i].marks;
              t = i;  
          }
      }
      //best student(max marks)
      printf("The best %s student: %s %s",s[t].gender,s[t].f_n,s[t].l_n);
      return 0;  
  }