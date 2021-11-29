#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "receitas.h"

/// Funções do módulo receitas

int receitas(void) {
    char al;

    do
    {
        alt = telaMenuReceitas();
        switch (alt);
        {
        case '1': telaCadastrarReceitas();
            break;

        case '2': telaBuscarReceita();
            break;

        case '3': telaEditarReceita();
            break;

        case '4': telaExcluirReceita();
            break;
        
        }
    } while (alt != '0');

    return 0;
    
}



    void telaMenuReceitas(void) {

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///     = SIG-Recipes: Um Caderno Virtual de Receitas Culinárias =        ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = = =  Receita = = = = = = = = = =              ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           1. Cadastrar uma nova receita                               ///\n");
    printf("///           2. Buscar os dados da receita                               ///\n");
    printf("///           3. Excluir receita do sistema                              ///\n");
    printf("///           0. Voltar ao menu principal                                ///\n");
    printf("///                                                                       ///\n");
    printf("///           Escolha a alternativa que deseja entrar:                    ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return alt;

    }

    void telaCadastrarReceita(void){
    char nome_receita[20];

    struct recipes
    {
        char nome[20];
        int quantidade_ingredientes;
        char ingredientes[100];
    };
    
    struct recipes receitas[1];
    for(int x=0; x<1;){
        //O nome que o usuário escolher para a receita deverá conter pelo menos 20 caracteres
        printf("Digite o nome da receita que deseja cadastrar no Sig-Recipes: ");
            scanf("%20[^\n]", &receitas[x].nome); 
            fflush(stdin);

        printf("Quantos ingredientes essa receita é composta? ");
            scanf("%i", &receitas[x].quantidade_ingredientes);
            fflush(stdin);

    //Deverá armazenar os ingredientes que o usuário irá digitar, baseado na quantidade de ingredientes listados acima
    char ingredientes[receitas[x].quantidade_ingredientes][20];
        for (int i = 0; i < receitas[x].quantidade_ingredientes; i++)
        {
            printf("Digite o ingrediente %i da receita %i: ",i+1, x+1); //Enumera a lista de ingredientes passada pelo usuário
            scanf("%20[^\n]", &ingredientes[i]);
            fflush(stdin);
        }

        //Faz a contagem e implementação
        int tamanho=0;
            for (int i = 0; i < receitas[x].quantidade_ingredientes; i++)
            {
                tamanho++;
            }

        //Salvando e agrupando as informações que serão exibidas no struct, armazenando em um só vetor 
        char ingredientes0[200]=" ";
            for (int i = 0; i < tamanho; i++)
            {
                strcat(ingredientes, "");
                strcat(ingredientes0, ingredientes[i]);
            }
            strcpy(receitas[x].ingredientes, ingredientes0);
            
    }   
        
    }


    void telaBuscarReceita(void) {
    
    char nome[20];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
   printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///     = SIG-Recipes: Um Caderno Virtual de Receitas Culinárias =        ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = = Buscar receita = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o nome da receita:                                 ///\n");
    
    //Impletar a pesquisa da receita pelo nome
    scanf(nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    }

    void telaEditarReceita(void) {
    
    char nome[20];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
   printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///     = SIG-Recipes: Um Caderno Virtual de Receitas Culinárias =        ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = = Buscar receita = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o nome da receita:                                 ///\n");
    
    //Impletar a edição da receita pelo nome
    scanf(nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    }


    void telaExcluirReceita(void) {
    
    char nome[20];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
   printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///     = SIG-Recipes: Um Caderno Virtual de Receitas Culinárias =        ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = = Buscar receita = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o nome da receita:                                 ///\n");
    
    //Impletar a exclusão da receita pelo nome
    scanf(nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    }

