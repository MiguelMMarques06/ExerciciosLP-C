#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


#ifdef EX1
/* Crie um jogo de adivinhação de números. O programa deve gerar um número aleatório entre 1 e 99 e pedir para o usuário adivinhar. A cada tentativa, o programa deve informar se o número digitado é maior, menor ou igual ao número secreto. O jogo termina quando o usuário acertar o número.*/
void main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int max = 99, min = 1;
    int numeroAleatorio = min + rand() % (max - min + 1);

    printf("Pense em um número entre 1 e 99!\n");

    char sinal;
    do
    {
        printf("Maior igual ou menor que %d?\n", numeroAleatorio);
        sinal = getchar();
        getchar();
        if(sinal == '>')
        {
            min = numeroAleatorio+1;
            numeroAleatorio = min + rand() % (max - min +1);
        }
        else if(sinal == '<')
        {
            max = numeroAleatorio-1;
            numeroAleatorio = min + rand() % (max - min +1);
        }
    }while(sinal != '=');
    printf("Acertei!");
}
#endif

#ifdef EX2
/* Melhore o jogo de adivinhação contando quantas tentativas o usuário levou para acertar o número.*/
void main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int max = 99, min = 1, contagem = 0;
    int numeroAleatorio = min + rand() % (max - min + 1);

    printf("Pense em um número entre 1 e 99!\n");

    char sinal;
    do
    {
        printf("Maior igual ou menor que %d? ", numeroAleatorio);
        sinal = getchar();
        getchar();

        switch(sinal)
        {
        case '>':
            min = numeroAleatorio+1;
            numeroAleatorio = min + rand() % (max - min +1);
            break;
        case '<':
            max = numeroAleatorio-1;
            numeroAleatorio = min + rand() % (max - min +1);
            break;
        }
        contagem++;
    }while(sinal != '=');
    printf("Acertei! Contagem: %d", contagem);
}
#endif // EX2

#ifdef EX3
/*Crie um programa que calcula a média de uma sequência de números positivos. O programa deve continuar solicitando números até que o usuário digite um número negativo.*/
main()
{
    setlocale(LC_ALL,"");
    float numero = 0, contagem = 0, soma = 0;
    float media = 0;

    do
    {
        printf("Digite números inteiros: ");
        scanf("%f",&numero);
        if(numero>-1)
        {
            soma += numero;
            contagem ++;
        }
    }
    while(numero>0);

    media = soma/contagem;
    printf("A média é: %.2f", media);
}

#endif // EX3

#ifdef EX4
/*Desenvolva um programa que calcula o consumo médio de combustível de um carro. O usuário deve informar a distância percorrida em quilômetros e a quantidade de litros de combustível consumidos. O programa deve classificar o consumo como "Venda o carro!", "Econômico!" ou "Super econômico!" de acordo com os seguintes critérios:

Consumo menor que 8 km/l: "Venda o carro!"
Consumo entre 8 km/l e 14 km/l: "Econômico!"
Consumo maior que 14 km/l: "Super econômico!"*/

main()
{
    setlocale(LC_ALL,"");
    float km = 0, litro = 0, consumo = 0;

    printf("Digite a distância percorrida em KM: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros de gasolina consumidos no percurso: ");
    scanf("%f", &litro);

    consumo  = km/litro;

    if(consumo<8)
    {
        printf("Venda o carro!");
    }
    if(consumo>= 8 && consumo <=14)
    {
        printf("Economico!");
    }
    if(consumo > 14)
    {
        printf("Super economico!");
    }
}
#endif // EX4

#ifdef EX5

/* Crie um programa que calcula a duração de uma ligação telefônica. O usuário deve informar o horário de início e o horário de término da ligação no formato "horas minutos segundos". O programa deve calcular e exibir a duração da ligação em horas, minutos e segundos.*/

main()
{
    setlocale(LC_ALL,"");
    int hora1=0,minuto1=0,segundo1=0;
    int hora2=0,minuto2=0,segundo2=0;
    int horaInt=0,minutoInt=0,segundoInt=0;
    do{
    printf("Digite o horário de início da ligação(hh mm ss): \n");
    scanf("%d %d %d",&hora1, &minuto1, &segundo1);
    }while(hora1>23 || minuto1 > 59 || segundo1 > 59);

    do{
    printf("Digite o horário de termino da ligação(hh mm ss): \n");
    scanf("%d %d %d",&hora2, &minuto2, &segundo2);
    }while(hora2>23 || minuto2>59 || segundo2>59);

    if(hora1>hora2)
    {
        horaInt = 24-hora1+hora2;
    }
    else if(hora1<=hora2 && minuto2>=minuto1)
    {
        horaInt=hora2-hora1;
    }
    else if(hora1==hora2 && minuto2<minuto1)
    {
        horaInt = 0;
    }

    if(minuto1>minuto2){
        minutoInt = 60-minuto1+minuto2;
    }
    else if(minuto1<=minuto2){
    minutoInt=minuto2-minuto1;
    }

    if(segundo1<=segundo2){
    segundoInt=segundo2-segundo1;
    }
    else if(segundo1>segundo2){
    segundoInt = 60-segundo1+segundo2;
    minutoInt--;
    }
    printf("O intervalo de tempo foi de %d:%d:%d",horaInt,minutoInt,segundoInt);
}
#endif // EX5
