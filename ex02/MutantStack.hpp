#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Includes:
// # include <iostream>
# include <stack>


// Classes:
template <typename T>
class MutantStack : public std::stack<T>{    // stack definition has a PROTECTED member c,
                                                                   // therefore we use it here
    private:
    // ... some private stuff

    public:

    // Orthodox Canonical Form:
    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {};

    void swap(MutantStack<T>& other){
        std::stack<T>::swap(other);
    }

    MutantStack<T>& operator=(const MutantStack other){
        swap(other);

        return (*this);
    };

    ~MutantStack() {};

    // Iterators:
    typedef typename std::stack<T>::container_type::iterator               iterator;
    typedef typename std::stack<T>::container_type::const_iterator         const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator       reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }


    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }


    reverse_iterator rbegin() { return this->c.rend(); }
    reverse_iterator rend() { return this->c.rbegin(); }


    const_reverse_iterator rbegin() const { return this->c.rend(); }
    const_reverse_iterator rend() const { return this->c.rbegin(); }
};

#endif
