#include <iostream>
#include <cmath>

// Function to calculate the area of the square
double findSquareArea(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    // Calculate the side length of the square
    double side = std::max(std::abs(x1 - x2), std::abs(y1 - y3));

    // Calculate and return the area of the square
    return side * side;
}

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;

    // Input coordinates for one test case
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // Calculate and display the area of the square for the provided test case
    double area = findSquareArea(x1, y1, x2, y2, x3, y3, x4, y4);
    std::cout << static_cast<int>(area) << std::endl; // Cast to int to remove decimal part

    return 0;
}
