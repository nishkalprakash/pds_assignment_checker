//NAME : HARSH PATIDAT
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 1
//DESCRIPTION ;

 #include<stdio.h>

 int main() {
   int element[N];
    int m,x,y,z;
    printf("enter the number ");
    scanf("%d",&m);

        if (m>100){
                    printf("error : n>100");
                  }
        else
        {
            printf("elements of array");
        }
            for(x=0; x<m;x++)
                {
                scanf("%d",&element [x])
                }
        half=m/2;
        for(y=0;y<m; y++)
        {
            for(z=0;z<m; z++){

                    if(element[z]<0){
                               int  el=element[y];
                                element[y]=element[z];
                                element[z]=el;
                                break;
                                    }
                    else{
                            el=element[z];
                            element[z]=element[z+1];
                            element[z+1]=el;
                        }
                            }
        }

     return 0 ;




 }
