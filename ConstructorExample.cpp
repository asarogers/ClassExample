#include <iostream>
#include <string>

//the human class template, AKA class
class human
{
    public:
    int x, y;
//default constructor, though c++ supplies a default for us
    human()
    {//initialize variabels to 0, so they aren't given random memory
        x = 0;
        y = 0;
    }
//constructor with parameters
    human(int x, int y)
    {
        //sets the values for us
        this -> x = x;
        this -> y = y;
    }
    void Print()
    {
        //print x and y values
        std::cout << x << "," << y <<std::endl;
    }
};

int main()
{
    //instantiate asa as human object
    human Asa(15, 16);
    Asa.Print();
    return 0;
}