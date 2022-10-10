***

<div align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="100"/>
</div>

<br>

🎯 Projeto foi desenvolvido usando o editor de texto VS Code, para ser possivel executar o jogo no mesmo ambiente em que foi desenvolvido, sera preciso realizar algumas configurações para que o `VS Code` possa executar o codigo escrito em C.

* Baixar o ***[GCC Compiler](https://www.baixaki.com.br/linux/download/gcc.htm)*** ou outro compilador que desejar, instalar no computador e configurar nas variaveis de ambiente do mesmo.
* No VS Code e preciso instalar as extensões ***[C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)*** e ***[C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)***, para que o codigo seja executado no VS Code normalmente.

##

`⚙️ VS Code - Acentuação de Caracteres em C`

⌨️ Para usar acentuação de caracteres na linguagem C, e preciso adicionar a biblioteca `#include<windows.h>` no inicio do arquivo executado no VS Code.

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

##

`⚙️ IDEs - Acentuação de Caracteres em C`

⌨️ Para executar o codigo em IDE como `Visual Studio Code`, `DevC++`, `Eclipse` entre outros, somente adicione a biblioteca `#include<locale.h>` no inicio do arquivo.

```C
#include<locale.h>
```

⌨️ Em seguida insera o `setlocale(ALL, "Protuguese")` na função `int main() {}` conforme o codigo abaixo.

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
