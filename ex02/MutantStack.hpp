#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Includes:
# include <iostream>
# include <stack>


// Classes:
template <typename T> class MutantStack : public std::stack<T>{

    private:
    // ... some private stuff

    public:
    // Orthodox Canonical Form:
    MutantStack() : stack() {};
    MutantStack(const MutantStack &to_copy) : stack(to_copy) {};
    MutantStack& operator=(const MutantStack assign) { stack::operator=(assign) };
    ~MutantStack() : ~stack() {};

    // Other member functions:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }

};


// Other:
// ...

#endif
