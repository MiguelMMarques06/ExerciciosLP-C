#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#ifdef EX1
/*Troca de valores entre duas vari�veis sem utilizar uma vari�vel auxiliar.*/
void main ()
{
    setlocale(LC_ALL,"");
    int A=0;
    int B=0;

    printf("Digite o valor A: ");
    scanf("%d",&A);
    printf("Digite o valor B: ");
    scanf("%d",&B);
    A = A+B;
    B = A-B;
    A = A-B;
    printf("Valor de A: %d \n", A);
    printf("Valor de B: %d", B);
}
#endif // EX1

#ifdef EX2
/*Leitura e exibi��o de diferentes tipos de dados, utilizando especificadores de formato adequados.*/
void main()
{
    setlocale(LC_ALL,"");
    short s=0;
    long l=0;
    int i=0;
    float f=0;
    double d=0;
    char c;

    printf("Digite o valor da vari�vel short: ");
    scanf("%hd",&s);

    printf("Digite o valor da vari�vel long: ");
    scanf("%ld",&l);

    printf("Digite o valor da vari�vel int: ");
    scanf("%d",&i);

    printf("Digite o valor da vari�vel float: ");
    scanf("%f",&f);

    printf("Digite o valor da vari�vel double: ");
    scanf("%lf",&d);

    printf("Digite o valor da vari�vel char: ");
    scanf(" %c",&c);


    printf("\n        10        20        30        40        50        60");
    printf("\n12345678901234567890123456789012345678901234567890123456789012345");
    printf("\n%5hd %19ld %19d",s,l,i);
    printf("\n%22f %19lf %12c",f,d,c);

}
#endif // EX2

#ifdef EX3
/*Convers�o de segundos em horas, minutos e segundos.*/
void main()
{
    setlocale(LC_ALL,"");
    int segundos = 0;
    int H =0, M = 0, S = 0, resto = 0;
    printf("Digite o tempo em segundos: ");
    scanf("%d",&segundos);

    H = segundos/3600;
    resto = segundos%3600;
    M = resto/60;
    S = resto%60;

    printf("O tempo � de :%dh%dm%ds",H,M,S);

}
#endif // EX3

#ifdef EX4
/*Invers�o dos d�gitos de um n�mero de tr�s d�gitos.*/
void main()
{
    setlocale(LC_ALL,"");
    int numero = 0, centena = 0, dezena = 0, unidade = 0, inverso = 0;
    printf("Digite o n�mero: ");
    scanf("%d",&numero);

    unidade = numero/100;
    dezena = (numero%100)/10;
    centena = numero%10;

    inverso = centena*100+dezena*10+unidade;

    printf("%d", inverso);
}
#endif // EX4

#ifdef EX5
/*Encontrar o menor m�ltiplo de um n�mero dado que seja maior ou igual a um limite especificado.*/
void main()
{
    setlocale(LC_ALL,"");
    int numero = 0,limite = 0, multiplo = 0;
    printf("Digite o n�mero: ");
    scanf("%d",&numero);
    printf("\nDigite o limite: ");
    scanf("%d",&limite);

    do
    {
        multiplo += numero;
    }
    while(multiplo<=limite);

    printf("\nO m�ltiplo �: %d", multiplo);
}
#endif // EX5
