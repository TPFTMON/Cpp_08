#include "Span.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Span::Span(const size_t lenght)
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

    if (_vecArray.size() >= _maxSize){
        throw OutOfBounds();
    }

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
    return (std::max_element(beginIterator, endIterator) - std::min_element(beginIterator, endIterator));
}




// ================================================================
//                          SPAN EXCEPTIONS
// ================================================================

const char* NotEnoughNumbersForSpan::what() const throw(){

    return ("Not enough numbers to calculate Span");
}

const char* OutOfBounds::what() const throw(){

    return ("Can't add number(s) to Span as it will overflow");
}
