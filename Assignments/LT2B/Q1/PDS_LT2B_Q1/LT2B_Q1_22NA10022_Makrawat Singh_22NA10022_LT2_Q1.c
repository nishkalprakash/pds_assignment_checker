/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : Test 2
 Description : Program to make a linked list storing strings and perform an operation.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct list2                            //defining a structure
{
    char d;
    struct list2 *next;
    
};
typedef struct list2 SET;
typedef SET *SET2;

SET2 strtolst(char s[]){                      //making a function which takes string as input and converts it into a list
    SET2 head=NULL,tail=NULL;int flag;
    int i=0;
    char *c=(char*)malloc(sizeof(char));
    int k=1;
    if(s[0]!='\0')
    {
        head=(SET2)malloc(sizeof(SET));
        head->d=s[0];
        tail=head;

        c[0]=s[0];
        for(i=1;s[i]!='\0';i++)                        //also checks duplicacy
        {
        	flag=0;
        	for(int j=0;j<strlen(c);j++){
        		if(c[j]==s[i]){
        			flag=1;
        			break;
        		}
        	}
        	
        	if(flag==0){
        		tail->next=(SET2)malloc(sizeof(SET));
            	tail=tail->next;
           		 tail->d=s[i];
           		 c[k]=s[i];
           		 k++;
        	}
        }
        tail->next=NULL;
        
    }
    return head;
}

int print_list(SET2 head)                            //making a function which prints the list
{
    SET2 temp;
    temp=head;printf("{");
    if(temp==NULL){
    	printf("}");
    	return 0;
    }
    printf("%c ",temp->d);temp=temp->next;
    while(temp!=NULL)
    {
    	printf(",");

        if(temp==NULL)
        {
            break;
        }
        else{
            printf("%c ",temp->d);
            temp=temp->next;
            
        }
        
    }
    printf("}");
    return 0;
}
int main()
{
	char L1[20];
	char L2[20];
	printf("###L1###");
	printf("\n Enter String: ");
	scanf("%s",L1);
	printf("###L2###");
	printf("\n Enter String: ");
	scanf("%s",L2);
	

	SET2 LL1=strtolst(L1);
	SET2 LL2=strtolst(L2);

	SET2 temp;
	temp=LL1;
	char *b=(char*)malloc(sizeof(char));
	int k=0;int flag;
	for(int i=0;i<strlen(L1);i++)                                    //evaluates L=L1-L2
	{
		SET2 curr;
		curr=LL2;flag=0;
		for(int j=0;j<strlen(L2);j++)
		{
			
			if (temp->d==curr->d)
			{
				flag=1;
				break;
			}

			curr=curr->next;
		}
		if(flag==0)
		{
			b[k]=temp->d;
			k++;
		}
		temp=temp->next;
	}
	
	printf("L1= ");
	print_list(LL1);
	printf("\nL2= ");
	print_list(LL2);
	printf("\nL= ");
	if(k>0){
		
		SET2 L=strtolst(b);
		print_list(L);
	}
	else{
		printf("{}");
	}
	
	

}