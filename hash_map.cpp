#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declare an empty map with int keys and string values
    std::map<int, std::string> myMap;

    // Assign values to the map using the square bracket notation
    myMap[-9] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    cout << myMap[-9] << endl;
    // Alternatively, assign values using the insert function
    myMap.insert(std::make_pair(4, "Four"));
    myMap.insert(std::make_pair(5, "Five"));

    // Print the contents of the map
    std::cout << "Map contents:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    int keyToFind = 14;
    if (myMap.find(keyToFind) != myMap.end()) {
        std::cout << "Key " << keyToFind << " exists in the map." << std::endl;
    }
    else {
        std::cout << "Key " << keyToFind << " does not exist in the map." << std::endl;
    }

    return 0;
}
