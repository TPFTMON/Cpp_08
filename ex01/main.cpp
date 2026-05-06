#include "Span.hpp"

int main(){

    std::cout << "--- SUBJECT TEST ---\n";
    Span sp = Span(5);
    sp.addNumber(6); sp.addNumber(3); sp.addNumber(17);
    sp.addNumber(9); sp.addNumber(11);
    std::cout << "Shortest: " << sp.shortestSpan() << " | Longest: " << sp.longestSpan() << "\n\n";

    // 2. Exception Limits
    std::cout << "--- EXCEPTION TESTS ---\n";
    Span small(1);
    small.addNumber(42);
    try { small.shortestSpan(); } catch(std::exception &e) { std::cerr << e.what() << "\n"; }
    try { sp.addNumber(99); } catch(std::exception &e) { std::cerr << "Capacity error: " << e.what() << "\n"; }

    // 3. The 10,000+ Test with range iterators
    std::cout << "\n--- LARGE RANGE TEST ---\n";
    Span largeSpan(15004);
    std::vector<int> bulk;
    for (int i = 0; i < 15000; i++) bulk.push_back(i * 2);
    // bulk.push_back(/*-2147483648*/ INT_MIN);
    bulk.push_back(-2147483648);
    // bulk.push_back(-1);
    bulk.push_back(2147483647);
    bulk.push_back(2147483647);

    // bulk.push_back(-10);
    // bulk.push_back(10);
    // bulk.push_back(10);
    // bulk.push_back(99990);

    largeSpan.addNumbers(bulk.begin(), bulk.end());
    std::cout << "Large Shortest (should be 0): " << largeSpan.shortestSpan() << "\n";
    std::cout << "Large Longest (should be 4 294 967 295): " << largeSpan.longestSpan() << "\n";
    // std::cout << "Large Longest (should be 100 000): " << largeSpan.longestSpan() << "\n";

    return (0);
};



// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return 0;
// }

// The subject main should output this:
// $> ./ex01
// 2
// 14
// $>
