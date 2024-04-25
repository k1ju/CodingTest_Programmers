#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer =  arr;
    
    //제일 작은수의 반복자 반환
    auto min = min_element(answer.begin(), answer.end());
    
    //제일 작은 값 저장 
    int minValue = *min;
    
    //해당 위치의 값 제거 
    answer.erase(min);
    
    for(auto i: answer){
        cout << i << endl;        
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    
    
    return answer;
}