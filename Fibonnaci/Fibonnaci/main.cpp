    //
    //  main.cpp
    //  Fibonnaci
    //
    //  Created by Ezequiel on 14/04/17.
    //  Copyright © 2017 Ezequiel. All rights reserved.
    //

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int i, input, first=0, second=1, next;
    
    std::cout << "Fibonnaci C++ 🙃 \n";
    
    first=0;
    second=1;
    std::cout<<"Digite a quantidade de numeros: ";
    std::cin>>input;
    std::cout<<"Fibonacci 📣: \n";
    
    for(i = 0; i < input; i++)
    {
        std::cout<<first;
        next = first + second;
        first = second;
        second = next;
        std::cout<<"\n";
    }
   
    return 0;
}
