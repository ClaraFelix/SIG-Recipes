///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///          SIG-Recipes: Um Caderno Virtual de Receitas Culinárias         ///
///                Developed by  @clarafelix - Out, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <time.h>
#include <stdlib.h>
#include <string.h>


//Define o caractere a ser utilizado como escape, sendo ("\033[")
#define ESC             
"\033["
//Define o caractere clear que será usado na função na função para limpar o console do terminal, 
//será utilizado na função clear

//As variáveis H e J, são utilizadas respectivamente para retornar ao cursor de origem e limpar o console para o usuário
#define CLEAR           
ESC "H" ESC "J"

void eval(const char * cd) {
   printf("%s", cd);
}

//Função para limpar
void clear() {
   eval(CLEAR);
}

//Função que utilizada para verificar se o usuário digitou ou pesquisou corretamente o CPF do cozinheiro cadastrado na plataforma
//A função irá retornar: [1] - Se for o CPF informado e/ou digitado for um CPF válido | Caso contrário, retornará a numeração: [0]

int validarCPF(char *cpf)
{

//O primeiro teste verifica se todos os números de CPF informados pelos usuários são identicos, 
//neste caso, o CPF será invalidado
 
    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; 
    else
    {
        //Digito 1
        //Multiplica os números de 10 a 2 e soma os resultados dentro de digito 1
        //Se o digito 1 não for o mesmo que o da validação CPF é inválido
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) 
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if(digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if((cpf[9]-48) != digito1)
            return 0; 
    }

    //Caso contrário, o CPF será válido com o retorno: [1]
    return 1;
} 

//Responsável por verificar o nome da receita cadastrada pelo usuário/cozinheiro
//O cozinheiro deverá cadastrar sua receita com até 20 letras
//Para isso, a função irá verificar a string e apresentar o seguinte comportamento:
//Se a string for válida o programa deverá retorna 0, caso contrário retornará -1 para uma string inválida

int verif_receita(char *receita)
{
    if ( strlen(receita) != 20 )
    {
        printf("O nome da receira deverá conter 20 letras!\n");
        return -1;
    }
    char num[20] = {'0','1','2','3','4','5','6','7','8','9', '10', '11', '12', '13', '14','15','16','17','18','19'};
    int i=0,count,nmrs = 0;
    while( i <= strlen(receita))
    {
        for (count = 0; count < 20; count++ )
        {
            if ( receita[i] == num[count])
            {
                nmrs++;    
            }
        }
        receita++;
        i++;
    }
    if ( nmrs != 0 )
    {
        return -1;
    }
    else
    {
        return 0;
    }
   
}