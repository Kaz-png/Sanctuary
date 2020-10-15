//
//  main.cpp
//  idk what im doing
//
//  Created by Vin Cain on 10/14/20.
//

#include <iostream>

//Pizza was invented by a (adjective)(nationality)
//chef named (name). To make a pizza, you need
//to take a lump of (noun), and make a thin round
//(adjective)(noun). Then you cover it with (adjective)
//sauce, (adjective) cheese, and freshly chopped (plural noun)(#9).
//Next you have to bake it in a very hot (noun).
//When it is done cut it into (number) (shapes).
//Some kids like (food) pizza the best, but my favorite is
//the (food) pizza. If i could, i would eat pizza (number) times a day!


int main() {
    std::string word1;
    std::cout << "Please enter an adjective:\n";
    std::cin >> word1;
    
    std::string word2;
    std::cout << "Please enter a nationality:\n";
    std::cin >> word2;
    
    std::string word3;
    std::cout << "Please enter a name:\n";
    std::cin >> word3;
    
    std::string word4;
    std::cout << "Please enter a noun:\n";
    std::cin >> word4;
    
    std::string word5;
    std::cout << "Please enter an adjective:\n";
    std::cin >> word5;
    
    std::string word6;
    std::cout << "Please enter a noun:\n";
    std::cin >> word6;
    
    std::string word7;
    std::cout << "Please enter an adjective:\n";
    std::cin >> word7;
    
    std::string word8;
    std::cout << "Please enter an adjective:\n";
    std::cin >> word8;
    
    std::string word9;
    std::cout << "Please enter a plural noun:\n";
    std::cin >> word9;
    
    std::string word10;
    std::cout << "Please enter a noun:\n";
    std::cin >> word10;
    
    std::string word11;
    std::cout << "Please enter a number:\n";
    std::cin >> word11;
    
    std::string word12;
    std::cout << "Please enter a shape:\n";
    std::cin >> word12;
    
    std::string word13;
    std::cout << "Please enter a food:\n";
    std::cin >> word13;
    
    std::string word14;
    std::cout << "Please enter a food:\n";
    std::cin >> word14;
    
    std::string word15;
    std::cout << "Please enter a number:\n";
    std::cin >> word15;
    
    std::cout << "Pizza was invented by a " << word1 << " " << word2 << "\n";
    std::cout << "chef named "<< word3 <<". To make a pizza, you need\n";
    std::cout << "to take a lump of "<< word4 <<", and make a thin round\n";
    std::cout << word5 << " " <<word6 << ". Then you cover it with " << word7 << "\n";
    std::cout << "sauce, " << word8 << " cheese, and freshly chopped " << word9 << ".\n";
    std::cout << "Next you have to bake it in a very hot " << word10 << ".\n";
    std::cout << "When it is done cut it into " << word11 << " " << word12 << "s.\n";
    std::cout << "Some kids like "<< word13 << " pizza the best, but my favorite is\n";
    std::cout << "the " << word14 << " pizza. If i could, i would eat pizza " << word15 << " times a day!";
    return 0;
}
