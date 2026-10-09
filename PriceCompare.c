#include <stdio.h>

int main() {

    // 1. DECLARAÇÃO DAS VARIÁVEIS
    // Produto 1
    char nomeProduto1[50];
    float precoAntigo1, precoNovo1, variacao1;

    // Produto 2
    char nomeProduto2[50];
    float precoAntigo2, precoNovo2, variacao2;

    // Produto 3
    char nomeProduto3[50];
    float precoAntigo3, precoNovo3, variacao3;

    // 2. ENTRADA DE DADOS

    // Produto 1
    printf("=== DADOS DO PRODUTO 1 ===\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", nomeProduto1);
    printf("Preco antigo (R$): ");
    scanf("%f", &precoAntigo1);
    printf("Preco novo (R$): ");
    scanf("%f", &precoNovo1);

    // Produto 2
    printf("\n=== DADOS DO PRODUTO 2 ===\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", nomeProduto2);
    printf("Preco antigo (R$): ");
    scanf("%f", &precoAntigo2);
    printf("Preco novo (R$): ");
    scanf("%f", &precoNovo2);

    // Produto 3
    printf("\n=== DADOS DO PRODUTO 3 ===\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", nomeProduto3);
    printf("Preco antigo (R$): ");
    scanf("%f", &precoAntigo3);
    printf("Preco novo (R$): ");
    scanf("%f", &precoNovo3);

    // 3. PROCESSAMENTO (CÁLCULO DA VARIAÇÃO PERCENTUAL)
    variacao1 = ((precoNovo1 - precoAntigo1) / precoAntigo1) * 100;
    variacao2 = ((precoNovo2 - precoAntigo2) / precoAntigo2) * 100;
    variacao3 = ((precoNovo3 - precoAntigo3) / precoAntigo3) * 100;

    // 4. EXIBIÇÃO DOS RESULTADOS (RELATÓRIO FINAL)
    printf("\n======================================================\n");
    printf("            RELATORIO DE VARIACAO DE PRECOS           \n");
    printf("======================================================\n");

    // Exibição Produto 1
    printf("Produto: %s\n", nomeProduto1);
    printf("Preco Antigo: R$ %.2f | Preco Novo: R$ %.2f\n", precoAntigo1, precoNovo1);
    printf("Variacao: %.2f%% - Status: ", variacao1);
    if (variacao1 > 0) {
        printf("AUMENTO\n");
    } else if (variacao1 < 0) {
        printf("REDUÇÃO\n");
    } else {
        printf("ESTÁVEL\n");
    }
    printf("------------------------------------------------------\n");

    // Exibição Produto 2
    printf("Produto: %s\n", nomeProduto2);
    printf("Preco Antigo: R$ %.2f | Preco Novo: R$ %.2f\n", precoAntigo2, precoNovo2);
    printf("Variacao: %.2f%% - Status: ", variacao2);
    if (variacao2 > 0) {
        printf("AUMENTO\n");
    } else if (variacao2 < 0) {
        printf("REDUÇÃO\n");
    } else {
        printf("ESTÁVEL\n");
    }
    printf("------------------------------------------------------\n");

    // Exibição Produto 3
    printf("Produto: %s\n", nomeProduto3);
    printf("Preco Antigo: R$ %.2f | Preco Novo: R$ %.2f\n", precoAntigo3, precoNovo3);
    printf("Variacao: %.2f%% - Status: ", variacao3);
    if (variacao3 > 0) {
        printf("AUMENTO\n");
    } else if (variacao3 < 0) {
        printf("REDUÇÃO\n");
    } else {
        printf("ESTÁVEL\n");
    }
    printf("======================================================\n");

    printf("\nPressione ENTER para sair...");
    getchar(); // Limpa o "Enter" pendente do último scanf
    getchar(); // Espera você pressionar Enter de verdade antes de fechar
    
    return 0;
}