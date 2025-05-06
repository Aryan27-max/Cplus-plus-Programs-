#include<iostream>

int main()
{
    // do while loop = a do while loop executes a block of code aleast once 
    //                 and then continue to do it until the condition is true
      
    int num;

    do {
        std::cout << "enter a num :";
        std::cin >> num;
    }while(num < 0);

    std::cout << "your num is :" << num ;

    return 0;
}
    