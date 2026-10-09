#include <stdio.h>

int main() {
    int num;

    printf("Введіть число: ");
    scanf("%d", &num);

    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int remainder = num % 100;
    int ones = num % 10;

    switch (hundreds) {
        case 1: printf("Сто "); break;
        case 2: printf("Двісті "); break;
        case 3: printf("Триста "); break;
        case 4: printf("Чотириста "); break;
        case 5: printf("П'ятсот "); break;
        case 6: printf("Шістсот "); break;
        case 7: printf("Сімсот "); break;
        case 8: printf("Вісімсот "); break;
        case 9: printf("Дев'ятсот "); break;
    }
    if (remainder >= 10 && remainder <= 19) {
        switch (remainder) {
            case 10: printf("десять"); break;
            case 11: printf("одинадцять"); break;
            case 12: printf("дванадцять"); break;
            case 13: printf("тринадцять"); break;
            case 14: printf("чотирнадцять"); break;
            case 15: printf("п'ятнадцять"); break;
            case 16: printf("шістнадцять"); break;
            case 17: printf("сімнадцять"); break;
            case 18: printf("вісімнадцять"); break;
            case 19: printf("дев'ятнадцять"); break;
        }
    } else {
        switch (tens) {
            case 2: printf("двадцять "); break;
            case 3: printf("тридцять "); break;
            case 4: printf("сорок "); break;
            case 5: printf("п'ятдесят "); break;
            case 6: printf("шістдесят "); break;
            case 7: printf("сімдесят "); break;
            case 8: printf("вісімдесят "); break;
            case 9: printf("дев'яносто "); break;
        }

    switch (ones) {
        case 1: printf("Один "); break;
        case 2: printf("Два "); break;
        case 3: printf("Три "); break;
        case 4: printf("Чотири "); break;
        case 5: printf("П'ять "); break;
        case 6: printf("Шість "); break;
        case 7: printf("Сім "); break;
        case 8: printf("Вісім "); break;
        case 9: printf("Дев'ять "); break;
    }
    return 0;
}}