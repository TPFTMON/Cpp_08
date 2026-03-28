#ifndef SPAN_HPP
# define SPAN_HPP

// Includes:
# include <iostream>


// Messages:
# define SPAN_MSG "\e[0;32mSpan\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Span{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        Span();
        Span(const Span &to_copy);
        Span& operator=(const Span &assign);
        ~Span();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
