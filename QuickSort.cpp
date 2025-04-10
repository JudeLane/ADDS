#include <vector>
#include <algorithm> 
class QuickSort {
public:
    void sort(std::vector<int>& array, int start, int end) {
        if (start >= end) {
            return;
        }

        int pivot = array.at(end);
        int pivot_index = start;

        for (int i = start; i < end; i++) {
            if (array.at(i) < pivot) {
                std::swap(array[i], array[pivot_index]);
                pivot_index++;
            }
        }

        std::swap(array[pivot_index], array[end]);

        sort(array, start, pivot_index - 1);
        sort(array, pivot_index + 1, end);
    }
};