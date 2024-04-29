#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxWidth = 0;
    int maxLength = 0;
    
    for(int i=0; i<sizes.size(); i++){
        
        int tmp=0;
        //size[i][0]이 가로, size[i][1]이 세로
        if(sizes[i][1] > sizes[i][0]){
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        
        if(sizes[i][0] > maxWidth){
            maxWidth = sizes[i][0];
        }
        if(sizes[i][1] > maxLength){
            maxLength = sizes[i][1];
        }
        
    }
    
    
    answer = maxWidth * maxLength;
    
    return answer;
}