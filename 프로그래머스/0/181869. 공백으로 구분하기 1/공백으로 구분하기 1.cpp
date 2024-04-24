#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    stringstream ss(my_string);
        
        string word;
    
    while(ss >> word){
        answer.push_back(word);
        cout << word << endl;
    }
    
    
    return answer;
}