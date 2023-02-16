#include <stdio.h>

int main() {

int productCode, quantityItem;
float totalToPay;
printf("Digite o código do produto que você deseja: ");
scanf("%i", &productCode);
printf("A Quantidade do produto: ");
scanf("%i", &quantityItem);

    if (productCode == 1){
        totalToPay = 4 * quantityItem;
    }else if (productCode == 2){
            totalToPay = 4.5 * quantityItem;
    }else if(productCode == 3) {
        totalToPay = 5 * quantityItem;
    }else if(productCode == 4){
        totalToPay = 2 * quantityItem;
    }else if(productCode == 5) {
        totalToPay = 1.5 * quantityItem;
    }
    


printf("Total R$ %.2f", totalToPay);
    
}