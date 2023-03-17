#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long int fib(int n) {
	if (n == 0){
		return 0;
	}
	else{
		if (n == 1){
			return 1;
		}
		else{
			return fib(n - 2) + fib(n - 1);
		}
	}
}
int main(){
	int n;
	printf("Ingrese el numero de la serie de fibonacci deseado: ");
	scanf("%d", &n);
	printf("La serie de fibonacci es: \n");
	printf("%d",fib(n));
	return 0;
}
