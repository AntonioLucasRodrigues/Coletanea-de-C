//FMM
//Antonio Lucas Rodrigues I1A
//10/04/22    15:18h

//10)Fazer um programa em C que leia o percurso em quilômetros, o tipo de carro e informe o consumo
//estimado de combustível, sabendo-se que um carro tipo C faz 12 km com um litro de gasolina, um tipo B
//faz 9 km e o tipo A, 8 km por litro.

#include<stdio.h>
int main(){
	float gas, consumo;
	char tipogas;
	
	printf("\n Quantos quilometros sao percorridos: ");
	scanf("%f", &gas);
	printf("Informe o tipo de carro:\n");
    printf("Tipo A - 8Km/L\nTipo B - 9KM/L\nTipo C - 12KM/L\n");
    scanf ("%s", &tipogas);   
   
    if (tipogas == 'a' || tipogas == 'A' ) {
        consumo=gas/8;
        printf("A quentidade de combustivel consumida eh: %.2f\n ", consumo); }
    else
    {
            if (tipogas == 'b'|| tipogas == 'B')
            {
                consumo=gas/9;
                printf("A quentidade de combustivel consumida eh: %.2f\n ", consumo);       
            }
            else
            {
                if (tipogas == 'c'|| tipogas == 'C')
                {
                    consumo=gas/12;
                    printf("A quantidade de combustivel consumida eh: %.2f\n ", consumo);       
                }
            }
    }
    system("pause");
    return 0;
}

