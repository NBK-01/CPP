# include "./headers/iter.h"

void printInt(int& x) {
    std::cout << x << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    iter(arr, len, printInt);  // Output: 1 2 3 4 5
    std::cout << std::endl;

    return 0;
}
