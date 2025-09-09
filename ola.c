#include <stdio.h>

int main(){
    float salario, novoSalario;
    printf("Digite o salário: ");
    scanf("%f" ,&salario);
    if(salario <= 2000){
        novoSalario = salario * 1.30;
    }
    else{
        novoSalario = salario * 1.10;
    }
    printf("Novo salário = R$%.2f",novoSalario);

    return 0;
}
