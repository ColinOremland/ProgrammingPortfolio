#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your favorite beverage? ";
  getline (std::cin, name);


  for(int b = 99; b > 0; b = b - 1){
      
     if(b == 1){
         std::cout << b <<" bottles of " << name << " on the wall, " << b << " bottle of " << name << "!\n";
         std::cout << " take one down pass it around, " <<b-1 << " bottles of " << name << " on the wall" << "!\n";    
	}
     

     else if(b > 1){
         std::cout << b <<" bottles of " << name << " on the wall, " << b << " bottles of " << name << "!\n";
         std::cout << " take one down pass it around, " << b-1 << " bottles of " << name << " on the wall" << "!\n";
	}
    }
}
