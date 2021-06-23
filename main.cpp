#include <iostream>
#include <FlexLexer.h>
#include "token.h"

int main() {
  FlexLexer* lexer = new yyFlexLexer;
  int ntoken = lexer->yylex();
  while(ntoken != 0) {
    std::cout << lexer->YYText() << " - ";
    switch (ntoken) {
      case Token::IF:
        std::cout << "Condição Se" << std::endl;
      break;
      case Token::ELSE:
        std::cout << "Condição Senão" << std::endl;
      break;
      case Token::ELSE_IF:
        std::cout << "Condição Senão Se" << std::endl;
      break;
      case Token::PARENTESES1:
        std::cout << "Parenteses de Abertura" << std::endl;
      break;
      case Token::PARENTESES2:
        std::cout << "Parenteses de Fechamento" << std::endl;
      break;
      case Token::CHAVE1:
        std::cout << "Chave de Abertura" << std::endl;
      break;
      case Token::CHAVE2:
        std::cout << "Chave de Fechamento" << std::endl;
      break;
      case Token::IGUAL:
        std::cout << "Igual" << std::endl;
      break;
      case Token::MENOR:
        std::cout << "Menor" << std::endl;
      break;
      case Token::MAIOR:
        std::cout << "Maior" << std::endl;
      break;
      case Token::MENOR_IGUAL:
        std::cout << "Menor Igual" << std::endl;
      break;
      case Token::MAIOR_IGUAL:
        std::cout << "Maior Igual" << std::endl;
      break;
      case Token::IGUAL_IGUAL:
        std::cout << "Igual Igual" << std::endl;
      break;
      case Token::DIFERENTE:
        std::cout << "Diferente" << std::endl;
      break;
      case Token::RETORNO:
        std::cout << "Retorno" << std::endl;
      break;
      case Token::IDENTIFICADOR:
        std::cout << "Identificador" << std::endl;
      break;
      case Token::INTEIRO:
        std::cout << "Inteiro" << std::endl;
      break;
      case Token::REAL:
        std::cout << "Real" << std::endl;
      break;
      case Token::VERDADEIRO:
        std::cout << "Verdadeiro" << std::endl;
      break;
      case Token::FALSO:
        std::cout << "Falso" << std::endl;
      break;
      case Token::PONTO_VIRGULA:
        std::cout << "Ponto e Virgula" << std::endl;
      break;
      case Token::ADICAO:
        std::cout << "Adição" << std::endl;
      break;
      case Token::SUBTRACAO:
        std::cout << "Subtração" << std::endl;
      break;
      case Token::MULTIPLICACAO:
        std::cout << "Multiplicação" << std::endl;
      break;
      case Token::DIVISAO:
        std::cout << "Divisão" << std::endl;
      break;
      default:
        std::cout << "Erro de Sintáxe." << std::endl;
    }
    ntoken = lexer->yylex();
  }
  return 0;
}
