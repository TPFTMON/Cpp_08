#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int main(){
    std::vector<int> vec;
    for (int i = 0; i < 5; i++){
        vec.push_back(i * 10); // 0, 10, 20, 30, 40
    }

    try{
        std::cout << "Finding 30 in vector: " << *easyfind(vec, 30) << "\n";
        std::cout << "Finding 99 in vector: " << *easyfind(vec, 99) << "\n";
    }
    catch (std::exception& e){
        std::cerr << "Error caught: " << e.what() << "\n";
    }

    std::list<int> lst;
    for (int i = 0; i < 5; i++){
        lst.push_back(i * 10); // 0, 10, 20, 30, 40
    }
    lst.push_back(42);
    lst.push_back(21);

    try{
        std::cout << "Finding 42 in list: " << *easyfind(lst, 42) << "\n";
        std::cout << "Finding 50 in list: " << *easyfind(vec, 50) << "\n";
    }
    catch (std::exception& e){
        std::cerr << "Error caught: " << e.what() << "\n";
    }

    return (0);
}
