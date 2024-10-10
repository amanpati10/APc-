//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include <iostream>
#include <vector>

int main() {
    int n;

    // Take the size of the array from the user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> elements(n);

    // Input the elements
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
    }

    int target;
    // Input the element to search for
    std::cout << "Enter the element to find its index: ";
    std::cin >> target;

    // Search for the element and print the index
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (elements[i] == target) {
            std::cout << "Element " << target << " found at index: " << i << std::endl;
            found = true;
            break; // Exit loop after finding the first occurrence
        }
    }

    if (!found) {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
