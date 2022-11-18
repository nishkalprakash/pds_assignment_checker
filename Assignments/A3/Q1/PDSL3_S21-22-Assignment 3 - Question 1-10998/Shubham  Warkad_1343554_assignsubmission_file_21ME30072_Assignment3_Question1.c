// Name:-Shubham Gajanan Warkad
// Roll No.-21ME30072
// Lab assignment 3     Question 1
#include<stdio.h>
int strlen(char pass[]){
    int i=0,count=0;
    while(pass[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int digit(char pass[]){
    int i=0,count=0;
    while(pass[i]!='\0'){
        if (pass[i] >= '0' && pass[i] <= '9') {
            count++;
            i++;
        }
        else{
            i++;
        }
    }
    if(count>5){
        return 0;
    }
    else{
        return 1;
    }
}


int main()
{
  char pass[20];
  char user[20];
  int i, p,check1=0;
  int count1 = 0, count2 = 0, x, y, check2,check3,check4;
  printf("Enter Username:");
  scanf("%s",user);
  printf("Enter a password: ");
  scanf("%s",pass);

  while (pass[count1] != '\0')
        count1++;
    while (user[count2] != '\0')
        count2++;
    for (x = 0; x <= count1 - count2; x++)
    {
        for (y = x; y < x + count2; y++)
        {
            check2 = 1;
            if (pass[y] != user[y - x])
            {
                check2 = 0;
                break;
            }
        }
        if (check2 == 1)
            break;
    }
  
  if(strlen(pass)>=8&&strlen(pass)<=15)
  {
     int lower_case_count = 0;
     int upper_case_count = 0;
     int digit_count = 0;
     int char_count=0;
     p=strlen(pass);
     for (i = 0; i < p; i++) {
          if (pass[i] >= 'a' && pass[i] <= 'z') ++lower_case_count;
          if (pass[i] >= 'A' && pass[i] <= 'Z') ++upper_case_count;
          if (pass[i] >= '0' && pass[i] <= '9') ++digit_count;
          if (pass[i]=='$'||pass[i]=='*'||pass[i]=='+'||pass[i]=='/'||pass[i]=='#'||pass[i]=='@'||pass[i]=='<'||pass[i]=='>'||pass[i]=='?'||pass[i]=='_'||pass[i]=='!') ++char_count;
     }    
     if (lower_case_count > 0 && upper_case_count > 0 && digit_count > 0 && char_count>=2) {
          check1=1;
     }
 }  
 check3=digit(pass);
 int rep=1;
    for(int i=0;i<strlen(pass);i++)
    {
        for(int j=i+1;j<(strlen(pass))-1;j++)
        {
            if(pass[i]==pass[j])
            rep++;
        }
        if(rep>5)
        {
           check4=0;
        }
        check4=1;
    }
 if (check1==1 &&check2==0&&check3==1&&check4==1){
     printf("Acceptable password.");
 }
 else{
     printf("Not acceptable password.");
}

 return 0;
}
