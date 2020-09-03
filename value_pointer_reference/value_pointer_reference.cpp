/*
In this demo the basics of variables are explored. The difference between
pointers references and variables.
*/
#include <iostream>

int main()
{
	// Start by creating an integer variable without assigning it a value. Then 
	// print the value and the memory location.
	int val = 0;
	std::cout << "=============int val==============================" << std::endl;
	std::cout << " value: " << val << std::endl;  // value: 0
	std::cout << "&value: " << &val << std::endl;  // &value: <memory location 1>
	// Next assign the variable a value and print the value and the memory 
	// location.
	val = 1;
	std::cout << "=============val =1================================" << std::endl;
	std::cout << " value: " << val << std::endl;  // value: 1
	std::cout << "&value: " << &val << std::endl;  // &value: <memory location 1>

	int* ptr = NULL;
	std::cout << "=============int* ptr==============================" << std::endl;
	// The ptr variable is not set, and is a NULL Pointer. 
	std::cout << " Pointer: " << ptr << std::endl;  // Pointer: <memory location 2>
	if (ptr) { std::cout << "Null pointer." << std::endl; }
	else { std::cout << "Not a null pointer." << std::endl; }

	ptr = &val;
	std::cout << "=============ptr = &val============================" << std::endl;
	// Print the value of the pointer, or the memory address of val.
	std::cout << " Pointer: " << ptr << std::endl;  // Pointer: <memory location 1>
	// Print the value that the pointer is pointing to.
	std::cout << "*Pointer: " << *ptr << std::endl;  // *Pointer: 1
	// Print the memory address of the pointer.
	std::cout << "&Pointer: " << &ptr << std::endl;  // &Pointer: <memory address 3>

	int& ref = val;
	std::cout << "=============int& ref = val========================" << std::endl;
	std::cout << " Reference: " << ref << std::endl;
	std::cout << "&Reference: " << &ref << std::endl;

	return 0;
}