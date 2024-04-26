#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    auto min = max_element(array.begin(), array.end());
    
    int minValue = *min;
    int minIndex = max_element(array.begin(), array.end()) - array.begin();
    
    answer.push_back(minValue);
    answer.push_back(minIndex);
    return answer;
}