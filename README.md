# priceCompare 📊

O **priceCompare** é um aplicativo de linha de comando (CLI) desenvolvido em **Linguagem C** projetado para monitorar, analisar e relatar a variação de preços de produtos. O sistema automatiza o cálculo do impacto percentual entre o valor antigo e o valor novo de um item, classificando-o instantaneamente e gerando um relatório formatado direto no terminal.

Este projeto foi desenvolvido com foco no tratamento robusto de entradas de dados em C, lidando de forma eficiente com a leitura de strings compostas (com espaços) e gerenciamento de buffers de teclado.

---

## ✨ Funcionalidades

* 📝 **Entrada Inteligente:** Permite o cadastro de nomes de produtos compostos (ex: "Arroz Integral", "Café Pilão") sem quebrar a execução.
* 📈 **Cálculo de Delta Percentual:** Mede com precisão a oscilação matemática dos preços.
* 🏷️ **Classificação Automática (Status):** Identifica o comportamento do preço como:
  * `AUMENTO` (Variação positiva)
  * `REDUÇÃO` (Variação negativa)
  * `ESTÁVEL` (Sem variação)
* 📋 **Relatório Visual:** Renderiza uma tabela limpa e formatada no terminal para fácil leitura dos dados.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem C** (Padrão C11/C99)
* **GCC** (GNU Compiler Collection) para compilação

---

## 🚀 Como Compilar e Executar

Certifique-se de ter um compilador C instalado em sua máquina (como o MinGW no Windows ou GCC nativo no Linux/macOS).

### 1. Clonar o repositório
```bash
git clone https://github.com/klskelison/priceCompare
cd priceCompare
```

### 2. Compilar o código
Abra o terminal na pasta do projeto e execute o comando correspondente ao seu sistema operacional:

* **Windows:**
  ```bash
  gcc main.c -o priceCompare.exe
  ```
* **Linux / macOS:**
  ```bash
  gcc main.c -o priceCompare
  ```

### 3. Executar o programa
* **Windows:**
  ```bash
  .\priceCompare.exe
  ```
* **Linux / macOS:**
  ```bash
  ./priceCompare
  ```

---

## 📋 Exemplo de Uso (Visualização do Terminal)

```text
=== DADOS DO PRODUTO 1 ===
Nome do produto: Monitor Gamer 24
Preco antigo (R$): 1000.00
Preco novo (R$): 1200.00

======================================================
            RELATORIO DE VARIACAO DE PRECOS           
======================================================
Produto: Monitor Gamer 24
Preco Antigo: R$ 1000.00 | Preco Novo: R$ 1200.00
Variacao: 20.00% - Status: AUMENTO
------------------------------------------------------
```

---

## 🧠 Conceitos Técnicos Aplicados

Durante o desenvolvimento deste software, foram consolidados os seguintes conceitos:
* **Expressões de Varredura (*Scanset*):** Uso do modificador ` %[^\n]` no `scanf` para permitir a leitura de espaços em branco e limpeza automática de quebras de linha (`\n`) residuais no buffer.
* **Estruturas de Controle:** Aplicação de condicionais encadeadas (`if-else`) para classificação lógica de dados.
* **Formatação de Saída:** Uso de delimitadores decimais (`%.2f`) para exibição monetária padronizada.
