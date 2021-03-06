#ifndef TOKEN_H
#define TOKEN_H

typedef enum Token {
  IF = 1,
  ELSE = 2,
  ELSE_IF = 3,
  PARENTESES1 = 4,
  PARENTESES2 = 5,
  CHAVE1 = 6,
  CHAVE2 = 7,
  IGUAL = 8,
  MENOR = 9,
  MAIOR = 10,
  MENOR_IGUAL = 11,
  MAIOR_IGUAL = 12,
  IGUAL_IGUAL = 13,
  DIFERENTE = 14,
  RETORNO = 15,
  IDENTIFICADOR = 16,
  INTEIRO = 17,
  REAL = 18,
  VERDADEIRO = 19,
  FALSO = 20,
  PONTO_VIRGULA = 21,
  ADICAO = 22,
  SUBTRACAO = 23,
  MULTIPLICACAO = 24,
  DIVISAO = 25
} Token;

#endif
