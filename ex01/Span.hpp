#ifndef SPAN_HPP
# define SPAN_HPP

// some data about containers for me:

// Sequence Containers:
//  std::vector (dynamic array),
//  std::list (doubly linked list),
//  std::deque (double-ended queue).


// Container Adaptors: std::stack, std::queue.
//  These aren't new containers;
//  they are wrappers around sequence containers that restrict how you access them (e.g., LIFO for stacks).


// Includes:
# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <iterator> // for std::distance


// Classes:
class SpanException;

class Span{

    private:
        std::vector<int> _vecArray;
        size_t           _maxSize;

    public:
        // Orthodox Canonical Form:
        Span(const size_t lenght = 0);
        Span(const Span &to_copy);
        Span& operator=(const Span other);
        ~Span();

        // Other member functions:
        void    addNumber(const int num);
        int     shortestSpan();
        int     longestSpan();
        template <typename InputIt>
        void addNumbers(InputIt begin, InputIt end){

            // 1. Calculating distance using std::distance(begin, end)
            // 2. Checking if adding this distance exceeds _maxSize. If so, throw.
            // 3. Using _vecArray.insert(_vecArray.end(), begin, end);

            if (std::distance(begin, end) > std::distance(_vecArray.size(), _maxSize)){
                throw OutOfBoundsAddNumbers("Amount of integers in addNumbers() exceeds capacity");
            }
            _vecArray.insert(_vecArray.end(), begin, end);
        }

};

// Exceptions:
class NotEnoughNumbersForSpan  : public std::exception{
    public:
        virtual const char* what() const throw();
};

class OutOfBoundsAddNumber  : public std::exception{
    public:
        virtual const char* what() const throw();
};


class OutOfBoundsAddNumbers  : public std::exception{
    public:
        virtual const char* what() const throw();
};

// // Exception:
// class SpanException : public std::exception{

//     private:
//         const char* _msg;

//     public:
//         SpanException(const char* msg) : _msg(msg) {}
//         virtual const char* what() const throw() { return (_msg); }

// };

#endif
