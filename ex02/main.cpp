#include "MutantStack.hpp"

#include <iostream>

int main(){

    std::cout << "=== Subject Tests ===" << "\n";
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << "\n";

    mstack.pop();

    std::cout << "Size: " << mstack.size() << "\n";

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << "\n";
        ++it;
    }
    std::stack<int> s(mstack);



    std::cout << "\n=== Extended Tests: Reverse & Const Iterators ===" << "\n";

    std::cout << "Reverse Iteration (Expected: 0 -> 737 -> 5 -> 3 -> 5):" << "\n";
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite) {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << "\n";


    std::cout << "\nConst Verification:" << "\n";
    const MutantStack<int> const_mstack(mstack);
    MutantStack<int>::const_iterator cit = const_mstack.begin();
    MutantStack<int>::const_iterator cite = const_mstack.end();
    while (cit != cite) {
        std::cout << *cit << " ";
        ++cit;
    }
    std::cout << "\n";


    std::cout << "\nReverse Const Verification:" << "\n";
    const MutantStack<int> const_reverse_mstack(mstack);
    MutantStack<int>::const_reverse_iterator crit = const_reverse_mstack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = const_reverse_mstack.rend();
    while (crit != crite) {
        std::cout << *crit << " ";
        ++crit;
    }
    std::cout << "\n";

    return (0);
}

// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);

//     std::cout << mstack.top() << std::endl;

//     mstack.pop();

//     std::cout << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }
