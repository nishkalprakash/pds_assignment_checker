//Bhumika Goyal
//23MI10014

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void create (char ***sptr);
void  lengthStat()
{}
  void letterStat()
  {}
  void search()
  {}
void removeDuplicate()
{}
    void searchReplace()
    {}
  void arrange()
  {}

int main(){

  int arr[100][100],n=1;
  char **sptr;
  
  // printf("enter number from 1 to 7:\n");
   

  while(n!=0){
    printf("enter a number from 1 to 7:\n");
    scanf("%d",&n);
    if(n==0)break;
    else{ switch (n){
      case 1:create( &sptr);
	//printf("hello\n");
	break;
      case 2: lengthStat();
	break;
      case 3:letterStat();
			    
	break;
      case 4:search();
	break;
      case 5:removeDuplicate();
	break;
      case 6:searchReplace();
	break;
      case 7:arrange();
	break;
      default: break;
      }
    }
  }
}
  void create (char ***sptr){
    char pqr[100];
    int n;
    printf("Enter number of words n:\n");
    
    scanf("%d",&n);
   *sptr= (char**)malloc (n* sizeof(char*));
   for(int i=0;i<n;i++){
     scanf("%s",pqr);
     (*sptr)[i]=(char*)malloc((strlen(pqr)+1)*sizeof(char));
		 for(int j=0; pqr[j]!='\0'; j++){
		   (*sptr)[i][j]=pqr[j];
		 }
   }
   for(int i=0;i<n;i++){
     printf("%d%s\n",i,(*sptr)[i]);
   }

  }


		 
    
   
    
    
    
 
  

  

    
