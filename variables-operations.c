#include <stdio.h>

int main() {
    //rectangle
    int height;
    int length;
    printf("Enter the rectangle height: ");
    scanf("%d", &height);
    printf("Enter the rectangle length: ");
    scanf("%d", &length);
    int area = height*length;
    int perimeter = height+height+length+length;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    //temperature
    int fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    int celsius = (fahrenheit-32)/1.8;
    printf("\n%d°F = ", fahrenheit);
    printf("%d°C\n", celsius);

    //minutes and hours
    int mins = 349;
    int hours = mins/60;
    int extramins = mins%60;
    printf("\n%d minutes is equal to ", mins);
    printf("%d hours and ", hours);
    printf("%d minutes.\n", extramins);
}