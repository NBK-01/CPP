#include "./headers/Span.h"
#include <vector>

int main() {
    try {
        Span sp(10000);

        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
            numbers.push_back(i);

        sp.addRange(numbers.begin(), numbers.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
