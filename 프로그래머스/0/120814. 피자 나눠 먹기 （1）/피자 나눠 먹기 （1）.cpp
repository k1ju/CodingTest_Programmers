#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    
    int answer;

    answer = ceil( (float)n/7);
    
    cout << answer;
    
    return answer;
    
    
}