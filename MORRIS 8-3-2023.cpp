#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long morris(int n, int m) {
	if (n == m){
	return (m + 1);
	}
	else{
	return morris(n, morris(n - 1, m + 1));
	}
}
int main(){
	int n,m;
	printf("Ingrese el numero N de la funcion Morris: ");
	scanf("%d", &n);
	printf("Ingrese el numero M de la funcion Morris: ");
	scanf("%d", &m);
	printf("La funcion Morris es: \n");
	printf("%d",morris(n,m));
	return 0;
}
