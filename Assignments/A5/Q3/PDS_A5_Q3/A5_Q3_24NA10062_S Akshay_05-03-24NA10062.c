#include <stdio.h>
#include <string.h>
void main(){

	char hs[100],nd[10];
	int nhs, nnd;
	scanf("%s",hs);
	
	scanf("%s",nd);
	nhs = strlen(hs);
	nnd=strlen(nd);
	if(nnd>nhs){
		printf("Error: needle_len > heystack_len\n");
		return;
	}
	
	int i=0,cnt=0;
	while(i<nhs-nnd+1){
		int flag=1;
		for(int j=0;j<nnd;j++)
			if(hs[i+j]!=nd[j]){
				flag=0;
				break;
			}
		if(flag)cnt++;
		i++;
	}
	printf("Heystack: %s\n",hs);
	printf("Needle: %s\n",nd);
	if(cnt>0)printf("Total No of Matches: %d\n",cnt);
	else{
		printf("No repeating sequence found\n");
		return;
	}
	int pos_s=0,pos_e=0,cont=0,max_cont=0,max_pos_s,max_pos_e;
	for(int i=0;i<nhs-nnd+1;i++){
		int flag=1;
		for(int j=0;j<nnd;j++)
			if(hs[i+j]!=nd[j]){
				flag=0;
				cont=0;
				break;
			}
		if(flag){
			if(cont==0)pos_s=i;
			pos_e=i+nnd;
			i+=nnd-1;
			cont++;
		}
		if(cont>max_cont)max_cont=cont;		
	}
	printf("Longest repeating match count: %d\n",max_cont);
	
	for(int i=0;i<nhs-nnd+1;i++){
		int flag=1;
		for(int j=0;j<nnd;j++)
			if(hs[i+j]!=nd[j]){
				flag=0;
				cont=0;
				break;
			}
		if(flag){
			if(cont==0)pos_s=i;
			pos_e=i+nnd;
			if(max_cont!=1)i+=nnd-1;
			cont++;
		}
		if(cont==max_cont){
			printf("[%d : %d] - ",pos_s,pos_e);
			for(int i=pos_s;i<pos_e;i++)printf("%c",hs[i]);
			printf("\n");
		}
		
	}
}


