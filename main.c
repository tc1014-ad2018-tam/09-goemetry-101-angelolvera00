/*
 * This program was made to serve as a calculator of perimeters, volumes and surfaces of Triangles, Squares and Diamonds.
 *
 * Author: Angel Olvera
 * September 13, 20118
 * Mail: angelolvera00@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>

// Performs the operation for the perimeter of a triangle
double TrianglePerimeter(double side) {
    return (3*side);
}

// Performs the operation for the perimeter of a square
double SquarePerimeter(double side) {
    return (4*side);
}

// Performs the operation for the perimeter of a diamond
double DiamondPerimeter(double side) {
    return (4*side);
}

// I ask for the length of the size and receive the information
double info() {
    double side;
    printf("Give me the side\n");
    scanf("%lf", &side);
    return side;
}

// First menu
int Menu1() {

    char selection;


    while (1) {

        // Asks the user for an option and based on that option, the perimeter of each figure will be calculated because of the functions previously stated
        printf("Select:\nA. Triangle.\nB. Square.\nC. Diamond.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Checks what the user selected
        switch(selection) {
            case 'A':
                printf("The perimeter is equal to %lf\n\n", TrianglePerimeter(info()));
                break;

            case 'B':
                printf("The perimeter is equal to %lf\n\n", SquarePerimeter(info()));
                break;

            case 'C':
                printf("The perimeter is equal to %lf\n\n", DiamondPerimeter(info()));
                break;

            case 'X':
                return 0;
                break;

            default:
                printf("Invalid.\n\n");
        }
    }

}

// Performs the operation for the surface of a triangle
double TriangleSurface(double side) {
    return ((side*side)*0.5);
}

// Performs the operation for the surface of a square
double SquareSurface(double side) {
    return (side*side);
}

// Performs the operation for the surface of a diamond by asking for the 2 diagonals, multiplying them  and dividing them by 2
double DiamondSurface(double D, double d) {
    return ((D*d)*.5);
}

// I ask the user to write the values of D and d for the diamond, as they are needed to calculate its surface
double Ddvalues() {
    double D;
    double d;
    printf("Enter the length of D and d: \n");
    scanf("%lf, %lf", &D, &d);
    return D;
    return d;
}

// Second menu
int Menu2() {

    char selection;


    while (1) {

        // Asks the user for an option and based on that option, the surface of each figure will be calculated because of the functions previously stated.
        printf("Select:\nA. Triangle.\nB. Square.\nC. Diamond.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Checks what the user selected
        switch(selection) {
            case 'A':
                printf("The surface is equal to %lf\n\n", TriangleSurface(info()));
                break;

            case 'B':
                printf("The surface is equal to %lf\n\n", SquareSurface(info()));
                break;

            case 'C':
                printf("The surface is equal to %lf\n\n", DiamondSurface(info(), Ddvalues()));
                break;

            case 'X':
                return 0;
                break;

            default:
                printf("Invalid.\n\n");
        }
    }

}

// Performs the operation for the volume of each figure, multiplies the surface by the length.
double Volumecalculator(double surface, double length) {
    return (surface*length);
}

// Asks the user for the length
double lengthvalue() {
    double Length;
    printf("Enter the length\n");
    scanf("%lf", Length);
    return Length;
}

// Third menu
int Menu3() {

    char selection;
    while (1) {

        // Asks the user for an option and based on that option, the volume of each figure will be calculated because of the functions previously stated.
        printf("Select:\nA.Triangular prism.\nB. Square Prism.\nC. Romboidal prism.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Switch statement to check the user input.
        switch(selection) {
            case 'A':
                printf("The volume is equal to %lf\n\n", Volumecalculator(TriangleSurface(info()), lengthvalue()));
                break;

            case 'B':
                printf("The volume is equal to %lf\n\n", Volumecalculator(SquareSurface(info()), lengthvalue()));
                break;

            case 'C':
                printf("The volume is equal to %lf\n\n", Volumecalculator(DiamondSurface(info(), Ddvalues()), lengthvalue()));
                break;

            case 'X':
                return 0;
                break;

            default:
                printf("Invalid.\n\n");
        }
    }

}

// Main menu of the program
int MAINMENU() {

    char selection;

    while (1) {

        // I ask the user to select an option, depending on which option they choose, they will be redirected to the menu that they selected
        printf("Select:\nA. Perimeter.\nB. Surface.\nC. Volume.\nX. Exit.\n");
        scanf(" %c", &selection);


        switch(selection) {
            case 'A':
                // Goes to menu1
                Menu1();
                break;
            case 'B':
                // Goes to menu2
                Menu2();
                break;
            case 'C':
                // Goes to menu3
                Menu3();
                break;
            case 'X':
                // Ends the program
                printf("Shutting down...");
                exit(0);
                break;
            default:
                printf("Invalid.\n\n");
        }
    }

}

// The main function that starts all programs and gives you the first choice.
int main() {
    MAINMENU();
    return 0;
}