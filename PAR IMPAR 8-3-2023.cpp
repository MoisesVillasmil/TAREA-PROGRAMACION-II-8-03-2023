#include<stdio.h>
#include<stdlib.h>
int impar(int m);
int par(int m) {
	if (m == 0) {
		return 1;
	}
	else{
		return impar(m - 1);
	} 
}
int impar(int m) {
	if (m == 0){
		return 0;
	} 
	else{
		return par(m - 1);
	} 
}
int main(){
	int m;
	printf("Ingrese el numero: ");
	scanf("%d", &m);
	printf("el numero es: %d \n",par(m));
	printf("el numero par es 1 ---- impar 0");
	return 0;
}
