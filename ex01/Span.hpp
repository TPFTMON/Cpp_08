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


// Classes:
class Span{

    private:
        std::vector<int> _vecArray;
        size_t           _maxSize;

    public:
        // Orthodox Canonical Form:
        Span(const int lenght = 0);
        Span(const Span &to_copy);
        Span& operator=(const Span assign);
        ~Span();

        // Other member functions:
        void    addNumber(const int num);
        int     shortestSpan();
        int     longestSpan();
        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end){
            // 1. Calculating distance using std::distance(begin, end)
            // 2. Checking if adding this distance exceeds _maxSize. If so, throw.
            // 3. Using _vec.insert(_vec.end(), begin, end);
        }
        // void    addNumbers();

};


// exceptions:
class NotEnoughNumbersForSpan  : public std::exception{
    public:
        virtual const char* what() const throw();
};

#endif
