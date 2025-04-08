#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::vector<int> list;
    int number;

    while (std::cin >> number) {  
        list.push_back(number);
    }

    QuickSort quickSort;
    list = quickSort.sort(list);

    RecursiveBinarySearch rbs;
    bool found = rbs.search(list, 1);

    std::cout << (found ? "true" : "false") << " ";

    for (size_t i = 0; i < list.size(); ++i) {
        std::cout << list[i];
        if (i != list.size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}