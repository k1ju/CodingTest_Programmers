#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    auto minPointer = min_element(answer.begin(), answer.end());
    
    int minValue = *minPointer;
    
    cout << minValue;
    
    answer.erase(minPointer);
    
    if(answer.empty()){
        answer.push_back(-1);
    }
    
    
    return answer;
}