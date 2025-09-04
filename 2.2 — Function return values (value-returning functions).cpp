#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	//std::cout << input;
    return input;
}

int main() {
  
  int x{getValueFromUser()};
 // x = getValueFromUser();   
  std::cout << "The double of the entered number is :" << x*2;
  
  return 0;
}
