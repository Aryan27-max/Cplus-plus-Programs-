#include<iostream>

int main () {

    // pointers = variable that stores a memory adress of another variable 
    //            cause sometimes it's easier to work with adresses

    // & = adress-of operator
    // * = derefrence operator

    std::string name = "Aryan";
    int age = 19;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};  


    std::string *pName = &name ;
    int *pAge = &age;
    std::string *pFreePizza = freePizza; 
    
    std::cout << pName << '\n';  // displays the adress of data type
    std::cout << *pName << '\n' ; // we use the (*) to display the value stores at the location/loacation
    std::cout << pAge << '\n' ; 
    std::cout << *pAge << '\n' ; 
    std::cout << freePizza << '\n';

}