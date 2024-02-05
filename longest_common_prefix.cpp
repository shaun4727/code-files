
#include<bits/stdc++.h>
using namespace std;




int main() {

    int i, res = 1, newArr[] = {};
    vector<int>array;
    vector<int>arr = { 1,2,2,1,1,3 };
    map<string, int>myMap;

    for (i = 0; i < arr.size(); i++) {
        string temp = to_string(arr[i]);
        if (myMap.find(temp) != myMap.end()) {
            myMap[temp]++;
        }
        else {
            myMap.insert(make_pair(temp, 1));
        }
    }


    for (const auto& pair : myMap) {

        array.push_back(pair.second);
    }
    sort(array.begin(), array.end());
    for (i = 0; i < array.size() - 1;i++) {
        if (array[i] == array[i + 1]) {
            res = 0;
            break;
        }
    }

    if (res == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;


}

