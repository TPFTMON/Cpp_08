#include "Span.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Span::Span(const int lenght)
 : _maxSize(lenght){



}

Span::Span(const Span &to_copy){

    // ... copying

}

Span& Span::operator=(const Span assign){

    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

Span::~Span(){


}



// ================================================================
//                OTHER SPAN MEMBER FUNCTIONS
// ================================================================

void    Span::addNumber(const int num){

}

int     Span::shortestSpan(){

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan();
    }

}

int     Span::longestSpan(){

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan();
    }
    return (std::max_element() - std::min_element());
}




// ================================================================
//                          SPAN EXCEPTIONS
// ================================================================

const char* NotEnoughNumbersForSpan::what() const throw(){

    return ("Not enough numbers to calculate Span");
}
