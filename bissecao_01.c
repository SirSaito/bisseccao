#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int k = 0, n;
double a, b, p, y, k, u, m, h;

void entrada();
void finicio();
void meio();
void fmeio();


int main(){
    printf("\nBem vindo ao simulador de Bisseccao de Raizes.\t\t");
    entrada();
    return 0;
}

void entrada(void){
    printf("\n\nDigite a primeira variavel do intervalo:\t");
    scanf("%lf", &a);
    printf("\n\nDigite a segunda variavel do intervalo:\t");
    scanf("%lf", &b);
    printf("\n\nDigite o valor de precisao:\t");
    scanf("%lf", &p);
    printf("\n\nDigite o numero maximo de iteracoes:\t");
    scanf("%d", &n);
    printf("\n\nComecando a checagem.\t");
}

void checagem(void){
    b-a=y;
   while(y<p){
    k++;
    finicio();
    meio();
    fmeio();
   }
}

void finicio(void){

}

void meio(void){
    
}

void fmeio(void){

}