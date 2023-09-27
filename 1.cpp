#include <iostream>
// The line above is the preprocessor. It adds the headers file iostream to the code. 

int main() //Main function. The other ones will be called from this one. Most C++ programs have this function.
{ // Begining of a code block. 
	std::cout << "First code written by me!" << std::endl;
	/*
		std -> allows us to use the standard functions of C++.
		cout -> data output command. It prints on the standard output (screen) the message specified within quotation marks because it's a string.
		endl -> inserts a line breaker in the string.
	*/
	system("PAUSE");
	return 0;
	/*
		system -> allows us to use the System Functions, related to the O.S.
		PAUSE -> Pauses the Command Prompt window and asks for a random key to unpause it.
		return 0 -> Returns to the Windows shell if the code runned without errors.
	*/
} // End of a code block.

  // Part of Marcos Pacheco's C++ course in Udemy.