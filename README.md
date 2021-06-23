# AnalizadorLexicoFlex

Compilação:

flex -+ lexico.l

g++ main.cpp lex.yy.cc -lfl -o Main

Execução:

./Main < linguagem
