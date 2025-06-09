#ifndef ARRAY_H
# define ARRAY_H

# include "main.h"

template <typename T>

class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array() : _array(nullptr), _size(0) {}
		Array(unsigned int size) : _size(size) {
			_array = new T[size];
			for (unsigned int i = 0; i < size; ++i)
				_array[i] = T();
		}
		Array(const Array &other) : _size(other._size) {
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = other._array[i];
		}
		Array &operator=(const Array &other) {
			if (this != &other) {
				delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_array[i] = other._array[i];
			}
			return *this;
		}
		T &operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}
		const T &operator[](unsigned int index) const {
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}
		unsigned int size() const { return _size; }
		 ~Array() { delete[] _array; }
};

#endif // !ARRAY_H
