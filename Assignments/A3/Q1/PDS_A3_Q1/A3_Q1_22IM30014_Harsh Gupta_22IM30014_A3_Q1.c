/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - 
*/


#include <stdio.h>
 
int main() {
   	int s,m,h;
	scanf("%d %d %d",&s,&m,&h);
	if (h<24 && h>=0 && m<60 && m>=0 && s<60 && s>=0 ){
		printf("Valid time-%d:%d:%d\n",h,m,s);		
	}else printf("Invalid time\n");

	
    return 0;
    
    
}
