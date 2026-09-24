#include <stdio.h>

double convertF(double temp, char scale);
double convertC(double temp, char scale);
double convertK(double temp, char scale);

int main() {

    double temperature;
    printf("Enter the Temperature value: ");
    scanf("%lf", &temperature);

    char scale;
    printf("Enter the original scale (F/C/K): ");
    scanf(" %c", &scale);

    char newscale;
    printf("Enter the scale to convert it to (F/C/K): ");
    scanf(" %c", &newscale);

    double result;
    double C;
    if (scale == 'F') {
        result = convertF(temperature, newscale);
        C = convertF(temperature, 'C');
    } else if (scale == 'C') {
        result = convertC(temperature, newscale);
        C = temperature;
    } else if (scale == 'K') {
        result = convertK(temperature, newscale);
        C = convertK(temperature, 'C');
    } else {
        printf("Invalid original scale.\n");
        return 1;
    }

    printf("Converted Temperature: %.2lf %c\n", result, newscale);
    if (C < 0.00) {
        printf("Temperature catagory: Freezing\n");
        printf("Weather advisory: Stay indoors.\n");
    } else if (C < 10.00) {
        printf("Temperature catagory: Cold\n");
        printf("Weather advisory: Dress Warm.\n");
    } else if (C < 25.00) {
        printf("Temperature catagory: Comfortable\n");
        printf("Weather advisory: It's a Beautiful Day!\n");
    } else if (C < 35.00) {
        printf("Temperature catagory: Hot\n");
        printf("Weather advisory: Drink lots of water!\n");
    } else {
        printf("Temperature catagory: Extreme Heat\n");
        printf("Weather advisory: Stay indoors.\n");
    }
    return 0;
}

double convertF(double temp, char scale) {
    if (scale == 'C') return (temp - 32) * (5.0/9.0);
    if (scale == 'K') return (temp - 32) * (5.0/9.0) + 273.15;
    return temp;
}

double convertC(double temp, char scale) {
    if (scale == 'F') return temp * (9.0/5.0) + 32;
    if (scale == 'K') return temp + 273.15;
    return temp;
}

double convertK(double temp, char scale) {
    if (scale == 'C') return temp - 273.15;
    if (scale == 'F') return (temp - 273.15) * (9.0/5.0) + 32;
    return temp;
}
