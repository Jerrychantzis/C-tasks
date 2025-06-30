#include<stdio.h>

	int* search(int a[] ,int l , int t){
		int i;
		for(i=0; i<l; i++){
			if(a[i] == t){		
				int *pa = &a[i];
				return pa;
			}
		}
		
		return NULL;
	}

	int main(){
		int a[]= {0,7,46,5,78,4,3,565};
		int l = 8;
		int t = 4;

		int *pm = search(a , l , t);
		
		if( pm == NULL ){
			printf("gjordghsnjoanga");
		}
		else{
			printf("To stoixeio einai to : %d\n" , *pm);
			int pos = &*pm - &a[0] ;
			printf("H yhesh ston pinaka einai : %d\n" , pos);
		}
		
		return 0;
	}
