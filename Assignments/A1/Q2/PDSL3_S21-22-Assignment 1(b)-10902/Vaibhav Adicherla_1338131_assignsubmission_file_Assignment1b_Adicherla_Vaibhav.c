/*name: Adicherla Vaibhav
  rollno: 21BT10002
  Department: Biotechnology and Biochemistry Btech
  package: code blocks
  OS: windows*/

  #include<stdio.h>
  int main ()
  {
     int abc, cba;
     printf("Enter a 3-digit number:");
     scanf("%d",&abc);
        printf("reverse number:");
     cba = abc%10;
        printf("%d",cba);
     cba=(abc/10)%10;

     printf("%d", cba);
     cba= abc/100;
     printf("%d", cba);

     return 0;

  }
