#include<stdio.h>
/*sec-2
  rollno.-22im10009
  Name-Ansh kakkar
  ques no.1
  */
  int main()
  {   int cs;
      char r;
      while(1)
      {   printf("enter the set of characters\n");
          scanf("%c",&r);
          if(r="\n")//the set of letters can be entered untill enter is typed
            break;

      }
       while(1)
       {
           if((r!="$"||r!="#"||r!="&"||r!="%"||r!="@"))
            {printf("wrong input\n password must have  one special character");}
            if(r!=1||r!=2||r!=3||r!=4||r!=5||r!=6||r!=7||r!=8||r!=9||r!=0)
           {
             printf("wrong input \n password must have atleast one digit");
           }


       }









      return 0;
  }

