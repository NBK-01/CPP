#ifndef SPAN_H
#define SPAN_H

#include "main.h"

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _data;

public:
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int number);

    template<typename Iterator>
    void addRange(Iterator begin, Iterator end) {
        if (static_cast<unsigned int>(std::distance(begin, end)) + _data.size() > _maxSize)
            throw std::runtime_error("Adding this range exceeds Span capacity");
        _data.insert(_data.end(), begin, end);
    }
    int shortestSpan() const;
    int longestSpan() const;
};

#endif
