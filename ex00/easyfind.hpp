#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// Includes:
# include <algorithm>    // for std::find
# include <exception>


// Classes:
class EasyFindException : public std::exception{

    private:
        const char* _msg;

    public:
        EasyFindException(const char* msg) : _msg(msg) {}
        virtual const char* what() const throw() { return (_msg); }

};

template <typename T>
typename T::iterator easyfind(T& container, int to_find){

    typename T::iterator it = std::find(container.begin(), container.end(), to_find);
    if (it == container.end()){
        throw EasyFindException("find() did not detect the element in container");
    }
    return (it);
}                        // I don't use iterators to search manually. I use find. It does all the work.

#endif
