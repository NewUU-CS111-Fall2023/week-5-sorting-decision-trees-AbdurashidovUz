#include <iostream>
#include <vector>

void rearrangeSoldiers(std::vector<std::string> &soldiers) {
    int numSoldiers = soldiers.size();

    
    if (numSoldiers % 2 != 0) {
        numSoldiers -= 1;
    }

    
    for (int i = 0; i < numSoldiers; i += 2) {
     
        std::swap(soldiers[i], soldiers[i + 1]);
    }

   
    std::cout << "Rearranged Soldiers:\n";
    for (const std::string &soldier : soldiers) {
        std::cout << soldier << "\n";
    }
}

int main() {
    
    int numSoldiers;
    std::cout << "Enter the number of soldiers: ";
    std::cin >> numSoldiers;

   
    std::cout << "Enter the names of soldiers, separated by spaces:\n";

    std::vector<std::string> soldierNames;
    std::string name;

    for (int i = 0; i < numSoldiers; ++i) {
        std::cin >> name;
        soldierNames.push_back(name);
    }

    
    rearrangeSoldiers(soldierNames);

    return 0;
}
