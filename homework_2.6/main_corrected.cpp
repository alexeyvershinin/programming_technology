#include <stdio.h>

int main() {
    int d, m, y;
    printf("Enter the day of your birth:");
    scanf("%i", &d);
    printf("Enter the month of your birth:");
    scanf("%i", &m);
    printf("Enter the year of your birth:");
    scanf("%i", &y);

    if ((m == 1 && d >= 1 && d <= 31) || (m == 2 && d >= 1 && d <= 28) || (m == 3 && d >= 1 && d <= 31) ||
        (m == 4 && d >= 1 && d <= 30) || (m == 5 && d >= 1 && d <= 31) || (m == 6 && d >= 1 && d <= 30) ||
        (m == 7 && d >= 1 && d <= 31) || (m == 8 && d >= 1 && d <= 31) || (m == 9 && d >= 1 && d <= 30) ||
        (m == 10 && d >= 1 && d <= 31) || (m == 11 && d >= 1 && d <= 30) || (m == 12 && d >= 1 && d <= 31)) {
        // Проверка на високосный год
        if (y % 4 == 0) {
            printf("You were born in a leap year\n");
        } else {
            printf("Your year of birth is not a leap year\n");
        }

        // Проверка года по восточному календарю
        switch (y % 12) {
            case 0: {
                printf("You were born in the year of the monkey\n");
            }
                break;
            case 1: {
                printf("You were born in the year of the rooster\n");
            }
                break;
            case 2: {
                printf("You were born in the year of the dog\n");
            }
                break;
            case 3: {
                printf("You were born in the year of the pig\n");
            }
                break;
            case 4: {
                printf("You were born in the year of the rat\n");
            }
                break;
            case 5: {
                printf("You were born in the year of the bull\n");
            }
                break;
            case 6: {
                printf("You were born in the year of the tiger\n");
            }
                break;
            case 7: {
                printf("You were born in the year of the rabbit\n");
            }
                break;

            case 8: {
                printf("You were born in the year of the dragon\n");
            }
                break;
            case 9: {
                printf("You were born in the year of the snake\n");
            }
                break;
            case 10: {
                printf("You were born in the year of the horse\n");
            }
                break;
            case 11: {
                printf("You were born in the year of the goat\n");
            }
                break;
        }

        // Проверка знака зодиака
        if ((m == 12 && d > 19) || (m == 1 && d < 22)) {
            printf("You were born under the sign of Capricorn\n");
        } else if ((m == 1 && d > 20) || (m == 2 && d < 20)) {
            printf("You were born under the sign of Aquarius\n");
        } else if ((m == 2 && d > 19) || (m == 3 && d < 21)) {
            printf("You were born under the sign of Pisces\n");
        } else if ((m == 3 && d > 20) || (m == 4 && d < 21)) {
            printf("You were born under the sign of Aries\n");
        } else if ((m == 4 && d > 20) || (m == 5 && d < 21)) {
            printf("You were born under the sign of Taurus\n");
        } else if ((m == 5 && d > 20) || (m == 6 && d < 22)) {
            printf("You were born under the sign of Gemini\n");
        } else if ((m == 6 && d > 21) || (m == 7 && d < 23)) {
            printf("You were born under the sign of Cancer\n");
        } else if ((m == 7 && d > 22) || (m == 8 && d < 24)) {
            printf("You were born under the sign of Leo\n");
        } else if ((m == 8 && d > 23) || (m == 9 && d < 24)) {
            printf("You were born under the sign of Virgo\n");
        } else if ((m == 9 && d > 23) || (m == 10 && d < 24)) {
            printf("You were born under the sign of Libra\n");
        } else if ((m == 10 && d > 23) || (m == 11 && d < 23)) {
            printf("You were born under the sign of Scorpio\n");
        } else if ((m == 11 && d > 22) || (m == 12 && d < 22)) {
            printf("You were born under the sign of Sagittarius\n");
        }
    } else {
        printf("You entered the wrong date, which led to an error\n");
    }
}
