#include<stdio.h>

	double minmaxavg(double array[], int num, double *max, double *min){
		int i;
		double avg = array[0];
		*min = &array[0];
		*max = &array[0];
		for(i=1; i < num; i++){
			if( *min > array[i]){
				*min = &array[i];
			}
			if( *max < array[i]){
				*max = &array[i];
			}
	
			avg += array[i];

		}
	
		return avg/num;
	}

			
