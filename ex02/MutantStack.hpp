#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Includes:
# include <iostream>
# include <stack>


// Classes:
template <typename T>
class MutantStack : public std::stack<T>{    // stack definition has a PROTECTED member c,
                                                                   // therefore we use it here
    private:
    // ... some private stuff

    public:
    // Orthodox Canonical Form:
    MutantStack() : stack() {};
    MutantStack(const MutantStack &to_copy) : stack(to_copy) {};
    MutantStack& operator=(const MutantStack assign) { stack::operator=(assign) };
    ~MutantStack() {};

    // Other member functions:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return (this->c.begin()); }
    iterator end() { return (this->c.end()); }

    // Also need const_iterator, reverse_iterator, and const_reverse_iterator

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator begin() { return (const this->c.begin()); }
    const_iterator end() { return (const this->c.end()); }

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator begin() { return (this->c.end()); }
    reverse_iterator end() { return (this->c.begin()); }

    typedef typename std::stack<T>::container_type::reverse_const_iterator reverse_const_iterator;
    reverse_const_iterator begin() { return (const this->c.end()); }
    reverse_const_iterator end() { return (const this->c.begin()); }
};


// Other:
// ...

#endif
