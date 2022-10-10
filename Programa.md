***

<div align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="100"/>
</div>

<br>

🎯 Projeto foi desenvolvido usando o editor de texto VS Code, para ser possivel executar o jogo no mesmo ambiente sera preciso realizar algumas configurações para que o editor possa executar o codigo escrito em C.

* Baixar o ***[GCC Compiler](https://www.baixaki.com.br/linux/download/gcc.htm)*** ou outro compilador que desejar, instalar na maquina e configurar nas variaveis de ambiente do PC.
* No VS Code e preciso instalar as extensões ***[C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)*** e ***[C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)***, para que o codigo seja executado no VS Code normalmente.

##

⌨️ Para usar palavras com acentos na linguagem C, e preciso adicionar a biblioteca `#include<windows.h>` no inicio do arquivo para que seja aplicado o padrão de  codificação UTF-8 da linguagem C no VS Code.

```C
#include<windows.h>
```
⌨️ Na função `int main() {}` coloque os codigos abaixo para que seja aplicado os acentos nas palavras.

```C
#include<windows.h>

int main(){
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  
  // Your Code Here
  
  SetConsoleOutputCP(CPAGE_DEFAULT);
}
```

⌨️ Já em IDE como `Visual Studio Code`, `DevC++`, `Eclipse` etc, somente adicione a biblioteca `#include<locale.h>` no inicio do arquivo para que seja aplicado o padrão UTF-8 na linguagem C.

```C
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  
  ...
}
```

Para executar o codigo no VS Code sem ter que abrir o terminal do windows, pressione a tecla F8 do teclado para compilar e executar o codigo no VS Code, assim não será necessario abrir um terminal do windows separado para compilar e depois executar.

> *Para que funcione conforme especificado acima é preciso que o ***`GCC Compiler`*** esteja instalado e configurado nas variaveis de ambiente do computador.*

<div align="center">
    :octocat: Feito por Mateus Barros :octocat:
</div>

***
