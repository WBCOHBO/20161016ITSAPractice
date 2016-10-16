#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sex,high,i,count;
	float weight;
	
	scanf("%d",&count);
	for(i=1; i<=count; i++){
	scanf("%d %d",&high,&sex);
	if(sex==1){
		weight=(high-80)*0.7;
	}else{
		weight=(high-70)*0.6;
	}
	printf("%.1f",weight);
	}
	
	return 0;
}
