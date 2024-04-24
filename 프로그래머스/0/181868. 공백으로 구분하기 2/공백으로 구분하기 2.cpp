#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    string word;
    
    while(getline(ss, word,' ')){
        if(word != ""){
            answer.push_back(word);
            cout << word << endl;
            
        }
    }
    
    
    return answer;
}