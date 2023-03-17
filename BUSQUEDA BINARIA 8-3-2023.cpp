#include<stdio.h>
#include<stdlib.h>
int BusBin(int A[], int x, int i, int j) { // i,j son los limites inferior y superior del arreglo
int medio;
medio = (i + j) / 2;
	if (A[medio] == x){
		return medio;
	}
	else{
		if ((x < A[medio]) && (i < medio)){
			return BusBin(A, x, i, medio - 1);
		}
		else{
			if (medio < j){
				return BusBin(A, x, medio + 1, j);
			}
			else{
				return -1;
			}
		}
	}
}
int main(){
	int n,posicion, A[]={5,7,8,6,4,10};
	n=5;
	posicion=1;
	int result=BusBin(A,posicion,0,n);
	if (result != -1) {
		printf("El numero %d esta en el arreglo\n",posicion, result);
    } 
	else {
        printf("El valor %d no fue encontrado en el arreglo",posicion, result);
    }
return 0;
}