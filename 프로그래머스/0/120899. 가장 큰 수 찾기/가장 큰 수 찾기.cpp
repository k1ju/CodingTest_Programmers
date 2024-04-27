#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    auto maxIter = max_element(array.begin(), array.end());
    int maxValue = *maxIter;
    int maxIndex = maxIter - array.begin();
    
    answer.push_back(maxValue);
    answer.push_back(maxIndex);
    
    return answer;
}