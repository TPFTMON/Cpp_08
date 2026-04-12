#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// Includes:
# include <iostream>
# include <algorithm>    // for std::find
# include <exception> // ?


template <typename T>
typename T::iterator easyfind(T& container, int to_find){

    typename T::iterator it = std::find(container.begin(), container.end(), to_find);
    if (it == container.end()){
        throw std::runtime_error("to_find not found in container");
    }
    return (it);
}                        // I don't use iterators to search manually. I use find. It does all the work.

#endif
