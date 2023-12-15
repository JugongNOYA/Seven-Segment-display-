#include <stdio.h>

void display(int num){
    switch (num){
        case 0:
            printf("A = 1|B = 1|C = 1|D = 1|E = 1|F = 1|G = 0|\n");
            printf(" ==\n");
            printf("|  |\n");
            printf("|  |\n");
            printf("\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" ==\n");
            break;
        case 1:
        printf("A = 0|B = 1|C = 1|D = 0|E = 0|F = 0|G = 0|\n");
            printf("\n");
            printf("   |\n");
            printf("   |\n");
            printf("\n");
            printf("   |\n");
            printf("   |\n");
            printf("\n");
            break;
        case 2:
        printf("A = 1|B = 1|C = 0|D = 1|E = 1|F = 0|G = 1|\n");
            printf(" ==\n");
            printf("   |\n");
            printf("   |\n");
            printf(" ==\n");
            printf("|   \n");
            printf("|   \n");
            printf(" ==\n");
            break;
        case 3:
        printf("A = 1|B = 1|C = 1|D = 1|E = 0|F = 0|G = 1|\n");
            printf(" ==\n");
            printf("   |\n");
            printf("   |\n");
            printf(" ==\n");
            printf("   |\n");
            printf("  |\n");
            printf(" ==\n");
            break;
        case 4:
        printf("A = 0|B = 1|C = 1|D = 0|E = 0|F = 1|G = 1|\n");
            printf("\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" ==\n");
            printf("   |\n");
            printf("   |\n");
            printf("\n");
            break;
        case 5:
        printf("A = 1|B = 0|C = 1|D = 1|E = 0|F = 1|G = 0|\n");
            printf(" ==\n");
            printf("|   \n");
            printf("|   \n");
            printf(" ==\n");
            printf("   |\n");
            printf("   |\n");
            printf(" ==\n");
            break;
        case 6:
        printf("A = 1|B = 0|C = 1|D = 1|E = 1|F = 1|G = 1|\n");
            printf(" ==\n");
            printf("|   \n");
            printf("|   \n");
            printf(" ==\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" ==\n");
            break;
        case 7:
        printf("A = 1|B = 1|C = 1|D = 0|E = 0|F = 0|G = 0|\n");
            printf(" ==\n");
            printf("   |\n");
            printf("   |\n");
            printf("   \n");
            printf("   |\n");
            printf("   |\n");
            printf("\n");
            break;
        case 8:
            printf("A = 1|B = 1|C = 1|D = 1|E = 1|F = 1|G = 1|\n");
            printf(" ==\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" ==\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" ==\n");
            break;
        case 9:
            printf("A = 1|B = 1|C = 1|D = 1|E = 0|F = 1|G = 1|\n");
            printf(" ==\n");
            printf("|  |\n");
            printf("|  |\n");
            printf(" == \n");
            printf("   |\n");
            printf("   |\n");
            printf(" ==\n");
            break;
        default:
        printf("Program ini Hanya Bisa Memproses Sampai Angka Biner 1 0 0 1 Saja");
    }
}
int main()
{
    int num1, num2, num3, num4;
    printf("====================================\n");
    printf(" Masukkan 4 angka biner (1/0): "); 
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    int num_decimal =num1 * 8 + num2 * 4 + num3 * 2 + num4 * 1;

    display(num_decimal);

    return 0;
}