
#include <stdio.h>

int main() {
    float faturamento_sp = 67836.43;
    float faturamento_rj = 36678.66;
    float faturamento_mg = 29229.88;
    float faturamento_es = 27165.48;
    float faturamento_outros = 19849.53;
    float faturamento_total = faturamento_sp + faturamento_rj + faturamento_mg + faturamento_es + faturamento_outros;

    printf("Faturamento mensal por estado:\n");
    printf("SP - R$%.2f\n", faturamento_sp);
    printf("RJ - R$%.2f\n", faturamento_rj);
    printf("MG - R$%.2f\n", faturamento_mg);
    printf("ES - R$%.2f\n", faturamento_es);
    printf("Outros - R$%.2f\n", faturamento_outros);
    printf("\n");

    printf("Percentual de representacao por estado:\n");
    printf("SP - %.2f%%\n", faturamento_sp / faturamento_total * 100);
    printf("RJ - %.2f%%\n", faturamento_rj / faturamento_total * 100);
    printf("MG - %.2f%%\n", faturamento_mg / faturamento_total * 100);
    printf("ES - %.2f%%\n", faturamento_es / faturamento_total * 100);
    printf("Outros - %.2f%%\n", faturamento_outros / faturamento_total * 100);

    return 0;
}
