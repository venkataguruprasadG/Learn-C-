#include <iostream>

int main()
{
    int rollNumber;
    std::cin >> rollNumber;

    char gradeSection;
    std::cin >> gradeSection;

    float cgpa;
    std::cin >> cgpa;

    std::cout << "Roll Number: " << rollNumber << std::endl;
    std::cout << "Grade Section: " << gradeSection << std::endl;
    std::cout << "CGPA: " << cgpa << std::endl;

    return 0;
}