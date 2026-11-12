#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int opcao;
    float num1, num2, resultado;
    char continuar = 's';

    do{
        //criar o menu
        printf("\n===============================\n");
        printf("       Calculadora Simples       \n");
        printf("===============================\n");
        printf("Selecione uma operacao: \n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4){
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;        

        case 4:
            if(num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Nao e permitido dividir por zero!");
            }    
            break;
        
        case 5:
            printf("Obrigado por usar a calculadora. Ate a proxima!");
            break;

        default:
            printf("Opcao Invalida. Escolha entre 1 e 5.");
            break;
        }   


        //verificacao s ou n

        if(opcao != 5 ){

            do{
                printf("\nDeseja realizar outra operacao? (s/n)");
                scanf(" %c", &continuar);

                continuar = tolower(continuar);

                if(continuar != 's' && continuar != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim e 'n' para nao.");
                }
            } while (continuar != 's' && continuar != 'n');
            
            if(continuar == 'n'){
                printf("Obrigado por usar a calculadora. Ate a proxima!");
            }
            

        }

    } while (opcao != 5 && continuar == 's');


    return 0;

}