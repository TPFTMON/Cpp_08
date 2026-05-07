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

    if (this->_vecArray.size() >= _maxSize){
        throw OutOfBoundsAddNumber();
    }
    this->_vecArray.push_back(num);
}

long     Span::shortestSpan(){

    // 1. Sort the copy of array
    // 2. Iterate through it comparing adjacent values until the end
    // (And yes, we save duplicates)

    if (this->_vecArray.size() < 2){
        throw NotEnoughNumbersForSpan();
    }

    std::vector<int> tmp = this->_vecArray;
    std::vector<int>::iterator beginIt = tmp.begin();
    std::vector<int>::iterator endIt = tmp.end();

    sort(beginIt, endIt);

    long min_dif = -1; // (cannot be by default)
    for (std::vector<int>::iterator it = beginIt; it != endIt - 1; ++it){

        long dif = static_cast<long>(*(it + 1)) - static_cast<long>(*it);

        if (min_dif == -1 || dif < min_dif)
            min_dif = dif;

        if (min_dif == 0) { break ; }
    }


    return (min_dif);
}


long     Span::longestSpan(){

    if (this->_vecArray.size() < 2){
        throw NotEnoughNumbersForSpan();
    }

    std::vector<int>::iterator beginIt = this->_vecArray.begin();
    std::vector<int>::iterator endIt = this->_vecArray.end();

    int max_v = *std::max_element(beginIt, endIt);
    int min_v = *std::min_element(beginIt, endIt);

    // long here is very important because of the potential difference in 4 million
    long max_dif = static_cast<long>(max_v) - static_cast<long>(min_v);

    // std::cout << max_dif;
    return (max_dif);
}

// int     Span::longestSpan(){

//     if (_vecArray.size() <= 1){
//         throw NotEnoughNumbersForSpan();
//     }

//     std::vector<int>::iterator beginIt = this->_vecArray.begin();
//     std::vector<int>::iterator endIt =this->_vecArray.end();

//     // long here is very important because of the potential difference in 4 million
//     long res = *std::max_element(beginIt, endIt) - *std::min_element(beginIt, endIt);

//     return (res);
// }

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
