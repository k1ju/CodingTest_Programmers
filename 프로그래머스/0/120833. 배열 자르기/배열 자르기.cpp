#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    
    vector<int> newVec;
    
    for(int i=num1; i<=num2; i++){
        newVec.push_back(numbers[i]);
    }
        
    
    
    vector<int> answer = newVec;
    return answer;
}