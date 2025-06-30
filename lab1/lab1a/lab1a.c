#include<stdio.h>

int main(){
	int A; /* Apousies*/
	int BA; /* Bathmos Apousiwn */
	float PR1;/* Proodos 1 */
	float PR2;/* Proodos 2 */
	float TE;/* Telikh Eksetash */
	
	printf("Dwse Apousies \n");
	scanf("%d", &A);
	if (A==0){
		BA=10;
	}
	else if (A==1){
		BA=5;
	}
	else{
		BA=0;
		printf("Kophkes sto ergasthrio \n");
		return 0;
	}
	

	printf("Dwse Batmous proodwn \n");
	scanf("%f%f", &PR1 , &PR2);
	float BE = (BA * 0.2) + (PR1 * 0.4) + (PR2 * 0.4);
	if (BE < 4.5){
		printf("Apotuxia ergasthriou \n");
		return 0;
	}



	printf("Dwse Bathmologia telikhs eksetashs \n");
	scanf("%f", &TE );
	if (TE< 4.5){
		printf("Apotuxia telikhs eksetashs \n");
		return 0;
	}	


	

	float GR = (BE * 0.4) + (TE * 0.6);
	if(GR >= 4.5){
		printf("Epituxia sto MYY502 me bathmo ");
		printf("%f \n", GR);
	}
}
