#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>




using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if(arr1.size() > arr2.size()) return 1;
    if(arr1.size() < arr2.size()) return -1;
    
    int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
    int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
    
    if(sum1>sum2) return 1;
    if(sum1<sum2) return -1;
    if(sum1==sum2) return 0; 
    
    
    
    
    
    
    return answer;
}