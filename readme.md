# ♟️ Desafio Xadrez em C — Nível Mestre

Este projeto simula os movimentos das peças de xadrez (Torre, Bispo, Rainha e Cavalo) utilizando **recursividade** e **loops complexos**, conforme proposto em um desafio de nível avançado.

---

## 📄 Arquivo principal

- `xadrez.c` — Código-fonte com a lógica de movimentação das peças.

---

## 🧰 Pré-requisitos

Certifique-se de ter os seguintes itens instalados:

- ✅ [GCC (GNU Compiler Collection)](https://gcc.gnu.org/)
- ✅ [Visual Studio Code](https://code.visualstudio.com/)
- ✅ Extensão **C/C++** (Microsoft) no VS Code

Verifique se o GCC está instalado com:

```bash
gcc --version
```

---

## ▶️ Como executar no VS Code

### 1. Abrir o projeto no VS Code

```text
Arquivo > Abrir Pasta...
```

Selecione a pasta onde está o arquivo `xadrez.c`.

---

### 2. Abrir o terminal integrado

- Atalho: `Ctrl + '` (aspas simples)
- Ou: `Terminal > Novo Terminal`

---

### 3. Compilar o código

Execute o seguinte comando no terminal:

```bash
gcc xadrez.c -o xadrez
```

> Isso criará um executável chamado `xadrez`.

---

### 4. Executar o programa

#### No Windows:

```bash
xadrez.exe
```

#### No Linux ou macOS:

```bash
./xadrez
```

---

## 🧠 Funcionalidades

O programa imprime no terminal os movimentos simulados de cada peça:

### ♜ Torre (com recursividade)

- Movimenta-se para cima e para a direita.
- Saída esperada:
  ```text
  Cima
  Cima
  Direita
  Direita
  ```

### ♝ Bispo (recursividade + loops aninhados)

- Simula o movimento diagonal.
- Utiliza recursão + dois loops aninhados (linha x coluna).

### ♛ Rainha (com recursividade)

- Combina os movimentos da torre e do bispo.

### ♞ Cavalo (loops complexos)

- Movimenta-se em “L” (duas casas para cima e uma para a direita).
- Usa `for`, `continue` e `break` para controle do fluxo.

---

## 📌 Características

- Todas as quantidades de movimento são definidas no código-fonte.
- Sem entrada de usuário.
- Impressões padronizadas com `printf`, como:
  ```c
  printf("Cima\n");
  printf("Direita\n");
  ```

---

## 💡 Aprendizados aplicados

- ✅ Lógica com **recursividade**
- ✅ Estruturação com **loops aninhados**
- ✅ Controle de fluxo com **break** e **continue**
- ✅ Simulação de movimentos em **tabuleiros bidimensionais**
- ✅ Organização, legibilidade e comentários no código

---

## 🗂️ Estrutura do projeto

```
📁 xadrez/
├── xadrez.c
└── README.md
```

---

## 📄 Licença

Este projeto tem fins **educacionais** e pode ser utilizado livremente para aprendizado, estudos e práticas de programação em C.

---
