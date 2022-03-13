#include <stdio.h>

int main() {
    /* Declaring the quantity variables */
    int qIphone = 0;
    int qIpad = 0;
    int qAirpods = 0;

    /* Declaring the variables that hold the prices */
    double pIphone = 0.0;
    double pIpad = 0.0;
    double pAirpods = 0.0;

    char student;

    double studentDiscount = 0.0;
    double comboDiscount = 0.0;
    double totalDiscount = 0.0;
    double totalAmount = 0.0;

    /* Taking the information of iPhones */
    printf("Enter the number of iPhones: ");
    scanf(" %d", &qIphone);
    printf("Enter the price of an iPhone: ");
    scanf(" %lf", &pIphone);

    /* Taking the information of Airpods */
    printf("Enter the number of airpods: ");
    scanf(" %d", &qAirpods);
    printf("Enter the price of an airpod: ");
    scanf(" %lf", &pAirpods);

    /* Taking the information of iPads */
    printf("Enter the number of iPads: ");
    scanf(" %d", &qIpad);
    printf("Enter the price of an iPad: ");
    scanf(" %lf", &pIpad);

    printf("Are you a student? ( Y or y / N or n): ");
    scanf(" %c", &student);
    
    if (student == 'y' || student == 'Y') {
        printf("Code STUDENT has been applied.\n");
        studentDiscount = 15.00;
    } else {
        studentDiscount = 0.0;
    }
    
    if (qIphone >= 2 && qAirpods >= 1) {
        printf("Code Summer iPhone-Airpods has been applied.\n");
        comboDiscount = 10.00;
    } else if (qIpad >= 1 && qAirpods >= 1) {
        printf("Code Summer iPad-Airpods has been applied.\n");
        comboDiscount = 5.00;
        
    } else {
        comboDiscount = 0.0;
    }

    totalDiscount = studentDiscount + comboDiscount;
    
    totalAmount = ( (qIphone * pIphone) + (qIpad * pIpad) + (qAirpods * pAirpods) ) * ((100.00 - totalDiscount)/100.00);
    
    printf("\n****************** Receipt ******************\n");
    printf("\t\t\tItem\t\tPrice\t\tQuantity\n");
    printf("\t\t\tiphone\t\t%.2lf\t\t%d\n", pIphone, qIphone);
    printf("\t\t\tAirpods\t\t%.2lf\t\t%d\n", pAirpods, qAirpods);
    printf("\t\t\tiPads\t\t%.2lf\t\t%d\n", pIpad, qIpad);
    printf("----------------------------------------------\n");
    
    printf("Discount Applied: %.2lf%%\n", totalDiscount);
    printf("Total: $%.2lf\n", totalAmount);
    return 0;
}

/*
1. Ask the quantity of Iphone, Ipad, Airpods
2. Ask the price of Iphone, Ipad, Airpods
3. Ask the customer whether he is a student or not: 
4. If the customer is a student give him 15% discount. else discount remains zero.


*/