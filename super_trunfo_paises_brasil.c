
#include <stdio.h>
#include <string.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4

// Definindo uma estrutura para as cartas das cidades
struct Cidade {
    char codigo[4]; // Código da cidade (ex: A01)
    char nome[30];  // Nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para cadastrar uma cidade com dados reais
void cadastrarCidade(struct Cidade *cidade, char codigo[4], char nome[], int populacao, float area, float pib, int pontos_turisticos) {
    strcpy(cidade->codigo, codigo);
    strcpy(cidade->nome, nome);
    cidade->populacao = populacao;
    cidade->area = area;
    cidade->pib = pib;
    cidade->pontos_turisticos = pontos_turisticos;
}

// Função para exibir os dados de uma cidade
void exibirCidade(struct Cidade cidade) {
    printf("Cidade %s - %s:
", cidade.codigo, cidade.nome);
    printf("População: %d
", cidade.populacao);
    printf("Área: %.2f km²
", cidade.area);
    printf("PIB: %.2f bilhões
", cidade.pib);
    printf("Pontos turísticos: %d
", cidade.pontos_turisticos);
    printf("\n");
}

int main() {
    // Criando um array para armazenar as cidades
    struct Cidade cidades[ESTADOS * CIDADES_POR_ESTADO];

    // Cadastrando cidades reais do Brasil
    cadastrarCidade(&cidades[0], "A01", "São Paulo", 12325232, 1521.11, 699.28, 35);
    cadastrarCidade(&cidades[1], "A02", "Campinas", 1213792, 794.43, 92.6, 12);
    cadastrarCidade(&cidades[2], "A03", "Santos", 433991, 280.67, 50.7, 18);
    cadastrarCidade(&cidades[3], "A04", "Ribeirão Preto", 720116, 650.9, 45.9, 8);

    cadastrarCidade(&cidades[4], "B01", "Rio de Janeiro", 6747815, 1200.27, 365.1, 40);
    cadastrarCidade(&cidades[5], "B02", "Niterói", 515317, 133.9, 29.3, 10);
    cadastrarCidade(&cidades[6], "B03", "Petrópolis", 306191, 795.79, 15.3, 25);
    cadastrarCidade(&cidades[7], "B04", "Volta Redonda", 273988, 182.8, 22.6, 6);

    cadastrarCidade(&cidades[8], "C01", "Belo Horizonte", 2375268, 331.4, 260.7, 20);
    cadastrarCidade(&cidades[9], "C02", "Uberlândia", 706597, 4115.2, 55.9, 15);
    cadastrarCidade(&cidades[10], "C03", "Juiz de Fora", 573285, 1436.85, 29.1, 12);
    cadastrarCidade(&cidades[11], "C04", "Montes Claros", 413487, 3569.98, 18.4, 10);

    cadastrarCidade(&cidades[12], "D01", "Salvador", 2900319, 693.8, 130.9, 28);
    cadastrarCidade(&cidades[13], "D02", "Feira de Santana", 624107, 1337.17, 26.3, 8);
    cadastrarCidade(&cidades[14], "D03", "Ilhéus", 159923, 1584.7, 5.3, 16);
    cadastrarCidade(&cidades[15], "D04", "Porto Seguro", 148686, 2308.19, 2.8, 12);

    // Exibindo os dados das cidades cadastradas
    printf("\n--- Dados das Cidades Cadastradas ---\n");
    for (int i = 0; i < ESTADOS * CIDADES_POR_ESTADO; i++) {
        exibirCidade(cidades[i]);
    }

    return 0;
}
