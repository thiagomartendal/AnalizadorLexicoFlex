%{
  #include "token.h"
  extern "C" {
    int yylex(void);
  }
%}

%option noyywrap

%%
"if" {return Token::IF;}
"else" {return Token::ELSE;}
"else if" {return Token::ELSE_IF;}
"(" {return Token::PARENTESES1;}
")" {return Token::PARENTESES2;}
"{" {return Token::CHAVE1;}
"}" {return Token::CHAVE2;}
"=" {return Token::IGUAL;}
"<" {return Token::MENOR;}
">" {return Token::MAIOR;}
"<=" {return Token::MENOR_IGUAL;}
">=" {return Token::MAIOR_IGUAL;}
"==" {return Token::IGUAL_IGUAL;}
"!=" {return Token::DIFERENTE;}
"return" {return Token::RETORNO;}
"true" {return Token::VERDADEIRO;}
"false" {return Token::FALSO;}
[a-zA-Z][a-zA-Z0-9]* {return Token::IDENTIFICADOR;}
[0-9][0-9]* {return Token::INTEIRO;}
[0-9][0-9]*"."[0-9][0-9]* {return Token::REAL;}
";" {return Token::PONTO_VIRGULA;}
"+" {return Token::ADICAO;}
"-" {return Token::SUBTRACAO;}
"*" {return Token::MULTIPLICACAO;}
"/" {return Token::DIVISAO;}
[ \n\t] {;}
. {std::cout << yytext << " - Caractere inesperado." << std::endl;}
%%

int yywrap() {
  return 1;
}
