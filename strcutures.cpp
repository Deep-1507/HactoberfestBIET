#include <iostream>
#include <string>

// Define a structure to represent a student
struct Student {
    std::string name;
    int age;
    char grade;
};

int main() {
    // Declare and initialize instances of the Student structure
    Student student1;
    student1.name = "Deependra";
    student1.age = 18;
    student1.grade = 'A';

    Student student2;
    student2.name = "Adarsh";
    student2.age = 19;
    student2.grade = 'B';

    // Display information about the students
    std::cout << "Student 1:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Grade: " << student1.grade << std::endl;

    std::cout << "\nStudent 2:" << std::endl;
    std::cout << "Name: " << student2.name << std::endl;
    std::cout << "Age: " << student2.age << std::endl;
    std::cout << "Grade: " << student2.grade << std::endl;

    return 0;
}
