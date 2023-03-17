//Version recursiva
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int n;
	printf("Ingrese el numero el cual desea su factorial n! \n");
	scanf("%d", &n);
	fact(n);
	printf("El resultado del numero factorial es: ");
	printf("%d", fact(n));
	return 0;
}	

