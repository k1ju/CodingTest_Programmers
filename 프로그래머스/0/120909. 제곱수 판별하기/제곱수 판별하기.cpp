#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 2;
    
    int root = sqrt(n);
    
    if(root * root == n){
        cout << root << endl << n;
        answer = 1;
    }
        
        
    return answer;
}