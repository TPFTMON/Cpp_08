#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// Includes:
# include <iostream>


// Messages:
# define EASYFIND_MSG "\e[0;32measyfind\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class easyfind{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        easyfind();
        easyfind(const easyfind &to_copy);
        easyfind& operator=(const easyfind &assign);
        ~easyfind();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
