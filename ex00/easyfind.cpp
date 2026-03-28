#include "easyfind.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

easyfind::easyfind(){

    std::cout << DEF_CONSTR_MSG << EASYFIND_MSG;

}

easyfind::easyfind(const easyfind &to_copy){

    std::cout << COPY_CONSTR_MSG << EASYFIND_MSG;
    // ... copying

}

easyfind& easyfind::operator=(const easyfind &assign){

    std::cout << COPY_ASSIGN_OP_MSG << EASYFIND_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

easyfind::~easyfind(){

    std::cout << DESTR_MSG << EASYFIND_MSG;

}



// ================================================================
//                OTHER EASYFIND MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER EASYFIND FUNCTIONS
// ================================================================

// ... other functions
