🛡️ Construção dos Territórios

Projeto desenvolvido para o GitHub Classroom – Estruturas em C

📌 Descrição do Projeto

Este projeto cria uma base de dados de territórios utilizando structs em C.
O programa permite cadastrar 5 territórios, armazenando:

Nome do território

Cor do exército

Quantidade de tropas

Ao final, todos os dados cadastrados são exibidos na tela.

🧱 Funcionalidades

Definição da struct Territorio

Cadastro de 5 territórios

Armazenamento em um vetor de structs

Exibição organizada dos territórios cadastrados

Interface simples e fácil de entender

🧩 Estrutura Utilizada
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

🖥️ Como o Programa Funciona

O usuário informa:

Nome do território

Cor do exército

Número de tropas

O processo se repete 5 vezes.

O programa exibe todos os territórios cadastrados.

🚀 Como Executar

Compile e execute com:

gcc main.c -o territorios
./territorios


Ou utilize sua IDE de preferência (VSCode, CodeBlocks, etc).

📂 Tecnologias Utilizadas

Linguagem C

Biblioteca stdio.h

Biblioteca string.h

Git & GitHub

✍️ Autor

Projeto desenvolvido por Jhennifer Gabrielle.
