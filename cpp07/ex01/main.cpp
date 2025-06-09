# include "./headers/iter.h"

void printInt(int& x) { std::cout << GREEN << x << RESET << " "; }

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 42};
	size_t len = sizeof(arr) / sizeof(arr[0]);

    iter(arr, len, printInt);
    std::cout << std::endl;
    return 0;
}
