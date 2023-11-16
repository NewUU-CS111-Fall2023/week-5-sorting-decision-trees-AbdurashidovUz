#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; ++i) {
      
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(denominations[i], denominations[minIndex]);
    }
}

int main() {

    std::vector<int> denominations;


    int numDenominations;
    std::cout << "Enter the number of denominations: ";
    std::cin >> numDenominations;


    std::cout << "Enter the denominations, separated by spaces:\n";
    for (int i = 0; i < numDenominations; ++i) {
        int denomination;
        std::cin >> denomination;
        denominations.push_back(denomination);
    }

    
    selectionSort(denominations);


    std::cout << "Sorted Denominations: ";
    for (int denomination : denominations) {
        std::cout << denomination << " ";
    }
    std::cout << "\n";

    return 0;
}
