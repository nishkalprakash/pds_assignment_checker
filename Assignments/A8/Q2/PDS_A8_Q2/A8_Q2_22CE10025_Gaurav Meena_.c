/* SECTION :14
 NAME:GAURAV MEENA
 ROLL NO:22CE10025
 DESCRIPTION: COLUMN ORDER */

 #include<stdio.h>
 #include<stdlib.h>

int main(){
    int size,i,j;
    printf("ENTER NO OF ROWS:");
    scanf("%d",&size);
    
    int a[size][size],transpose[size][size];
    printf("enter elements:");
    
    for( i=0;i<size;i++){
        for ( j=0;j<size;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            
        }       
           
for ( i=0;i<size;i++){
        for( j=0;j<size;j++){
            transpose[j][i]=a[i][j];
        }
    }
    printf("COlumn major order:");

    
    for ( i=0;i<size;i++){
        for( j=0;j<size;j++){
            printf("%d\t",transpose[i][j]);
        }
printf("\n");
    }
    return 0;
}