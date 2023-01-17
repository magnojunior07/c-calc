# c-calc
Calculadora simples feita em C, com o objetivo de aprofundar umm pouco os meus estudos na linguagem C, e exercitar um pouco minha lógica de programação

## Executando o projeto
Para executar o projeto é necessário ter o Cmake instalado em sua máquina e executar os seguintes comandos:
- Para criar a pasta onde ficarão armazenados os binários do código compilado e mudar para ela
```
mkdir compiled && cd compiled
```
- Para inicializar o Cmake na pasta raiz do projeto, ler as configurações definidas no arquivo "CMakeLists.txt", configurar o compilador de acordo com essas configurações definidas para poder compilar o código
```
cmake ../
```
- Para compilar o código
```
make
```
- Para executar o código
```
./calc
```
