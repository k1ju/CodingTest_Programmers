#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int totalMultiple = 1;
    int sumPow = 0;
    
    for (auto i : num_list){
        totalMultiple *= i;
    }
    
    for(auto j : num_list){
        sumPow += j;
    }
    sumPow = sumPow * sumPow;
    
    if(totalMultiple < sumPow) {
        answer = 1;
    }
    
    
    
    
    return answer;
}