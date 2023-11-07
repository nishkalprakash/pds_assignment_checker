// Name :pramod kumar
//roll no:23PH10032
  
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char first_name[20];
	char last_name[20];
  	char address[40];
	unsigned int mobile_num;
	char grades[5];
	float gpa;
	};
	struct student studArray[50];
	int nstuds;
void enrolstuds()
{
	printf("enter the number of students:\n");
	scanf("%d",&nstuds);
	for(int i=0;i<nstuds;i++)
	{ printf("enter the detail of roll no (%d) student\n",i+1);
	  printf("first name: ");
          scanf("%s",&studArray[i].first_name);
	  printf("\nlast name: ");
          scanf("%s",&studArray[i].last_name);
	  printf("\naddress ");
          scanf("%s",&studArray[i].address);
	  printf("\nmobile number: ");
          scanf("%u",&studArray[i].mobile_num);
	}
        
         for(int i=0;i<nstuds;i++)
        { printf("roll no (%d) student details:\n",i+1);
	  printf("%s\n",studArray[i].first_name);
	  printf("%s\n",studArray[i].last_name);
          printf("%s\n",studArray[i].address);
	  printf("%u\n",studArray[i].mobile_num);
	  
	}
         return;
}

void entergrades()
{
	 for(int i=0;i<nstuds;i++)
   {      int sum=0;
          printf("roll number=%d\n",i+1);
          printf("%s\n",studArray[i].first_name);
	  printf("%s\n",studArray[i].last_name);
          printf("enter the grades in five subjecta\n");
         for(int j=0;j<5;j++)
      {  
          scanf(" %c",&studArray[i].grades[j]);
          while(studArray[i].grades[j]!='A'&&studArray[i].grades[j]!='B'&&studArray[i].grades[j]!='C'&&studArray[i].grades[j]!='E'&&studArray[i].grades[j]!='P'&&studArray[i].grades[j]!='D'&&studArray[i].grades[j]!='F')
       {
         printf("your input grade is not valid enter again valid grads\n");
         scanf(" %c",&studArray[i].grades[j]);
       }
       
        switch(studArray[i].grades[j])
      {
        case 'A': sum+=9;
		break;
	case 'B': sum+=8;
		break;
	case 'C': sum+=7;
		break;
	case 'D': sum+=6;
		break;
	case 'E': sum+=10;
		break;
	case 'F': sum+=0;
		break;
	case 'P': sum+=5;
		break;
      }
      
     }
	studArray[i].gpa=sum/5.0;
  
  }     
        printf("detail of all students\n");
	for(int i=0;i<nstuds;i++)
       {
	 printf("roll no=%d\n",i+1);
	 printf("%s\n",studArray[i].first_name);
	 printf("%s\n",studArray[i].last_name);
         printf("%s\n",studArray[i].address);
	 printf("%u\n",studArray[i].mobile_num);
	 printf("gpa=%f\n",studArray[i].gpa);
	}
         return;
}

void displaystuds()
{     printf("student details alphabatic order bassed on first and last:\n");
	for(int i=0;i<nstuds;i++)
      {
         for(int j=i+1;j<nstuds;j++)
	{
	  if(strcmp(studArray[i].first_name,studArray[j].first_name)>0)
	 { char str1[20];
	   strcpy(str1,studArray[i].first_name);
           strcpy(studArray[i].first_name,studArray[j].first_name);
           strcpy(studArray[j].first_name,str1);
           char str2[20];
           strcpy(str2,studArray[i].last_name);
           strcpy(studArray[i].last_name,studArray[j].last_name);
           strcpy(studArray[j].last_name,str2);
           char str3[20];
	   strcpy(str3,studArray[i].address);
           strcpy(studArray[i].address,studArray[j].address);
           strcpy(studArray[j].address,str3);
           unsigned int k;
	   k=studArray[i].mobile_num;
           studArray[i].mobile_num=studArray[j].mobile_num;	 	 
           studArray[j].mobile_num=k;
	   float w;	 
           w=studArray[i].gpa;
           studArray[i].gpa=studArray[j].gpa;	 	 
           studArray[j].gpa=w;
         }
         
	 if(strcmp(studArray[i].first_name,studArray[j].first_name)==0)
       { if(strcmp(studArray[i].last_name,studArray[j].last_name)>0)
         {
           char str4[20];
	   strcpy(str4,studArray[i].first_name);
           strcpy(studArray[i].first_name,studArray[j].first_name);
           strcpy(studArray[j].first_name,str4);
           char str5[20];
           strcpy(str5,studArray[i].last_name);
           strcpy(studArray[i].last_name,studArray[j].last_name);
           strcpy(studArray[j].last_name,str5);
           char str6[20];
	   strcpy(str6,studArray[i].address);
           strcpy(studArray[i].address,studArray[j].address);
           strcpy(studArray[j].address,str6);
           unsigned int m;
	   m=studArray[i].mobile_num;
           studArray[i].mobile_num=studArray[j].mobile_num;	 	 
           studArray[j].mobile_num=m;
	   float l;	 
           l=studArray[i].gpa;
           studArray[i].gpa=studArray[j].gpa;	 	 
           studArray[j].gpa=l;
          }
        }
       }
      }
         for(int i=0;i<nstuds;i++)
        {
         printf("%s\n",studArray[i].first_name);
	 printf("%s\n",studArray[i].last_name);
         printf("%s\n",studArray[i].address);
	 printf("%u\n",studArray[i].mobile_num);
	 printf("gpa=%f\n",studArray[i].gpa);
        }
        return;
}
int main()
{ 	 int n;
         while(1){
 	 printf("enter a number\nn->1 enroll student\nn->2 enter gread\nn->3 Display student\nn->4 search student\nn->5 edit student greads\nn->6 modify student details\nn->7 Display merit list\nn->8 exit the program\n");
	 scanf("%d",&n);
         switch(n){
	 case 1: enrolstuds();
	        break;
	 case 2: entergrades();
	        break;
	 case 3: displaystuds();
                break;
	// case 4: searchstuds();
	     //   break;
	// case 5: editstuDetails();
	//	break;
	// case 6: modifystutDetails();
		//break;
	 //case 7: displaymeritlist();
		//break;
	 case 8: printf("exit the prodram\n");
		break;
 	default : printf("you do not enter number from choise enter again\n");
	}
	if(n==8) break;
	}

}










