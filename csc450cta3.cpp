#include <iostream>

int main() {
    // Prompt the user to enter three integer values
    std::cout << "Enter three integer values:\n";

    // Store the values into three different variables
    int value1, value2, value3;
    std::cin >> value1 >> value2 >> value3;

    // Create integer pointers to dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display the contents of variables and pointers
    std::cout << "Contents of variables:\n";
    std::cout << "Value1: " << value1 << "\n";
    std::cout << "Value2: " << value2 << "\n";
    std::cout << "Value3: " << value3 << "\n\n";

    std::cout << "Contents of pointers:\n";
    std::cout << "Ptr1: " << *ptr1 << "\n";
    std::cout << "Ptr2: " << *ptr2 << "\n";
    std::cout << "Ptr3: " << *ptr3 << "\n\n";

    // Deallocate the memory using the delete operator
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
