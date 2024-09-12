#include <stdio.h>
int circle();
int rectangle();
int square();
char choose();
int main() {
    char again;
    do {
        choose();
        printf("Do you want to Continue(Y/N): ");
        scanf(" %c", &again);
    } while (again == 'Y' || again == 'y');
    return 0;
}
char choose() {
    char choosed;
    printf("1. Circle---> C \t 2. Rectangle---> R \t 3. Square---> S \nEnter the desired shape: ");
    scanf(" %c", &choosed);
    if (choosed == 'C') {
        circle();
    } else if (choosed == 'R') {
        rectangle();
    } else if (choosed == 'S') {
        square();
    } else {
        printf("Inputted character is incorrect\n");
    }
    return choosed;
}
int circle() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Perimeter of the circle is: %f\n", 2 * 3.14 * radius);
    printf("Area of the circle is: %f\n", 3.14 * radius * radius);
    return 0;
}
int square() {
    float side;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Perimeter of the square is: %f\n", 4 * side);
    printf("Area of the square is: %f\n", side * side);
    return 0;
}
int rectangle() {
    float length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Perimeter of the rectangle is: %f\n", 2 * (length + breadth));
    printf("Area of the rectangle is: %f\n", length * breadth);
    return 0;
}