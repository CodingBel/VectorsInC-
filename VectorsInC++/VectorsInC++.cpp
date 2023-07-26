/*
*  This program is about using and declaring vectors in C++. A vector is basically a class 
*  and as a class it has a lot of bulit-in fucntions for dynamc memory allocation, insertion....
*  
*  The main advantage or using vectors instead of pointers * dynamic memory allocation is becauase 
*  of the fact that in the case of manual dynamic memory deallocation, the programmer is mandted 
*  to deallocate the memory explicity and failing to do so would result in memory leaks. 
*  However, when working with vectors, this is done automatically by the compiler. 
* 
*  
*/

#include <iostream>
#include <vector>

int main() {
	std::vector <int> vecArr;	  // Declare an integer vector 

	std::cout <<"The size of the vector at the begining is: " << vecArr.size() <<" Bytes"<< std::endl;
	for (int i = 0; i < 5; i++) { // A loop to populate the integer vector 
		vecArr.push_back(10 + i); // A vector Function to add elements to our vector 
	}

	std::cout << "\nThe values populated in the vecotor are: " << std::endl; 
	for (int i = 0; i < vecArr.size(); i++)
		std::cout << vecArr.at(i) << std::endl; 
	std::cout <<"The current size of the vector is: " << vecArr.size() <<" Bytes" << std::endl;
	
	vecArr.insert(vecArr.begin() + 2, 55);	// Syntax to insert a value at a specified location 
	std::cout << "\nThe size of the vector after the new insertion is: " << vecArr.size() << std::endl; 

	std::cout << "The newly populated vector's values are:" << std::endl;
	for (int i = 0; i < vecArr.size(); i++)
		std::cout << vecArr.at(i) << std::endl;

	vecArr.erase(vecArr.begin() + 2); 
	std::cout << "\nThe size of the vector after deletion is: " << vecArr.size() << std::endl; 

	std::cout << "\n\nThe current values of the vector are: " << std::endl; 
	for (int i = 0; i < vecArr.size(); i++)
		std::cout << vecArr.at(i) << std::endl;

	return 0; 
 }