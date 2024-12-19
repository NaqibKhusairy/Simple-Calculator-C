#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pilihan, numfor, no;
float Y, ans, N;
int jwp;

void Option() {
    printf("*********************************************\n");
    printf("\tWELCOME TO THE WORLD OF COUNTING\n");
    printf("*********************************************\n");
    printf("Which operation do you want to perform? : \n");
    printf("Press 0 for exit\nPress 1 for Addition\n");
    printf("Press 2 for Subtraction\nPress 3 for Multiplication\n");
    printf("Press 4 for Division\nPress 5 for Power Calculation\n");
    printf("Press 6 for Square Root\nPress 7 for Factorial Calculator\n");
    printf("*********************************************\n");
    printf("Press Option: ");
    scanf("%d", &pilihan);
}

void kosong() {
    printf("*********************************************\n");
    printf("\tTQ For Using THE WORLD OF COUNTING\n");
    printf("*********************************************\n");
}

void satu() {
    ans = 0;
    printf("*********************************************\n");
    printf("\tWELCOME TO ADDITION CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter number of items: ");
    scanf("%d", &numfor);
    for (no = 1; no <= numfor; no++) {
        printf("Enter Number %d: ", no);
        scanf("%f", &Y);
        ans += Y;
    }
    printf("The Total of Addition of all %d Numbers is: %.2f\n\n", numfor, ans);
}

void dua() {
    printf("*********************************************\n");
    printf("\tWELCOME TO SUBTRACTION CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter number of items: ");
    scanf("%d", &numfor);
    printf("Enter Number 1: ");
    scanf("%f", &Y);
    ans = Y;
    for (no = 2; no <= numfor; no++) {
        printf("Enter Number %d: ", no);
        scanf("%f", &Y);
        ans -= Y;
    }
    printf("The Total of Subtraction of all %d Numbers is: %.2f\n\n", numfor, ans);
}

void tiga() {
    printf("*********************************************\n");
    printf("\tWELCOME TO MULTIPLICATION CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter number of items: ");
    scanf("%d", &numfor);
    printf("Enter Number 1: ");
    scanf("%f", &Y);
    ans = Y;
    for (no = 2; no <= numfor; no++) {
        printf("Enter Number %d: ", no);
        scanf("%f", &Y);
        ans *= Y;
    }
    printf("The Total of Multiplication of all %d Numbers is: %.2f\n\n", numfor, ans);
}

void empat() {
    printf("*********************************************\n");
    printf("\tWELCOME TO DIVISION CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter number of items: ");
    scanf("%d", &numfor);
    printf("Enter Number 1: ");
    scanf("%f", &Y);
    ans = Y;
    for (no = 2; no <= numfor; no++) {
        printf("Enter Number %d: ", no);
        scanf("%f", &Y);
        ans /= Y;
    }
    printf("The Total of Division of all %d Numbers is: %.2f\n\n", numfor, ans);
}

void lima() {
    ans = 1;
    printf("*********************************************\n");
    printf("\tWELCOME TO POWER CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter The Base Number: ");
    scanf("%f", &Y);
    printf("Enter The Exponent Number: ");
    scanf("%f", &N);
    ans = pow(Y, N);
    printf("%.2f ^ %.2f = %.2f\n\n", Y, N, ans);
}

void enam() {
    printf("*********************************************\n");
    printf("\tWELCOME TO SQUARE ROOT CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter The Number: ");
    scanf("%f", &Y);
    ans = sqrt(Y);
    printf("Square root of %.2f = %.2f\n\n", Y, ans);
}

void tujuh() {
    printf("*********************************************\n");
    printf("\tWELCOME TO FACTORIAL CALCULATOR\n");
    printf("*********************************************\n");
    printf("Enter The Number: ");
    scanf("%d", &no);
    jwp = 1;
    for (int i = 1; i <= no; i++) {
        jwp *= i;
    }
    printf("Factorial of %d = %d\n\n", no, jwp);
}

void notInChoose() {
    printf("Please press the available option only!!!\n\n");
}

void cls() {
    system("cls");
}

void pause() {
    printf("Press Enter to continue...");
    getchar();
    getchar();
}

void CalcFunction() {
    if (pilihan == 0) {
        cls();
        kosong();
    } else if (pilihan == 1) {
        cls();
        satu();
        pause();
        cls();
    } else if (pilihan == 2) {
        cls();
        dua();
        pause();
        cls();
    } else if (pilihan == 3) {
        cls();
        tiga();
        pause();
        cls();
    } else if (pilihan == 4) {
        cls();
        empat();
        pause();
        cls();
    } else if (pilihan == 5) {
        cls();
        lima();
        pause();
        cls();
    } else if (pilihan == 6) {
        cls();
        enam();
        pause();
        cls();
    } else if (pilihan == 7) {
        cls();
        tujuh();
        pause();
        cls();
    } else {
        cls();
        notInChoose();
        cls();
    }
}

int main() {
    do {
        Option();
        CalcFunction();
    } while (pilihan != 0);

    return 0;
}
