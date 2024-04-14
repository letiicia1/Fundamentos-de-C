#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
#include "my_lib.h" 
#include "my_def.h"
void clrscr ( ) { system ( "cls" ); }
#define PI 3.1415 // definicao de macro (nome para substituir valor)
void P1 ( void )
{
 printf ( "\n" );
 printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
 printf ( "\n" );
}
int X1 = 0; // VARIAVEL EM CONTEXTO GLOBAL
void P2 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X1 );
printf ( "\n" );
} 
void P3 ( void )
{
 X1 = X1 + 1; // AVANCAR O CONTEXTO
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X1 );
 printf ( "\n" );
 if ( X1 < 6 )
 P3 ( ); // CHAMAR O PROCEDIMENTO RECURSIVAMENTE
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X1 );
 X1 = X1 - 1; // RETORNAR AO CONTEXTO ANTERIOR
 getchar ( ); // para esperar
}
void P4 ( int X )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X );
 if ( X < 5 )
 P4( X + 1 ); // chamar recursivamente com parametro
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
 getchar ( ); // para esperar
}
void P5 ( int X )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X );
 if ( X > 1 )
 P5 ( X - 1 );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
 getchar ( ); // para esperar
} 
void P7 (int X); // PROTOTIPO DE PROCEDIMENTO
void P6 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P6 COM X = %d\n", X );
 if ( X < 5 )
 P7 ( X );
 printf ( "RETORNANDO AO PROCEDIMENTO P6 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
} 
void P7 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P7 COM X = %d\n", X );
 X = X+1;
 printf ( "RETORNANDO AO PROCEDIMENTO P7 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
 P6 ( X );
} 
void P8 ( int* X )
{
 *X = *X + 1; // AVANCAR O CONTEXTO NA REFERENCIA
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X );
 if ( *X < 5 )
 P8 ( X );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X );
 *X = *X - 1; // RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
 getchar ( ); // para esperar
}
void P10 ( int X ); // PROTOTIPO DE PROCEDIMENTO
void P9 ( int X )
{
 X = X + 1;
 printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
 if ( X < 4 )
 {
 P9 ( X );
 P10 ( X );
 }
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ) ; // para esperar
} 
void P10 ( int X )
{
 printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
 if ( X > 1 )
 P10 ( X - 1 );
 printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X );
 getchar ( ); // para esperar
}


void method_01 ( void )
{

    printf ( "%s\n", "Exemplo0000 - v0.0. - 25 / 02 / 2024");
  printf ( "%s\n", "Autor: Letícia da Silva Rocha");
  printf ( "%s\n", "Matrícula: 840757" );
  printf ( "\n" );

  printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );;
  //O comando 'printf' é usado para imprimir dados na tela do usuário.

   getchar ( ); // esse comando espera o usuário digitar alguma tecla

}  /**O comando 'printf' é usado para imprimir dados na tela do usuário.**/
void method_02 ( void )
{

  system ( "clear" ); // (Windows) para limpar a tela
  // system ( "clear" ); // (Linux ) para limpar a tela
   // (dependente do sistema operacional)
   printf ( "EXEMPLO102 - SEGUNDO EXEMPLO EM C\n" );
  //O comando 'printf' é usado para imprimir dados na tela do usuário.

   system ( "pause" );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
  getchar ( );
}
/**Mesmo resultado do anterior, mas dessa vez com um sistema de limpar a tela**/
void method_03 ( void )
{
  clrscr ( ); // funcao para limpar a tela
   printf ( "EXEMPLO103 - TERCEIRO EXEMPLO EM C" );
   printf ( "\n" ); 
   printf ( "MATRICULA: 840757 ALUNO : Letícia da Silva Rocha" ); //Já havia informado acima
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
   getchar( ); }
/**impressão de uma mensagem na tela e nova função para limpa-la**/
void method_04 ( void )
{
  printf ( "EXEMPLO104 - QUARTO EXEMPLO EM C" );
   printf ( "\n" ); 
   printf ( "MATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
   printf ( "\n" ); 
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
   getchar( );}
  /**O mesmo resultado do exemplo 103, mas sem a função para limpar a tela**/

  void method_05 ( void )
  {
    printf ( "EXEMPLO105 - QUINTO EXEMPLO EM C" );
     printf ( "\nMATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
     printf("\n");
     printf ( "\nEXEMPLOS DE VALORES : " );
     printf("\n");
     printf ( "\nCARACTERE : %c", 'L' ); // letra ou simbolo
     printf ( "\nINTEIRO : %d", 19 ); // valor sem parte fracionaria
     printf ( "\nREAL : %f", 1.67 ); // valor com parte fracionaria (somente ponto final é aceito)
     printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     printf("\n");
     getchar( );}
/**Intrdução do uso de cada caractere**/
  void method_06 ( void )

{printf ( "EXEMPLO106 - SEXTO EXEMPLO EM C " );
   printf ( "\nMATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
   printf ( "\nEXEMPLOS DE VALORES : " );
   printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
   printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
   printf ( "\nREAL : %f", PI ); // emprego de macro
  printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
   getchar( );}
/**Nesse exemplo o número real foi definido no início**/

void method_07 ( void ) 
 
{
 const float pi = 3.14; 
 printf ( "EXEMPLO107 - Setímo EXEMPLO EM C" );
 printf ( "\nMATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'L' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 19 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f" , pi); // constante real
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); }
/**O mesmo resultado do exemplo 106, mas uma forma melhor de executar**/

method_08 ( void )
{const float pi = 3.14; 
// definicao de variavel real
 float X = 10.01; // com atribuicao de valor inicial
 printf ( "EXEMPLO108 - OITAVO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); 
 printf ( "\nINTEIRO : %d", 10 ); 
 printf ( "\nREAL : %f", PI ); // constante real
 printf ( "\nREAL : %f", X ); // variavel real
  printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );}

/**a contante é uma variavel que não pode ser alterada, ou seja, não pode ser atribuida um novo valor, já a variavel é uma variavel que pode ser alterada, ou seja, pode ser atribuida um novo.**/

method_09 ( void )

{ const float PI1 = 3.14; 
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
 printf ( "EXEMPLO109 - NONO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 840757 ALUNO :Letícia da Silva Rocha" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I ); 
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI1 );
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); }/**outra forma de imprimir inteiro (%i ou %d)**/

method_10 ( void )

{// definicao de constante
 const double PI2 = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
// definicao de variavel caractere
 char N = '\n'; // mudar de linha
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 840757 ALUNO : Letícia da Silva Rocha" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I );
 printf ( "%c%s%f" , N, "REAL : " , X );
 printf ( "%c%s%lf", N, "REAL : " , PI2 );
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );} 
/**const double para números científicos é uma opção melhor.
A variavel N facilita mais do que utilizar \n sempre.**/

method_11 ( void )

{int X = 0;
 printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X ); // LEITURA DE UM INTEIRO FORNECIDO PELO USUARIO
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %d", X );
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); }
/**Imprime e guarda o valor digitado**/

method_12 ( void )

{double X = 0.0;
 printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X ); 
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %lf", X );
  printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );}
/**Mesma coisa do exemplo anterior, mas com um valor real**/

method_13 ( void )

{
// PROGRAMA PARA LER E IMPRIMIR UM CARACTERE
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %c", X );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );}
/**A mesma coisa do exemplo 202, mas com a variavel char (caracter)**/

 method_14 ( void )

{char X [10]; /**DENTRO DOS CONCHETES É O NUMERO DE CARACTERES QUE VAI TER A VARIAVEL**/
 printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nFOI DIGITADO: %s", X );
  printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); } 
/**Fornece um espaço especifico para digitar**/

method_15 ( void )

{
// PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS
// VARIAVEIS:
 int X=0, Y=0, Z=0;
 printf ( "EXEMPLO205 - LER E sOMAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X + Y;
 printf ( "\nA SOMA DOS DOIS = %d", Z );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); 
} 
/**Esse algoritmo cria uma calculadora básica que soma os números**/

method_16 ( void )
{
// PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS
// VARIAVEIS:
 float X=0.0, Y=0.0, Z=0.0;
 printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%f", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X - Y;
 printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar ( );
  } 
/**Esse algoritmo cria uma calculadora básica que subtrai os números**/

method_17 ( void )

{
// PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
 bool X=false, Y=false, Z=false;
 printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
 X = true;
 Y = false;
 Z = X || Y; // X ou Y
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 Z = X && Y; // X e Y
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar ( );
}
/**Mostra os principios de um algortmo de valores logicos**/

method_18 ( void )

{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
 double D = 0.0, // Distancia
 T = 0.0, // Tempo
 V = 0.0; // Velocidade
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T;
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); 
}

/**Uma calculadora simples que calcula a velocidade de um veiculo.**/

method_19 ( void )

{
// PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
// CONSTANTE:
 const char SENHA[5] = "XXXX";
// VARIAVEL:
 char S [10];
 printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
 scanf ( "%s", S ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
// strcmp(S1,S2) compara S1 com S2
// igual a 0: S1 = S2 => 1 ( verdadeiro )
// diferente: S1 <> S2 => 0 ( falso )
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );
} 
/**Utilização de verdadeiro e falso com o comando strcmp**/

method_20 ( void )

{
// PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
// CONSTANTE:
 const double PI3 = 3.14;
// VARIAVEIS:
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;
 printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); // limpar a entrada de dados
 COSSENO = sqrt( 1.0 - pow(SENO,2) );
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE );
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI3) );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}
/**É realizado o calculo do arco trigonometrico de um seno nesse algoritmo.**/

method_21 ( void )

{
// PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
// VARIAVEL:
 int X = 0;
 printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
 printf ( "\n  Descubra o número: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 if ( X == 7 )
 printf ( "\nParabéns você acertou!!" );
 else
 printf ( "\nNúmero errado :-(\nmais sorte na proxima vez!" );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );
}
/**Dependendo do número que você digitar será apresentado uma resposta diferente. Utilizei uma brincadeira de adivinhação nesse exemplo.**/

method_22 ( void )

{
// PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
// VARIAVEL:
 float X = 0.0;
 printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 if( X != 0.0 )
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); 
} 
/**Dessa vez somente o if foi utilizado, então não há uma segunda resposta.**/

method_23 ( void )

{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 } // if ALGARISMO
   printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( );
}
/**Dessa vez utlizando o && foi possível duas opções no if.**/

method_24 ( void )

{
// PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( !( X >= '0' && X <= '9') )
 {
 printf ( "\nNAO FOI DIGITADO UM ALGARISMO\nFOI DIGITADO O CARACTERE: %c", X );

 } // if NAO ALGARISMO
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); 
}
/**Agora possui resposta se não digitar o algarismo.**/

method_25 ( void )

{
// PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
// VARIAVEIS:
 int X=0, Y=0;
 printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 if( X == Y )
 printf ( "\nDOIS VALORES IGUAIS" );
 else
 {
 printf ( "\n%d", X );
 printf ( " DIFERENTE DE " );
 printf ( "%d", Y );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/**Nesse exemplo é utilizado o if e o else para veriicar se os valores são iguais ou não**/

method_26 ( void )

{
// PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
// VARIAVEIS:
 double X=0.0, Y=0.0;
 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( ); // limpar a entrada de dados
 if( ! (X == Y) )
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else
 {
 printf ( "VALORES IGUAIS" );
 } // if VALORES DIFERENTES
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/**Nesse exemplo é utilizado o if e o else para veriicar se os valores REAIS são iguais ou não**/

method_27 ( void )

{
  // PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
  // VARIAVEIS:
   int X=0, Y=0;
   bool Z=false;
   printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
   printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
   scanf ( "%d", &X );
   getchar( ); // limpar a entrada de dados
   printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
   scanf ( "%d", &Y );
   getchar( ); // limpar a entrada de dados
   Z = (X == Y);
   if( Z )
   printf ( "VALORES IGUAIS" );
   else
   printf ( "VALORES DIFERENTES" );
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/** Nesse exemplo é utilizado o if e o else e o bool (código de verdadeiro ou falso) para veriicar se os valores REAIS são iguais ou não.**/

method_28 ( void )

{
  // PROGRAMA PARA LER E TESTAR UMA LETRA
  // VARIAVEL:
   char X = '0';
   printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
   printf ( "\nFORNECER UMA LETRA QUALQUER: " );
   scanf ( "%c", &X );
   getchar( ); // limpar a entrada de dados
   if( X >= 'A' && X <= 'Z' )
   printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
   else
   if( X >= 'a' && X <= 'z' )
   printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
   else
   printf ( "NAO FOI DIGITADA UMA LETRA" );
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
getchar( ); // para esperar
}
/** Nesse exemplo é utilizado o if e o else para veriicar se a letra é maiuscula ou minuscula**/

method_29 ( void )

{
// PROGRAMA PARA COMPARAR CARACTERES < , = , >
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
 printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch( X )
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
 break;
 case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
 break;
 case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
 break;
 default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );}
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/** Nesse exemplo é utilizado o switch case para categorizar as caracteres >, =, <**/

method_30 (void)

{
// PROGRAMA PARA IDENTIFICAR CARACTERES
// VARIAVEL
 char X = '0';
 printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch ( X )
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
 printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
 break;
 default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } // IDENTIFICACAO DE UM CARACTERE
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/** Nesse exemplo é utilizado o switch case para informar se as caracteres são vogais ou algarismos**/

method_31 (void)

{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0, CONTADOR = 0;
 printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" ); // mudar de linha
 CONTADOR = 2;
 while ( CONTADOR <= 5 ) // REPETIR
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
 scanf( "%d", &X);
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;// ENQUANTO ( CONTADOR <= 3 )

 }
 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/**Esse exemplo repete até que chegue no número estipulado de vezes que pode repetir, como se fosse de fato uma contagem e começa contar a partir do número informado, nesse caso eu coloquei 2**/

method_32 ( void )

 {
   // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
   // VARIAVEIS :
    int X = 0, N = 0, CONTADOR = 0;
    printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &N );
    getchar( ); // limpar a entrada de dados
    CONTADOR = 1;
    while ( CONTADOR <= N )
    {
    printf ( "\n%d", CONTADOR );
    printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
    scanf ( "%d", &X );
    getchar( ); // limpar a entrada de dados
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    CONTADOR = CONTADOR + 1;
    } // ENQUANTO ( CONTADOR <= N )

 printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
 getchar( ); // para esperar
}
/**A mesma coisa do 401, mas dessa vez o usuario que informa quantas vezes deve repetir.**/

method_33 ( void )

{
   // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
   // VARIAVEIS :
    int X = 0, N = 0;
    printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &N );
    getchar( ); // limpar a entrada de dados
    while ( N > 0 ) // REPETIR
    {
    printf ( "\n%d", N );
    printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
    scanf ( "%d", &X );
    getchar( ); // limpar a entrada de dados
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    N = N - 1;
    }printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Dessa vez a contagem vai diminuindo em vez de aumentar.**/

method_34 ( void )

{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 } // PARA CONTADOR EM [1:3]

    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Mesma coisa, mas dessa vez utilizando o FOR**/

method_35 ( void )

{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;
 printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d", X );
 } // PARA CONTADOR EM [1:N]
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Mesma coisa do 302, mas dessa vez utilizando o FOR**/
method_36 ( void )

{
  // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
  // VARIAVEIS :
   int X = 0,
   CONTADOR = 0;
   printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
   CONTADOR = 1;
   do // REPETIR
   {
   printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
   scanf ( "%d", &X );
   getchar( ); // limpar a entrada de dados
   printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
   CONTADOR = CONTADOR + 1;
   }
   while ( CONTADOR <= 3 ); // ATE' ( CONTADOR > 3 
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Outra forma de repetição, mas dessa vez utilizando o do while**/

method_37 ( void )

 {
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
     int X = 0,
     CONTADOR = 0;
     printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
     printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
     scanf ( "%d", &CONTADOR );
     getchar( ); // limpar a entrada de dados
     do // REPETIR
     {
     printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
     scanf ( "%d", &X );
     getchar( ); // limpar a entrada de dados
     printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
     CONTADOR = CONTADOR - 1;
     }
     while ( CONTADOR > 0 ); // ATE' ( CONTADOR <= 3 )
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Outra forma de repetição igual do 302, mas dessa vez utilizando o do while**/

method_38 ( void )

 {
      // PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
      // VARIAVEL :
       int X = 0;
       printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
       printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
       scanf ( "%d", &X );
       getchar( ); // limpar a entrada de dados
       while ( X != 0 ) // REPETIR
       {
       printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
       printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
       scanf ( "%d", &X );
       getchar( ); // limpar a entrada de dados
       } // ENQUANTO X DIFERENTE DE ZERO
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
    getchar( );} 
/**Repete até o número ser igual a 0**/

method_39 ( void )

{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X == 0 ) // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X IGUAL A ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar( );} 
   /**Repete até o número ser diferente de 0**/

method_40 ( void )

{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
 do // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }
 while ( X == 0 ); // ATE' X DIFERENTE DE ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Repete até o número ser diferente de 0, mas dessa vez utilizando o do while**/

method_41 ( void )

{
  // PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
   printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
   P1 ( ); // chamada ao procedimento
   printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**É chamado um procedimento, bem parecido com o que eu fiz com o method**/

method_42 ( void )

{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
 for ( X1 = 1; X1 <= 5; X1 = X1 + 1 )
 P2 ( ); // chamar 5 vezes
 printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Os 5 procedimentos são chamados automaticamente**/

method_43 ( void )

{
  // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
   printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
   X1 = 0;
   P1 ( ); // OBSERVAR A RECURSIVIDADE !
   printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Os 5 procedimentos são chamados automaticamente e depois retorna de forma decrescente utilizando o IF**/

method_44 ( void )

{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0504 - CHAMADA/RETORNO COM PARAMETRO\n" );
 P4 ( 1 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );

    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**O mesmo resultado do exemplo503, mas de uma forma diferença de realiza-lo**/

method_45 ( void )

 {
  // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
   printf ( "EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n" );
   P5 ( 5 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
   printf ( "\n" );

    printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Dessa vez o retorno foi de forma crescente**/

method_46 ( void )

{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
 P6 ( 1 ); // OBSERVAR RECURSIVIDADE INDIRETA !
 printf ( "\n" ); 
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Retorno a dois procedimentos ao mesmo tempo**/

method_47 ( void )

 {
  // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
  // VARIAVEL LOCAL
   int X;
   printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
   X = 0;
   P8 ( &X ); // OBSERVAR REPETICAO FINITA !
   printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
     getchar();} 
   /**Mesmo resultado, mas com uma forma diferente de realizar**/

method_48 ( void )
 {
  // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
   printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
   P9 ( 1 );
printf ( "\nPRESSIONAR <Enter> PARA TROCAR DE EXEMPLO." );
   getchar();} 
 /**Todos os procedimentos são apresentados na tela e o retorno depende dos requistos informandos no if** e se irá somar ou subtrair o X**/

method_49 ( void )

{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS
 println ( "EXEMPLO0509 - USO DE MODULOS" );
 pause ( "PRESSIONAR <Enter> PARA TROCAR DE EXERCICIO." );
 }
/**Uma biblioteca criada por "mim" foi adicionada no projeto**/
method_50 ( void )
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS
// VARIAVEIS :
 chars text = "MUDAR DE LINHA";
 println ( "EXEMPLO0509 - USO DE MODULOS" );
 printf ( "%c", EOL );
 printf ( "%s%c", text, EOL );
pause ( "PRESSIONAR <Enter> PARA TROCAR DE EXERCICIO." );
}//Uma outra biblioteca criada por "mim" que responde por outros comandos foi adicionada.


int main ( int argc, char* argv [ ] )
{
  printf ( "%s\n", "Exemplo0000 - v0.0. - 25 / 02 / 2024");
  printf ( "%s\n", "Autor: Letícia da Silva Rocha");
  printf ( "%s\n", "Matrícula: 840757" );
  printf ( "\n" );
// definir dados / resultados
 int opcao = 0;
do
 {
 // para mostrar opcoes
   printf ( "\n%s\n", "Escolha o exemplo que você deseja executar:" );
   printf ( "\n%s" , "0 - Terminar" );
   printf ( "\n%s" , "1 - exemplo101" );
   printf ( "\n%s" , "2 - exemplo102" );
   printf ( "\n%s" , "3 - exemplo103" ); 
   printf ( "\n%s" , "4 - exemplo104" );
   printf ( "\n%s" , "5 - exemplo105" );
   printf ( "\n%s" , "6 - exemplo106" );
   printf ( "\n%s" , "7 - exemplo107" ); 
   printf ( "\n%s" , "8 - exemplo108" ); 
   printf ( "\n%s" , "9 - exemplo109" ); 
   printf ( "\n%s" , "10 - exemplo110" ); 
   printf ( "\n%s" , "11 - exemplo201" ); 
   printf ( "\n%s" , "12 - exemplo202" ); 
   printf ( "\n%s" , "13 - exemplo203" ); 
   printf ( "\n%s" , "14 - exemplo204" );
   printf ( "\n%s" , "15 - exemplo205" );
   printf ( "\n%s" , "16 - exemplo206" );
   printf ( "\n%s" , "17 - exemplo207" );
   printf ( "\n%s" , "18 - exemplo208" );
   printf ( "\n%s" , "19 - exemplo209" );
   printf ( "\n%s" , "20 - exemplo210" );
   printf ( "\n%s" , "21 - exemplo301" );
   printf ( "\n%s" , "22 - exemplo302" );
   printf ( "\n%s" , "23 - exemplo303" );
   printf ( "\n%s" , "24 - exemplo304" );
   printf ( "\n%s" , "25 - exemplo305" );
   printf ( "\n%s" , "26 - exemplo306" );
   printf ( "\n%s" , "27 - exemplo307" );
   printf ( "\n%s" , "28 - exemplo308" );
   printf ( "\n%s" , "29 - exemplo309" );
   printf ( "\n%s" , "30 - exemplo310" );
   printf ( "\n%s" , "31 - exemplo401" );
   printf ( "\n%s" , "32 - exemplo402" );
   printf ( "\n%s" , "33 - exemplo403" );
   printf ( "\n%s" , "34 - exemplo404" );
   printf ( "\n%s" , "35 - exemplo405" );
   printf ( "\n%s" , "36 - exemplo406" );
   printf ( "\n%s" , "37 - exemplo407" );
   printf ( "\n%s" , "38 - exemplo408" );
   printf ( "\n%s" , "39 - exemplo509" );
   printf ( "\n%s" , "40 - exemplo510" );
   printf ( "\n%s" , "41 - exemplo601" );
   printf ( "\n%s" , "42 - exemplo602" );
   printf ( "\n%s" , "43 - exemplo603" );
   printf ( "\n%s" , "44 - exemplo604" );
   printf ( "\n%s" , "45 - exemplo605" );
   printf ( "\n%s" , "46 - exemplo606" );
   printf ( "\n%s" , "47 - exemplo607" );
   printf ( "\n%s" , "48 - exemplo608" );
   printf ( "\n%s" , "49 - exemplo609" );
   printf ( "\n%s" , "50 - exemplo610\n" );


 printf ( "\n%s", "Exemplo = ");
 scanf ( "%d", &opcao );
 getchar( ); 
 printf ("\n");
 // escolher acao dependente da opcao
 switch ( opcao )
 {
   case 0: // nao fazer nada
   break;
   case 1:
   method_01 ( );
   break;
   case 2: 
    method_02 ( );
    break;
   case 3: 
    method_03 ( );
    break;
   case 4:
    method_04 ( );
    break;
   case 5: 
    method_05 ( );
    break;
   case 6: 
   method_06 ( );
   break;
   case 7: 
   method_07 ( );
   break;
   case 8: 
   method_08 ( );
   break;
   case 9: 
   method_09 ( );
   break;
   case 10: 
   method_10 ( );
   break;
   case 11: 
   method_11 ( );
   break;
   case 12: 
   method_12 ( );
   break;
   case 13: 
    method_13 ( );
    break;
   case 14: 
    method_14 ( );
    break;
   case 15: 
    method_15 ( );
    break;
   case 16: 
    method_16 ( );
    break;
   case 17: 
    method_17 ( );
    break;
   case 18: 
    method_18 ( );
    break;
   case 19: 
    method_19 ( );
    break;
   case 20: 
    method_20 ( );
    break;
   case 21: 
    method_21 ( );
    break;
   case 22: 
    method_22 ( );
    break;
   case 23: 
    method_23 ( );
    break;
   case 24: 
    method_24 ( );
    break;
   case 25: 
    method_25 ( );
    break;
   case 26: 
    method_26 ( );
    break;
   case 27: 
    method_27 ( );
    break;
   case 28: 
    method_28 ( );
    break;
   case 29: 
    method_29 ( );
    break;
   case 30: 
    method_30( );
    break;
   case 31: 
    method_31 ( );
    break;
   case 32: 
    method_32 ( );
    break;
   case 33: 
    method_33 ( );
    break;
   case 34: 
    method_34 ( );
    break;
   case 35: 
    method_35 ( );
    break;
   case 36: 
    method_36 ( );
    break;
   case 37: 
    method_37 ( );
    break;
   case 38: 
    method_38 ( );
    break;
   case 39: 
    method_39 ( );
    break;
   case 40: 
    method_40 ( );
    break;
   case 41: 
    method_41 ( );
    break;
   case 42: 
    method_42 ( );
    break;
   case 43: 
    method_43 ( );
    break;
   case 44: 
    method_44 ( );
    break;
   case 45: 
    method_45 ( );
    break;
   case 46: 
    method_46 ( );
    break;
   case 47: 
    method_47 ( );
    break;
   case 48: 
    method_48 ( );
    break;
   case 49: 
    method_49 ( );
    break;
   case 50: 
    method_50 ( );
    break;
   

 default:
 printf ( "\nERRO: Esse exemplo não existe.\n" );
 printf("Aperte ENTER para continuar.\n");
 getchar( );
 break; } 
 }
 while ( opcao != 0 );

 printf ( "\nAgradeço a atenção. Espero que tenha gostado! :-)" );
printf ("\n\nAperte ENTER para finalizar");
 getchar( ); 
 return (0);}

