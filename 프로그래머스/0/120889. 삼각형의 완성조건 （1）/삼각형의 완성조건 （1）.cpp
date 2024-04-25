#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 1;
    
    sort (sides.begin(), sides.end());
    
    for(auto a : sides){
        cout << a << endl;
        
    }
    
    
    return sides[2] >= sides[0] + sides[1] ? 2 : 1 ;
}