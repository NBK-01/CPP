#include "../headers/Span.h"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _data(other._data) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _data = other._data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_data.size() >= _maxSize)
        throw std::runtime_error("Span is full");
    _data.push_back(number);
}

int Span::shortestSpan() const {
    if (_data.size() < 2)
        throw std::runtime_error("Not enough elements to compute span");

    std::vector<int> sorted = _data;
    std::sort(sorted.begin(), sorted.end());

    int minSpan = std::numeric_limits<int>::max();
    for (std::vector<int>::size_type i = 1; i < sorted.size(); ++i) {
        int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_data.size() < 2)
        throw std::runtime_error("Not enough elements to compute span");

    int minVal = *std::min_element(_data.begin(), _data.end());
    int maxVal = *std::max_element(_data.begin(), _data.end());

    return maxVal - minVal;
}
