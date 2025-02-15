

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/*O primeiro código que fiz ficou muito extenso e nada funcional.
 Durante a criação das extenças variavéis lembrei da possíbilidade de Loop, diante disso começei a pesquisar e cheguei a este modelo cujo qual não preciso criar inumeras variavéis.
 Durante as pesquisas encontrei também formas de melhora a interação do usuário com pequenos emojis. dando uma visão mais clara, dinamica e divertida para o usuário. */
 #include <stdio.h>

 #define NUM_ESTADOS 8   //#define é uma diretiva para definir a quantidade de Estados que serão cadastrados.
 #define NUM_CIDADES 4   //#define é uma diretiva para definir a quantidade de Cidades que serão cadastradas.
 
 // Estrutura para armazenar os dados de uma cidade
 typedef struct {
     char codigo[4];  // Código da carta seguindo o exemplo (ex: A01, B02)
     char nome[50];   // Recebe o Nome da cidade
     int populacao;   // Recebe População da cidade
     float area;      // Recebe a Área da cidade (km²)
     float pib;       // Recebe PIB da cidade (em milhões)
     int pontos_turisticos; // Número de pontos turísticos
 } Cidade;
 
 int main() {
     Cidade cidades[NUM_ESTADOS][NUM_CIDADES]; // Array para armazenar cidades
     char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}; // Estados
 
     printf("🚀 Bem-vindo ao Desafio Super Trunfo - Cadastro de Cartas!\n\n Pressione Enter para continuar."); // Mensagem de saudação!
     getchar(); // Aguarda o usário aperta enter para iniciar o jogo!
     
     // Loop para cadastrar os estados e cidades
     for (int i = 0; i < NUM_ESTADOS; i++) {  //Declara a variavél i com valor de 0 e enquanto i for menor que a variavél NUM_ESTADOS o Loop irá rodar. Após cada iteração é acrescentado 1 i++.
         for (int j = 0; j < NUM_CIDADES; j++) { //Declara j como 0 e equanto j for menor que NUM_CIDADES o Loop irá rodar.
             printf("🔹 Cadastro da cidade %d do estado %c\n", j + 1, estados[i]);// Recebe os dados da cidade. %d formata a string que vem do j+1 e %c formata o inteiro que vem dos Estados.
 
             // Gerar o código da carta automaticamente (ex: A01, B02)
             sprintf(cidades[i][j].codigo, "%c%02d", estados[i], j + 1);
             /* printf é parecido com printf porém em vez de imprimir no terminal ele armazena a string em uma variável. 
             cidades[i][j].codigo campo onde os dados serão armazenados
              %c é substituido pelos estados[i]
              %02d é substituido por j+1 (o número da cidade com zero à esquerda se for menor que 10).
              j+1 Número da cidade dentro do estado (evita que comece de 0, então as cidades são numeradas 1 a 4 em cada estado).*/
 
 
             // Solicita os dados ao usuário
             printf("Nome da cidade: ");
             scanf(" %[^\n]s", cidades[i][j].nome); // Lê a entrada com espaços por exemplo São Paulo.
 
             printf("População (habitantes): ");
             scanf("%d", &cidades[i][j].populacao);
 
             printf("Área (km²): ");
             scanf("%f", &cidades[i][j].area);
 
             printf("PIB (milhões): ");
             scanf("%f", &cidades[i][j].pib);
 
             printf("Número de pontos turísticos: ");
             scanf("%d", &cidades[i][j].pontos_turisticos);
 
             printf("✅ Cidade cadastrada com sucesso!\n\n"); //Imprime confirmação
         }
     }
 
     // Exibir os dados cadastrados
     printf("📜 Lista de Cartas Cadastradas:\n");
     printf("-------------------------------------------------\n");
 
     for (int i = 0; i < NUM_ESTADOS; i++) { //Loop identico ao de cima, executa as mesmas funções, porém agora apenas imprime os resultados já inseridos.
         for (int j = 0; j < NUM_CIDADES; j++) {
             printf("🃏 Código: %s\n", cidades[i][j].codigo); //%s é substituido pelo código gerados das cidades levando em consideração os estados de A até H e as cidades de 01 até 04
             printf("   📍 Cidade: %s\n", cidades[i][j].nome); //%s é substituido pelo nome das cidades
             printf("   👥 População: %d habitantes\n", cidades[i][j].populacao);//%d é substituido pelo nº da população
             printf("   🌍 Área: %.2f km²\n", cidades[i][j].area);//%.2f é substituido pelo pela area já formatada com .2 quantidade de digitos.
             printf("   💰 PIB: %.2f milhões\n", cidades[i][j].pib);//%.2f é substituido pelo PIB já formatado com .2 quantidade de digitos.
             printf("   🏛️ Pontos turísticos: %d\n", cidades[i][j].pontos_turisticos);//%d é substituido pelo nº de pontos turisticos
             printf("-------------------------------------------------\n");
         }
     }
 
     printf("🎮 Cadastro concluído! Obrigado por participar do Super Trunfo - Países!\n"); //Imprime o sucesso da operação.
 
 
 

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
