#include<stdio.h>
#include<stdlib.h>
int Maximo(int A[], int i, int j) {
	int medio, max1, max2;
	if (i == j){
		return A[i];
	}
	else {
		medio = (i + j) / 2;
		max1 = Maximo(A, i, medio);
		max2 = Maximo(A, medio + 1, j);
		if (max1 > max2) {
		return max1;
		}
		else{
		return max2;	
		}
	}
}
int main(){
	int n, result, A[] = {4, 6, 34, 46, 58, 39, 43};    
	n = 7;
    result = Maximo(A, 0, n-1);
    printf("\nEl maximo valor es %d",result);
	return 0;
}