//Version iterativa
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n){
    int f;
    f=1;
    while (n>0){
        f*=n--;
    }
    return f;
}

int main(){
    int f;
    printf("Ingrese el numero que desea su factorial: ");
    scanf("%d",&f);
    printf("El factorial de %d es %d\n", f, fact(f));
    return 0;
}