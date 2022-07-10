#include <iostream> //Includes the iostream library
#include <string> //Includes the string library

class human
{
    public:
    std::string haircolor, skinTone;
    int age, height;

};


int main()  //the main function
{ 
    human Asa;
    Asa.age = 22;
    Asa.haircolor = "black";
    Asa.skinTone = "brown";
    Asa.height = 70;


    std::cout << Asa.height << std::endl;
	
	return 0;  

} 