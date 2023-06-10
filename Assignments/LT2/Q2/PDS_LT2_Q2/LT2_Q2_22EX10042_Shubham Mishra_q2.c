    /*shubham mishra
    22EX10042
    section 2
    lab test 2
    q2 sol:*/

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    struct record{
        char rollno[11];
        char branch[3];

    };
    struct dob{
           int dd;
           int mm;
           int yy;
        };
    int main(){
    int n;
     printf("enter the no of records to store\n");
     scanf("%d",&n);
     if(n>100)
     {
         printf("invalid value of n");

     }
     else{
     struct record *ptr1;
     ptr1=(struct record*)malloc(n*sizeof(struct record));
     struct dob *ptr2;
     ptr2=(struct dob*)malloc(n*sizeof(struct dob));
     for(int i=0;i<n;i++)
     {
         int j=0,k=0;
         printf("enter the rollno\n");
         scanf("%s",&ptr1[i].rollno);

         printf("enter the branch\n");
        scanf("%s",&ptr1[i].branch);

         printf("enter the dob\n");
         scanf("%d/",&(ptr2[i].dd));
          scanf("%d/",&(ptr2[i].mm));
           scanf("%d",&(ptr2[i].yy));

     }
     for(int i=0;i<n;i++)
     {
         printf("%s",(ptr1[i].rollno));
          printf(" %s",(ptr1[i].branch));
          printf(" %d/",ptr2[i].dd);
          printf("%d/",ptr2[i].mm);
           printf("%d\n",ptr2[i].yy);

     }
     int y;
     printf("enter the year");
     scanf("%d",y);
     int m=0;

     for(int i=0;i<n;i++)
     {
         if(ptr2[i].yy<y)
         {
             m++;
             printf("DELETED RECORD:\n");
              printf("\n%s",(ptr1[i].rollno));
          printf(" %s",(ptr1[i].branch));
          printf(" %d/",ptr2[i].dd);
          printf("%d/",ptr2[i].mm);
           printf("%d",ptr2[i].yy);
           printf("\n");




         }

     }





  }
}
