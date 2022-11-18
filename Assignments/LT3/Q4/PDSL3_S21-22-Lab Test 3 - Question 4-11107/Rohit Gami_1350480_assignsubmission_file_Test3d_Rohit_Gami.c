#include<stdio.h>
#include<string.h>

int main()
{

    char string[30];
    printf("Enter the string:"); scanf("%s",string);
    printf("%s",string);

    strcat(string,"\0");

    int sqbr=0,nbr=0,cubr=0,id=0;

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]=='[')
        {
            if(id!=0){printf("\nnot matched\n"); return 0;}
            
            
            if((sqbr%2)!=0) {printf("\nnot matched\n"); return 0;}
            sqbr++;
            id=1;
            
        }
        if(string[i]==']')
        {
            if(id!=1)
            {
                
                {printf("\nnot matched\n");return 0;}
            }
            if(sqbr%2==0) {printf("\nnot matched\n"); return 0;}
            sqbr++;
            id=0;
        }

        if(string[i]=='(')
        {
            if(id!=0){printf("\nnot matched\n"); return 0;}
            if((nbr%2)!=0) {printf("\nnot matched\n"); return 0;}
            nbr++;
            id=2;
        }
        if(string[i]==')')
        {
             if(id!=2)
            {
                
            
                {printf("\nnot matched\n");return 0;}
            }
            if(nbr%2==0) {printf("\nnot matched\n"); return 0;}
            nbr++;
            id=0;
        }

        if(string[i]=='{')
        {
            if(id!=0){printf("\nnot matched\n");return 0;}
            if((cubr%2)!=0) {printf("\nnot matched\n"); return 0;}
            cubr++;
            id=3;
        }
        if(string[i]=='}')
        {
             if(id!=3)
            {
                
                {printf("\nnot matched\n");return 0;}
            }
            if(cubr%2==0) {printf("\nnot matched\n"); return 0;}
            cubr++;
            id=0;
        }



    }

    if((cubr%2==0) && (nbr%2==0) && (sqbr%2==0)) printf("\nMATCHED!!!\n");
    
    else(printf("\nnot matched\n"));





    return 0;
}