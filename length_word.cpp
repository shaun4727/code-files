

#include <iostream>
using namespace std;


string length_word(string line){
    int count = 0,i = 0,store = 0;
    for(i = 0; i<line.size(); i++){
           // cout<<static_cast<int>(line[i]);
        if(line[i] != ' '){
            count++;
            store = count;
        }else{
            if(line[i] == ' ' && i != line.size() - 1){
                count = 0;
            }
        }
    }

    cout<< store;
}

int main(){
    string x;

    getline(cin,x);
    length_word(x);
    return 0;
}
