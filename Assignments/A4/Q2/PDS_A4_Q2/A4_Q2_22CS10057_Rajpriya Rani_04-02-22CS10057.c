/*Name= Rajpriya Rani
 Sec-2
 Roll number- 22CS10057
 Assignment-2
 Description-program to print grade
 */
 #include <stdio.h>
 void main()
 {
     int m1,m2,m3,m4,n,i=0;
     double marks;
     printf("Enter the number of students");
     scanf("%d",&n);
     while(i<n)
     {
         i++;
         printf("\n Enter marks in attendance out of 40: ");
         scanf("%d",&m1);
         printf("\n Enter marks in class test out of 20: ");
         scanf("%d",&m2);
         printf("\n Enter marks in mid sems out of 60: ");
         scanf("%d",&m3);
         printf("\n Enter marks in endsems out of 100: ");
         scanf("%d",&m4);

         //condition of marks should be correct for further procedure
         if((0<=m1<=40)&&(0<=m2<=20)&&(0<=m3<=60)&&(0<=m4<=100))
         {
             marks=(0.25*m1) + (m2) +(0.5*m3)+ (0.4*m4);     //calculation of marks
             if(marks>=90)
                printf("EX");
             else if(marks>=80)
                printf("A");
             else if(marks>=70)
                printf("B");
             else if(marks>=60)
                printf("C");
            else if(marks>=50)
                printf("D");
            else if(marks>=35)
                printf("E");
            else
                printf("F");

            // Above is the code for display of grades

        }
        else
            printf("invalid marks");
     }
 }
