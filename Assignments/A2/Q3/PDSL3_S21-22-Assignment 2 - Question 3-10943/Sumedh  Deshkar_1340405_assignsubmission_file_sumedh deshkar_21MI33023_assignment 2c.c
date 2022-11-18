/*
Name : sumedh deshkar
roll no : 21MI33023
section :3
dept : mining engneering
*/
int main()
{
  //stores the price by each vendor by machine in format m[mi][vi]
  int m[4][4]={{8200,8300,6900,9200},{7700,3700,4900,9200},
  {1100,6900,500,8600},{800,900,9800,2300}
  };


int sum = m[1][0]+m[2][0]+m[3][0]+m[4];

int m1,m2,m3,m4;   /* variable defined*/

for (int i=0;i<4;i++){                  /*loops uses*/

    for (int j=0;j<4;j++){

        for (int k=0;k<4;k++){

            for (int l=0;l<4;l++)
            {
                if (i!=j && j!=k && k!=l&& l!=j && i!=k && i!=l)
                {
                    if(m[0][i]+m[1][j]+m[2][k]+m[3][l]<sum)                        /*uses of array*/

               {

                   m1=i+1;
                   m2=j+1;
                   m3=k+1;
                   m4=l+1;
                   sum=m[0][i]+m[1][j]+m[2][k]+m[3][l];
               }
                }}}}}






                printf("total cost =%d\n",sum);     /*print of output*/
                printf("machine1-Vendor%d\n",m1);
                printf("machine2-Vendor%d\n",m2);
                printf("machine3-Vendor%d\n",m3);
                printf("machine4-Vendor%d\n",m4);

                return 0;
                  }

























