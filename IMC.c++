#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float massa, altura, _IMC;

    printf("Digite sua Massa (Kg): ");
    scanf("%f",&massa);
    printf("Digite sua Altura (Metros): ");
    scanf("%f",&altura);

    _IMC = massa/(pow(altura,2));//Aqui utilizei o comando pow(n,n) para exponenciar a variável altura por 2, para chegar ao calculo de IMC.

    printf("-----------------------------------\n");//Aqui criei uma formatação de uma linha divisória para separar os resultados.
    printf("Seu IMC e: %0.2f\n",_IMC);

    if(_IMC<17)
    {
        printf("Muito abaixo do peso.\n");
    }
    else
    {
        if(_IMC>17 && _IMC<18.49)
        {
            printf("Abaixo do peso.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<24.99)
            {
                printf("Peso normal.\n");
            }
            else
            {
                if(_IMC>25 && _IMC<29.99)
                {
                    printf("Acima do peso.\n");
                }
                else
                {
                    if(_IMC>30 && _IMC<34.99)
                    {
                        printf("voce esta Obeso.\n");
                    }
                    else
                    {
                        if(_IMC>35 && _IMC<39.99)
                        {
                            printf("Obesidade Severa.\n");
                        }
                        else
                        {
                            if(_IMC>40)
                            {
                                printf("voce esta em Obesidade MORBIDA.\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}