#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "(1+(4+5+2)-3)+(6+8)";
vector<string>stack_arr;
vector<string>post_fix;
vector<string>high_prior={"*","/"};
vector<string>low_prior={"+","-"};

// Convert string to vector of strings
vector<string> strs;

for (char ch : s) {
    // Convert each character to a string and store it in the vector
    strs.push_back(string(1, ch));
}

//convert to postfix
for(int i=0; i<strs.size(); i++){
    if(stack_arr.size() && (find(high_prior.begin(), high_prior.end(), strs[i]) != high_prior.end()) && (find(high_prior.begin(), high_prior.end(), stack_arr[stack_arr.size()-1]) != high_prior.end()) ){
        //if two high priority sign are together
        post_fix.push_back(stack_arr[stack_arr.size()-1]);
        stack_arr.pop_back();
        stack_arr.push_back(strs[i]);
    }else if(stack_arr.size() && (find(low_prior.begin(), low_prior.end(), strs[i]) != low_prior.end()) && (find(low_prior.begin(), low_prior.end(), stack_arr[stack_arr.size()-1]) != low_prior.end()) ){
        //if two low priority sign are together
        post_fix.push_back(stack_arr[stack_arr.size()-1]);
        stack_arr.pop_back();
        stack_arr.push_back(strs[i]);
    }else if(stack_arr.size() >= 2 && strs[i] == ")" && stack_arr[stack_arr.size()-2] == "("){
        //if any sign is between two parenthesis

        post_fix.push_back(stack_arr[stack_arr.size()-1]);
        stack_arr.pop_back();
        stack_arr.pop_back();
    }else if(strs[i] == "+" || strs[i] == "-" || strs[i] == "/" || strs[i] == "*" || strs[i] == "(" || strs[i] == ")"){
        //insert operator
        stack_arr.push_back(strs[i]);
    }else{
        //insert operands
        post_fix.push_back(strs[i]);
    }
}

while(!stack_arr.empty()){
    post_fix.push_back(stack_arr[stack_arr.size()-1]);
    stack_arr.pop_back();
}


//evaluation of postfix
stack<int>st;
for(int i=0;i<post_fix.size(); i++){
    if(post_fix[i] == "+"){
        int v1 = st.top();
        st.pop();
        int v2 = st.top();
        st.pop();
        st.push(v2+v1);
    }else if(post_fix[i] == "-"){
        int v1 = st.top();
        st.pop();
        int v2 = st.top();
        st.pop();
        st.push(v2-v1);
    }else if(post_fix[i] == "*"){
        int v1 = st.top();
        st.pop();
        int v2 = st.top();
        st.pop();
        st.push(v2*v1);
    }else if(post_fix[i] == "/"){
        int v1 = st.top();
        st.pop();
        int v2 = st.top();
        st.pop();
        st.push(v2/v1);
    }else{
        st.push(atoi(post_fix[i].c_str()));
    }

}

cout<<st.top()<<endl;


return 0;
}
