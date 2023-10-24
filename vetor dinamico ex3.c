#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


int menu(){

    int opc;

    printf("\n========menu========\n\n");
    printf("1 - inserir a direita no vetor dinamico");
    printf("\n2 - inserir a esquerda no vetor dinamico");
    printf("\n3 - remover a esquerda no vetor dinamico");
    printf("\n4 - remover a direita no vetor dinamico");
    printf("\n5 - mostrar vetor dinamico");
    printf("\n0 - sair");
    printf("\n--> ");

    scanf("%d", &opc);

    return opc;


}

void inserir_esquerda(int vetor[], int n){

    do{
        vetor[n] = vetor[n-1];

        n--;

    }while(n>0);

    printf("\nInsira um numero : ");
    fflush(stdin);
    scanf("%d", &vetor[0]);

}

int remover_esquerda(int vetor[], int n){

    int i = 0;

    do{
        vetor[i] = vetor[i+1];

        i++;
    }while(i<n);

    n--;

    return n;
}

int main(){

    int n = 0;
    int *vetor = malloc(n*sizeof(int));
    int opc;

    do{
        //system("cls");
        opc = menu();

        switch(opc){

            case 1:
                printf("\n===inserir a direita===\n\n");
                n++;
                printf("insira um numero: ");
                fflush(stdin);
                scanf("%d", &vetor[n-1]);

                break;

            case 2:
                n++;
                printf("\n===inserir a esquerda===\n\n");

                inserir_esquerda(vetor, n);

                break;

            case 3:
                printf("\n\n===removeu a esquerda===\n\n");
                n = remover_esquerda(vetor, n);

                break;

            case 4:
                printf("\n\n===removeu a direita===\n\n");
                n--;

                break;

            case 5:
                //system("cls");
                for(int i = 0; i<n; i++){
                    printf("%d ", vetor[i]);
                }
                printf("\n\npressione qualquer tecla para continuar");
                getch();
                break;

        }
    }while(opc != 0);


    return 0;
}
