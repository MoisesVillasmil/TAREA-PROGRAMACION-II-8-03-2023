#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int MCD( int A, int B) {
	if (A < B){
		return MCD(B, A);
	}
	else{
		if (B == 0){
			return A;
		}
		else{
			return MCD(B, A % B);
		}
	}
}
int main(){
	int A;
	int B;
	printf("Ingrese el valor de A: ");
	scanf("%d",&A);
	printf("\n");
	printf("Ingrese el valor de B: ");
	scanf("%d",&B);
	printf("El resutado es: %d",MCD(A,B));			
}