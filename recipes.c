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

// Assinatura das funções
void telaSobreSIG(void);
void telaMain(void);
void telaMenuReceitas(void);
void telaCadastrarReceitas(void);
void telaBuscarReceita(void);
void telaEditarReceita(void);
void telaExcluirReceita(void);

// Programa principal
int main(void) {
   telaSobreSIG();
   telaMain();
   telaEquipe();
   telaMenuReceitas();
   telaCadastrarReceitas();
   telaBuscarReceita();
   telaEditarReceita();
   telaExcluirReceita();
   return 0;
}

// Funções

void telaSobreSIG(void) {
    system("clear||cls");
    printf("\n");
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMain(void) {
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
    printf("///            3. Módulo Cadastrar receita                                  ///\n");
    printf("///            4. Módulo Editar receita                                     ///\n");
    printf("///            5. Módulo Sobre                                              ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaCadastrarReceita(void) {

    char nome_receita[20];

    struct listar_ingredientes{
        char nome[20];
        int quantidade_ing;
        char ing[100];
    };

    //Solicita ao usuário que cadastre uma receita (armazena até 10 receitas)
    struct lista_ingredientes receita[10]; 
}


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

/*void telaMenuReceitas(void) {
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
    printf("///           3. Atualizar receita                                       ///\n");
    printf("///           4. Excluir receita do sistema                              ///\n");
    printf("///           0. Voltar ao menu principal                                ///\n");
    printf("///                                                                       ///\n");
    printf("///           Escolha a opção desejada:                                   ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void telaBuscarReceita(void) {
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
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



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