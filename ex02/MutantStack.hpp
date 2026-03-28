#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Includes:
# include <iostream>


// Messages:
# define MUTANTSTACK_MSG "\e[0;32mMutantStack\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class MutantStack{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        MutantStack();
        MutantStack(const MutantStack &to_copy);
        MutantStack& operator=(const MutantStack &assign);
        ~MutantStack();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
