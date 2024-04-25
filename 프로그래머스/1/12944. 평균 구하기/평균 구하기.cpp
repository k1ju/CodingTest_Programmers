#include <string>
#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

double solution(vector<int> arr) {
    double answer = accumulate(arr.begin(), arr.end(), 0);

    cout << answer;
        
    
    return answer / arr.size();
}