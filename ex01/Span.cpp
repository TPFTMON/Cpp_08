#include "Span.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Span::Span(const size_t lenght)
 : _maxSize(lenght){

    // std::vector<int> vecArray(lenght);
    // this->_vecArray = vecArray;
}

Span::Span(const Span &to_copy){

    // ... copying

}

Span& Span::operator=(const Span other){ // still trying copy-and-swap idiom

    std::vector<int> tempArray = this->_vecArray;
    this->_vecArray = other._vecArray;
    // other._vecArray = tempArray;
    
    size_t tempMaxSize = this->_maxSize;
    this->_maxSize = other._maxSize;
    // other._maxSize = tempMaxSize;

    return (*this);

}

Span::~Span(){}



// ================================================================
//                OTHER SPAN MEMBER FUNCTIONS
// ================================================================

void    Span::addNumber(const int num){

    if (_vecArray.size() >= _maxSize){
        throw SpanException("Can't add number(s) to Span as it will overflow");
    }

}

int     Span::shortestSpan(){

    // 1. Sort the copy of array
    // 2. Iterate through it comparing adjacent values until the end

    if (_vecArray.size() <= 1){
        throw SpanException("Not enough numbers to calculate Span");
    }

    std::vector<int> vecCopy = this->_vecArray;
    sort(vecCopy.begin(), vecCopy.end());
    
    int res;
    // iterating loop 

    return (res);
}


int     Span::longestSpan(){

    if (_vecArray.size() <= 1){
        throw SpanException("Not enough numbers to calculate Span");
    }

    std::vector<int>::iterator beginIt = this->_vecArray.begin(), endIt =this->_vecArray.end(); 
    int res = *std::max_element(beginIt, endIt) - *std::min_element(beginIt, endIt);
    
    return (res);
}




// int     Span::shortestSpan(){

//     // Sort the copy of array
//     // Compare two first (different ?) numbers

//     if (_vecArray.size() <= 1){
//         throw SpanException("Not enough numbers to calculate Span");
//     }

//     std::vector<int> vecCopy = this->_vecArray;
//     sort(vecCopy.begin(), vecCopy.end());
    
//     int res = vecCopy[1] - vecCopy[0];  // ??? I think I need to enhance logic
//                                         // to check for DIFFERENT numbers
//     return (res);
// }


// ================================================================
//                          SPAN EXCEPTIONS
// ================================================================

// const char* NotEnoughNumbersForSpan::what() const throw(){

//     return ("Not enough numbers to calculate Span");
// }

// const char* OutOfBounds::what() const throw(){

//     return ("Can't add number(s) to Span as it will overflow");
// }
