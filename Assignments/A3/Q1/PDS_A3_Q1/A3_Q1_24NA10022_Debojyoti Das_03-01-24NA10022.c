#include<stdio.h>
int main()
    {
       int d,m,y;
       printf("Enter a date in DD MM YYYY format: \n");
       scanf("%d %d %d",&d,&m,&y);
       if((y%100)==0 && (y%400)==0)
            {  
                if(m==2)
                  {   
                      if(d<=29)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                       
                  }
                  
                 else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                   {
                      if(d<=31)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                    
                 else if(m==4 || m==6 || m==9 || m==11)
                   {  
                       if(d<=30)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                 else
                      printf("invalid date");
              
              }
              
        else if((y%4)==0)
             {  
                if(m==2)
                  {   
                      if(d<=29)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                       
                  }
                  
                 else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                   {
                      if(d<=31)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                    
                 else if(m==4 || m==6 || m==9 || m==11)
                   {  
                       if(d<=30)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                 else
                      printf("invalid date");
              
              }
         else
              
              {  
                if(m==2)
                  {   
                      if(d<=28)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                       
                  }
                  
                 else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                   {
                      if(d<=31)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                    
                 else if(m==4 || m==6 || m==9 || m==11)
                   {  
                       if(d<=30)
                      printf("Valid date");
                      
                      else
                      printf("invalid date");
                      
                   }
                 else
                      printf("invalid date");
              
              }
              
        }      
