#include "MutantStack.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

MutantStack::MutantStack(){

    std::cout << DEF_CONSTR_MSG << MUTANTSTACK_MSG;

}

MutantStack::MutantStack(const MutantStack &to_copy){

    std::cout << COPY_CONSTR_MSG << MUTANTSTACK_MSG;
    // ... copying

}

MutantStack& MutantStack::operator=(const MutantStack &assign){

    std::cout << COPY_ASSIGN_OP_MSG << MUTANTSTACK_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

MutantStack::~MutantStack(){

    std::cout << DESTR_MSG << MUTANTSTACK_MSG;

}



// ================================================================
//                OTHER MUTANTSTACK MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER MUTANTSTACK FUNCTIONS
// ================================================================

// ... other functions
