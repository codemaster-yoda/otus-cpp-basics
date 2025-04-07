// исходный файл с реализацией функции
#include <iostream>
#include <string>
#include "move_me_out.h"

void name(){
    std::string name;
    std::cout<<"my name is Bob! and you ?"<< std::endl;
    std::cin >> name;
    std::cout<<"hello " << name << '!' <<std::endl;

}
