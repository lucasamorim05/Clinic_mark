#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char data [11];
    char hora [6];
    char paciente [100];
    char exame [100];
    char medico [50];
}Exame;

int main()
{
    int opcao;

    do{
        printf("Bem vindo ao ClinicMark!\n");
        printf("Digite 1 para cadastrar exame\n");
        printf("Digite 2 para listar exames\n");
        printf("Digite 0 para sair\n");

        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                cadastrar_exame();
                break;
            case 2:
                listar_exames();
                break;
            case 0:
                printf("Obrigado por usar o ClinicMark")
                break;
            default:
                printf("Digito invalido!\n");
                break;
        }


    }while (opcao!=0);
}
