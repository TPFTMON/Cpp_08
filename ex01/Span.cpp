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

    // 1. Swap the primitive types
    std::swap(this->_maxSize, other._maxSize);
    
    // 2. Swap the vectors using the vector's built-in swap method
    this->_vecArray.swap(other._vecArray);
    
    // 3. 'other' goes out of scope and automatically destroys your old data!
    return (*this);

}

Span::~Span(){}



// ================================================================
//                OTHER SPAN MEMBER FUNCTIONS
// ================================================================

void    Span::addNumber(const int num){

    if (_vecArray.size() >= _maxSize){
        throw OutOfBoundsAddNumber("Can't add number(s) to Span as it will overflow");
    }

}

int     Span::shortestSpan(){

    // 1. Sort the copy of array
    // 2. Iterate through it comparing adjacent values until the end    
    // (And yes, we save duplicates)

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan("Not enough numbers to calculate Span");
    }

    std::vector<int> vecCopy = this->_vecArray;
    sort(vecCopy.begin(), vecCopy.end());
    
    int res;
    // iterating loop 

    return (res);
}


int     Span::longestSpan(){

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan("Not enough numbers to calculate Span");
    }

    std::vector<int>::iterator beginIt = this->_vecArray.begin(), endIt =this->_vecArray.end(); 
    int res = *std::max_element(beginIt, endIt) - *std::min_element(beginIt, endIt);
    
    return (res);
}

// ================================================================
//                          SPAN EXCEPTIONS
// ================================================================

const char* NotEnoughNumbersForSpan::what() const throw(){

    return ("Not enough numbers to calculate Span");
}

const char* OutOfBoundsAddNumber::what() const throw(){

    return ("Can't add number(s) to Span as it will overflow");
}


const char* OutOfBoundsAddNumbers::what() const throw(){

    return ("Amount of integers in addNumbers() exceeds capacity");
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



