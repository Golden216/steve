#include <stdio.h>
int main(){
	int principle = 'p'//%d
	;float time ='t'//%f
	;float rate ='r'//%r
	;float amount = 'a'//%f
	;float  compound_interest ='ci'||'%f'
	
	; prinf("Enter principle:");
	scanf("%d",&principle);
	printf("the principle is \t %d \n",principle);
	
	printf("Enter time(in years):");
	scanf("%f",&time);
	printf("the time is  \t %.lf \n time");
	printf("Enter rate of interest:(%%) \n");
	scanf("%f",&rate);
	printf("the rate is \t %.2f \n",rate);
	
	//calculate the compountinterest
	compound_interest= principle*((1+rate/100),time);
	printf("the compound_interest=%f",compound_interest);
 
    
	
	return 0;
}