/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 8
QUESTION :TO FIND OCCURENCE OF A SUBSTRING IN A GIVEN STRING

*/

#include<stdio.h>

int main(){
  	char s1[100],s2[100];			//declaration of character array
  	printf("enter first string : ");	
  	int i=0,j=0,count=0;
  	char c;
	//taking string1 input
  	scanf("%c",&c);

  	while(c!='\n'){
		s1[i]=c;
    		i++;
    		scanf("%c",&c);
  	}

	s1[++i]='\0';				//making last character as null character

	printf("\nenter second string : ");
 	scanf("%c",&c);

	//taking second string as input
  	while(c!='\n'){
		s2[j]=c;
    		j++;
    		scanf("%c",&c);
  	}

				 
	s2[++j]='\0';				//making last character of second string as null
	



	//nested loop for checking number of occurences of substring
	for(int q=0;q<j-i;q++){
		for(int p=0;p<i;p++){
			if( p== (i-1)){
				count++;			
			}
			if(s1[p]==s2[q]){
				q++;
			}
			else{
				break;
			}
		}
	}

	printf("count is : %d",count);
  	return 0;
}
  
