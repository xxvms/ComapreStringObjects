// ComapreStringObjects.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>



int main()
{
	std::string aName = "George";
	std::string userName;

	std::cout << "Enter your name: "; 
	std::cin >> userName;

	if (userName == aName) // use of == operator
		std::cout << "Greetings George!" << std::endl;
	else if (userName < aName) // use of < operator
		std::cout << "you come before George" << std::endl;
	else
		std::cout << "you come after George" << std::endl;

	int n = userName.compare(0, 2, aName, 0, 2); // compare() function
		std::cout << "The first 2 letters of your name: ";
		if (n == 0)
			std::cout << " match";
		else if (n < 0)
			std::cout << "come before ";
		else
			std::cout << "come after ";
		std::cout << aName.substr(0, 2) << std::endl;


	system("pause");
    return 0;
}

