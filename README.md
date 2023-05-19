# Forca e Adivinhe o Numero

Esses foram cofidigos que desenvolvi durante os cursos da aula [C: conhecendo a Linguagem das Linguagens](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-1) e [C: avançando na linguagem](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-2) como uma forma de aprendisado e pratica. Temos aqui os projetos principais e mais alguns codigos que foram exercicios extras.

# C: conhecendo a Linguagem das Linguagens

Esse curso nos apresenta aos conceitos basicos da linguagem C, sendo o priemiro curso da formação em [Linguagem C](https://cursos.alura.com.br/formacao-linguagem-c) da alura.

## Adivinhe o número
Arquivo: adivinhacao.c

Ele gera um número aliatorio entre 0 a 99 que o usuário tera uma certa quantidade de chances para acertar, que variam de acordo com a dificuldade escolhida pelo usuário. Para rodar esse codigo basta execulta-ló em sua ide que tenha um compilador em C baixado.

## Exercicios
Todos os exercicios estão na pasta Curso 01

01-primeiro_programa.c
    Imprime "Ola linguagem C"

02-multiplicacao.c
    Pede 2 números e imprime o resultado da multiplicação dele

03-numeros.c
    Imprime os números no intervalo de 1 a 100 com um loop for

04-numeros_de_novo.c
    Imprime os números no intervalo de 1 a 100 com um loop while

05-soma_dos_numeros.c
    Soma todos os número entre 1 e 100 com um loop for e imprime o resultado

06-tabuada.c
    Pede um número inteiro e exibe a tabuada dele

# C: avançando na linguagem
Nesse curso nos aprofundamos mais na linguagem C, sendo o segundo curso da formação em [Linguagem C](https://cursos.alura.com.br/formacao-linguagem-c) da alura.

## Jogo da forca
Arquivos: forca.c, headerFile_forca.h, palavras.txt

O jogo pegara uma palavra aliatoria do banco de dados e o usuário tem que chutar letras até acertar essa palavra. O usuário tera 5 vidas e cada vez que errar uma letra ele perde uma vida, se completar a palavra antes de perder as 5 dias ele ganha, caso contrario ele perde.
O codigo já foi compilado, então você só precisa digitar ./saida_forca no terminal para jogar o jogo

## Exercicios
Todos os exercicios estão na pasta Curso 02

01-varrendo_um_array.c
    Imprime todos os valores de um array de tamanho 5

02-calculando_a_pontencia.c
    Recebe dois valores inteiros e passa eles por uma função que calcula a potencia do primeiro pelo segundo e depois imprime o resultado

03-soma_dos_arrays.c
    Passa um array de tamanho 10 por uma função que soma todos os seus elementos e imprime o resultado

04-lidando_com_ponteiros.c
    Recebe dois valores inteiros e depois passa esses dois valores e um ponteiro para nun em uma função que armazena a soma deles em num, ao voltar para a main imprime num como o resultado sa soma

05-calculando_novamente_a_potência
    Recebe dois valores inteiro e passa eles e um ponteiro potencia para um função que armazena no ponteiro a potencia do primeiro pelo segundo, ao voltar para a main imprime a variavel potencia como resultado do calculo

06-ponteiros_de_arrays.c
    Uma função soma recebe um array como um ponteiro e seu tamanho e depois retorna a soma dos elementos como um inteiro para a variavel total, depois imprime a variavel total como resultado da soma dos elementos do array

07-abrindo_um_arquivo.c
    Tenta abrir o arquivo teste.txt, caso consiga imprime um mensagem de sucesso, caso contrario imprime uma mensagem dizendo que ouve um erro ao abrir o arquivo.
    Para rodar esse codigo você deve abrir no terminal a pasta Curso 02 e digitar ./saida_q7