#include "Span.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Span::Span(){

    std::cout << DEF_CONSTR_MSG << SPAN_MSG;

}

Span::Span(const Span &to_copy){

    std::cout << COPY_CONSTR_MSG << SPAN_MSG;
    // ... copying

}

Span& Span::operator=(const Span &assign){

    std::cout << COPY_ASSIGN_OP_MSG << SPAN_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

Span::~Span(){

    std::cout << DESTR_MSG << SPAN_MSG;

}



// ================================================================
//                OTHER SPAN MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER SPAN FUNCTIONS
// ================================================================

// ... other functions
