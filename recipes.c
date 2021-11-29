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
#include "aluno.h"
#include "receitas.h"
#include "cozinheiros.h"

// Assinatura das funções em módulos

void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);

// Programa principal

int main(void) {
    char alternativa;

    do
    {
        alternativa = telaMenuReceitas();
        switch (alternativa);
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


