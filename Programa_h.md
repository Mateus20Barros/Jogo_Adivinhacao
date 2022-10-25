***

<div align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="100"/>
</div>

<br>

### 📃 Sobre o arquivo Programa.h

O arquivo **`Programa.h`** é criado para separar as chamadas das funções e declarações de variáveis do arquivo principal. Todas as chamadas das funções e variáveis 
de escopo global criadas no arquivo **`Programa.c`** estão salvas nesse arquivo, para que assim qualquer função e variável criada desordenadamente não gere erros 
na execução do código.

<br>

### 🧩 Definição do arquivo Programa.h

O arquivo **`Programa.h`** esta definido usando as diretivas **`#ifndef`** e **`#endif`** que são usadas para verificar se as chamadas das funções foram definidas 
no arquivo **`Programa.c`**, caso as chamadas das funções não estejam definidas no inicio do arquivo **`Programa.c`** as mesmas são difinidas em tempo de execução, 
caso contrário permanecerá as chamadas definidas no arquivo **`Programa.c`**.

```C
#ifndef PROGRAMA_H
	// Definições
#endif
```

**`#ifndef`** é usado para abrir a condicional em tempo de compilação. <br>
**`#endif`** é usado para fechar a condicional em tempo de compilação. <br>
Por conversão é usado o nome do arquivo em letras maiúscula antes da diretiva **`#ifndef`**.

<br>

### 🏷️ Uso do arquivo Programa.h

Para adicionar o arquivo **`Programa.h`** no arquivo **`Programa.c`** use a diretiva **`#include`** com o nome do arquivo entre **`<>`**, no inicio 
do arquivo **`Programa.c`**, conforme abaixo:

```C
#include<Programa.h>
```

<br>

<div align="center">
    :octocat: Feito por Mateus Barros :octocat:
</div>

***
