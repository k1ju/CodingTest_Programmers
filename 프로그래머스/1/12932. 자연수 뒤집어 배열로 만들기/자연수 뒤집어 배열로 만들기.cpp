#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    

    string numberStr = to_string(n);
    vector<int> vec;
    
    for(int i=0; i< numberStr.length(); i++){
        vec.push_back(numberStr[i] - '0');
        
    }
    reverse(vec.begin(), vec.end());
    
    return vec;
}