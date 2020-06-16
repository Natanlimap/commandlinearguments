# Introdução #

Este projeto demonstra a implementacao de como passar argumentos pelo terminal e consultalos em um programa c++

## Objetivo proposto ## 
 • Criar um programa que recebe como argumentos de linha
    de comando a seguinte ação:
        • add Esta ação verifica se há outro parâmetro de linha de
        comando:
            • Se houver ele imprime Mensagem adicionada
            • Se não houver, ele solicita ao usuário um parâmetro, e depois
            imprime Mensagem Adicionada
    • Se não receber nenhum parâmetro deve imprimir seu uso
    • Exemplos de Entrada e suas respectivas saídas
        • ./prog
            • Saída: Uso: ./prog add <mensagem>
        • ./prog add
            • Solicita ao usuário uma mensagem
            • Imprime Mensagem Adicionada
        • ./prog add mensagem
            • Imprime Mensagem Adicionada

## Executando os testes ##
1. Clone o projeto
2. Digite no terminal o seguinte comando
```sh
g++ -std=c++11 main.cpp -o ./prog
```
3. Execute algum dos comandos
```sh
./prog
```
Saída: Uso: ./prog add <mensagem>
  
```sh
./prog add
```
Solicita ao usuário uma mensagem
Imprime Mensagem Adicionada   
 
```sh
./prog add <mensagem>
``` 
Imprime mensagem adicionada
        

## Autor

* **Natan Pereira** - (https://github.com/Natanlimap)

## Agradecimentos
Esse projeto foi promovido pelo professor da disciplina de Linguagem de Programacao 1, da Universidade Federal do Rio Grande do Norte, Waldson Patrício.


