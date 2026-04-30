#include "Span.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Span::Span(const size_t lenght) : _maxSize(lenght){}

Span::Span(const Span &to_copy) : _vecArray(to_copy._vecArray), _maxSize(to_copy._maxSize) {}

Span& Span::operator=(Span other){ // still trying copy-and-swap idiom

    this->swap(other);
    return (*this);
}

Span::~Span(){}



// ================================================================
//                OTHER SPAN MEMBER FUNCTIONS
// ================================================================

void    Span::swap(Span &other){
    
    std::swap(this->_maxSize, other._maxSize);
    this->_vecArray.swap(other._vecArray);
}

void    Span::addNumber(const int num){

    if (_vecArray.size() >= _maxSize){
        throw OutOfBoundsAddNumber();
    }
    _vecArray.push_back(num);
}

int     Span::shortestSpan(){ /////////////////////// !!!!!!

    // 1. Sort the copy of array
    // 2. Iterate through it comparing adjacent values until the end
    // (And yes, we save duplicates)

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan();
    }

    std::vector<int> vecCopy = this->_vecArray;
    sort(vecCopy.begin(), vecCopy.end());

    int res = abs(vecCopy[0] - vecCopy[1]);
    // while()

    return (res);
}


int     Span::longestSpan(){

    if (_vecArray.size() <= 1){
        throw NotEnoughNumbersForSpan();
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
