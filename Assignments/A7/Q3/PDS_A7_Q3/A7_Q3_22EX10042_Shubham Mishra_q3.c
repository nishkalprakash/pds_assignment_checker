
      #include<stdio.h>
            #include<stdlib.h>
            #include<alloca.h>
            int main(){
            int n,m;

            printf("enter the value of n ");
            scanf("%d",&n);
            printf("enter the value of m ");
            scanf("%d",&m);

            char x[n][3];
            char y[m][3];
            char z[m+n][3];
            char **ptrx = (char **) calloc(n, sizeof(char*));


            for (int i = 0; i < n; i++)
            {


                 ptra[i] = (char *) calloc(300, sizeof(char));
            }
             char **ptry = (char **) calloc(m, sizeof(char*));


            for (int i = 0; i < m; i++)
            {


                 ptra[i] = (char *) calloc(300, sizeof(char));
            }
              char **ptrz = (char **) calloc(n+m, sizeof(char*));


            for (int i = 0; i < n+m; i++)
            {


                 ptra[i] = (char *) calloc(300, sizeof(char));
            }
            scanf("%s",ptrx);
             scanf("%s",ptry);


        }
