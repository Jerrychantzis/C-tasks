#include <stdio.h>

int main(void){
	float a, b, c;
	
	float mul(float num1, float num2) {
	return num1 * num2;
	}	

	a = 0.5;
	b = 4.8;
	
	c = mul(a, b);
	
	if(c < 10) {
		printf("Smaller that 10\n");
	}
	else{
		printf("Greater that 10\n");
	
	return 0;
	}

	
}
