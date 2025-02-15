#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        char pais[30];
        char A[30], B[30], C[30], D[30], E[30], F[30], G[30], H[30];
        char A01[30], A02[30], A03[30], A04[30];
        char B01[30], B02[30], B03[30], B04[30];
        char C01[30], C02[30], C03[30], C04[30];
        char D01[30], D02[30], D03[30], D04[30];
        char E01[30], E02[30], E03[30], E04[30];
        char F01[30], F02[30], F03[30], F04[30];
        char G01[30], G02[30], G03[30], G04[30];
        char H01[30], H02[30], H03[30], H04[30];

    printf("Bem Vindo ao jogo Super Trufo! \n Pressione Enter para continuar. \n");
    getchar(); // Aguarda o usário aperta enter para iniciar o jogo!

    printf("Digite o País: \n");
    scanf("%s", &pais);


        printf("Digite o 1º Estado do País:");
        scanf("%s", &A);

            printf("Digite a 1º Cidade do 1º Estado:");
            scanf("%s", &A01);

            printf("Digite a 2º Cidade do 1º Estado:");
            scanf("%s", &A02);

            printf("Digite a 3º Cidade do 1º Estado:");
            scanf("%s", &A03);

            printf("Digite a 4º Cidade do 1º Estado:");
            scanf("%s", &A04);



    printf("Digite o 2º Estado do País:");
    scanf("%s", &B);

            printf("Digite a 1º Cidade do 2º Estado:");
            scanf("%s", &B01);

            printf("Digite a 2º Cidade do 2º Estado:");
            scanf("%s", &B02);

            printf("Digite a 3º Cidade do 2º Estado:");
            scanf("%s", &B03);

            printf("Digite a 4º Cidade do 2º Estado:");
            scanf("%s", &B04);


    printf("Digite o 3º Estado do País:");
    scanf("%s", &C);

            printf("Digite a 1º Cidade do 3º Estado:");
            scanf("%s", &C01);

            printf("Digite a 2º Cidade do 3º Estado:");
            scanf("%s", &C02);

            printf("Digite a 3º Cidade do 3º Estado:");
            scanf("%s", &C03);

            printf("Digite a 4º Cidade do 3º Estado:");
            scanf("%s", &C04);


    printf("Digite o 4º Estado do País:");
    scanf("%s", &D);

            printf("Digite a 1º Cidade do 4º Estado:");
            scanf("%s", &D01);

            printf("Digite a 2º Cidade do 4º Estado:");
            scanf("%s", &D02);

            printf("Digite a 3º Cidade do 4º Estado:");
            scanf("%s", &D03);

            printf("Digite a 4º Cidade do 4º Estado:");
            scanf("%s", &D04);


    printf("Digite o 5º Estado do País:");
    scanf("%s", &E);

            printf("Digite a 1º Cidade do 5º Estado:");
            scanf("%s", &E01);

            printf("Digite a 2º Cidade do 5º Estado:");
            scanf("%s", &E02);

            printf("Digite a 3º Cidade do 5º Estado:");
            scanf("%s", &E03);

            printf("Digite a 4º Cidade do 5º Estado:");
            scanf("%s", &E04);


    printf("Digite o 6º Estado do País:");
    scanf("%s", &F);

            printf("Digite a 1º Cidade do 6º Estado:");
            scanf("%s", &F01);

            printf("Digite a 2º Cidade do 6º Estado:");
            scanf("%s", &F02);

            printf("Digite a 3º Cidade do 6º Estado:");
            scanf("%s", &F03);

            printf("Digite a 4º Cidade do 6º Estado:");
            scanf("%s", &F04);


    printf("Digite o 7º Estado do País:");
    scanf("%s", &G);

            printf("Digite a 1º Cidade do 7º Estado:");
            scanf("%s", &G01);

            printf("Digite a 2º Cidade do 7º Estado:");
            scanf("%s", &G02);

            printf("Digite a 3º Cidade do 7º Estado:");
            scanf("%s", &G03);

            printf("Digite a 4º Cidade do 7º Estado:");
            scanf("%s", &G04);


    printf("Digite o 8º Estado do País:");
    scanf("%s", &H);

            printf("Digite a 1º Cidade do 8º Estado:");
            scanf("%s", &H01);

            printf("Digite a 2º Cidade do 8º Estado:");
            scanf("%s", &H02);

            printf("Digite a 3º Cidade do 8º Estado:");
            scanf("%s", &H03);

            printf("Digite a 4º Cidade do 8º Estado:");
            scanf("%s", &H04);




    printf("País %s \n", pais);

    printf("1º Estado %s \n", A);
    printf("Cidades %s - %s - %s - %s \n", A01, A02, A03, A04);

    printf("2º Estado %s \n", B);
    printf("Cidades %s - %s - %s - %s \n", B01, B02, B03, B04);

    printf("3º Estado %s \n", C);
    printf("Cidades %s - %s - %s - %s \n", C01, C02, C03, C04);

    printf("4º Estado %s \n", D);
    printf("Cidades %s - %s - %s - %s \n", D01, D02, D03, D04);

    printf("5º Estado %s \n", E);
    printf("Cidades %s - %s - %s - %s \n", E01, E02, E03, E04);

    printf("6º Estado %s \n", F);
    printf("Cidades %s - %s - %s - %s \n", F01, F02, F03, F04);

    printf("7º Estado %s \n", G);
    printf("Cidades %s - %s - %s - %s \n", G01, G02, G03, G04);

    printf("8º Estado %s \n", H);
    printf("Cidades %s - %s - %s - %s \n", H01, H02, H03, H04);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
