#include <vector>
#include <iostream>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int size = nums.size()/2;
    set<int> setNum;
        
    
    for(int i=0; i<nums.size(); i++){
       setNum.insert(nums[i]);
    }

    cout << "setNumsize: " <<  setNum.size() << endl;
    cout << "size: "<< size << endl;
    
    for(auto v: setNum){
        cout << "v: " << v << endl;
    }
    
    if(setNum.size()>= size){
        answer = size;
    } else {
        answer = setNum.size();
    }
    
    
    
    
    return answer;
}