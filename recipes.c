///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///          SIG-Recipes: Um Caderno Virtual de Receitas Culinárias         ///
///                Developed by  @clarafelix - Out, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assinatura das funções em módulos

void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);


void moduloReceitas(void);
void telaMenuReceitas(void);
void telaCadastrarReceitas(void);
void telaBuscarReceita(void);
void telaEditarReceita(void);
void telaExcluirReceita(void);

void moduloCozinheiros(void);
void telaMenuCozinheiros(void);
void telaCadastrarCozinheiros(void);
void telaBuscarCozinheiros(void);
void telaEditarCozinheiros(void);
void telaExcluirCozinheiros(void);

// Programa principal

int main(void) {
    char alternativa;

    do
    {
        alternativa = telaMenuReceitas();
        switch (alternativa)
        {
        case '1': moduloReceitas();
            break;

        case '2': moduloCozinheiros();
            break;

        case '3': telaSobre();
                  telaEquipe();
            break;
        
        }
    } while (alternativa != '0');

    return 0;
    
}


/// Funções presentes no módulo principal


char telaPrincipal(void) {

    char alt;

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///          SIG-Recipes: Um Caderno Virtual de Receitas Culinárias         ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                     = = = = = SIG-Recipes = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Receitas                                           ///\n");
    printf("///            2. Módulo Cozinheiro                                         ///\n");
    printf("///            3. Módulo Sobre                                              ///\n");
    printf("///            0. Sair                                                      ///\n");

    printf("///            Escolha um dos módulos indicados: ");
    scanf("%c", &alt);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);

    return alt;

    }

    void telaSobre(void) {

    system("clear||cls");
    printf("\n");5
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///         SIG-Recipes: Um Caderno Virtual de Receitas Culinárias          ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                    = = = = = SIG-Recipes = = = = =                      ///\n");
    printf("///                                                                         ///\n");
    printf("/// Projeto desenvolvido para a disciplina de Programação, curso de         ///\n");
    printf("/// Sistemas de Informação/UFRN. Consiste na elaboração de uma caderno vir- ///\n");
    printf("/// tual para armazenamento de receitas e posterior consultas. Tem por      ///\n");
    printf("/// objetivo o desenvolvimento de um programa/projeto, utilizando-se da     ///\n");
    printf("/// linguagem C, onde o usuário poderá cadastrar e armazenar suas receitas, ///\n"); 
    printf("/// de forma semelhante a um caderno de anotações e/ou bloco de notas.      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Pressione a tecla <ENTER> para continuar...\n");
    getchar();

    }

    void telaEquipe(void) {

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///            SIG-Recipes: Um Caderno Virtual de Receitas Culinárias       ///\n");
    printf("///                Developed by  @clarafelix - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         = = = = = SIG-Recipes = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto exemplo foi desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Clara Patrícia Felix                                         ///\n");
    printf("///            E-mail: clara.patricia.felix.700@ufrn.edu.br                 ///\n");
    printf("///            Redes sociais: @prof_clarafelix                              ///\n");
    printf("///            Repositório: https://github.com/ClaraFelix/SIG-Recipes       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Pressione a tecla <ENTER> para continuar...\n");
    getchar();

    }


    /// Funções do módulo receitas


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
    scanf(nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    }

// Funções

/*void telacadastrarReceitas(void) {
  
    char nome_receita[20];

    struct listar_ingredientes{
        char nome[20];
        int quantidade_ingredientes;
        char ing[100];
    };

    //Solicita ao usuário que cadastre uma receita (armazena até 10 receitas)
    struct lista_ingredientes receita[10]; 
}

    



    



/*void telaEquipe(void) {
    


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
    printf("///           = = = = = = = = Cadastrar Receita = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                        ///\n");
    
    for(int x=0;x<1;x++){ 
    printf("Digite o nome da receita que deseja cadstrar: ");
        scanf("%20[^\n]",&receita[x].nome); //O nome da receita deverá contar menos que 20 caracteres
        fflush(stdin);

    printf("Quantos ingredientes essa receita é composta? ");
        scanf("%i",&receita[x].quantidade_ing);
        fflush(stdin);    

    //Armazena os ingredientes que o usuário irá digitar, baseado na quantidade de ingredientes acima
     char ingredientes[receita[x].quantidade_ing][20];
            for(int y=0;y<receita[x].quantidade_ing;y++){
                printf("Digite o ingrediente %i da receita %i: ",y+1,x+1);
                scanf("%20[^\n]",&ingredientes[y]);
                fflush(stdin);
            }
    
    printf("///           Tempo de preparo:                                          ///\n");
    printf("///           Modo de preparo:                                             ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaMenuReceitas(void) {
    

void telaBuscarReceita(void) {
    



void telaEditarReceita(void) {
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
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = = Editar Receita = = = = = = = =               ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe a receita que deseja modificar:                     ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirReceita(void) {
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
    printf("///           = = = = = = = = Excluir Receita = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe a receita que deseja excluir:                       ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}*/