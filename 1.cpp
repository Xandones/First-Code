#include <iostream>
// The line above is the preprocessor. It adds the headers files to the code. 

int main() //Main function. The other ones will be called from this one.
{ // Begining of a code block. 
	std::cout << "First code written by me!" << std::endl;
	/*
		std -> allows us to use the standard functions of C++.
		We must use the quotation marks to write the string that will be displayed on the screen.
		endl -> jumps to a new line.
	*/
	system("PAUSE");
	return 0;
	/*
		system -> allows us to use the System Functions, related to the O.S.
		PAUSE -> Pauses the Command Prompt window and asks for a random key to unpause it.
		return 0 -> Returns to the standard O.S. if the code runned without errors.
	*/
} // End of a code block.