import java.util.*;

class Solution {
    public int solution(int n, int m, int[] section) {
        int answer = 0;

        ArrayList<Integer> list = new ArrayList<>();
        
        for(int i=0 ;i<section.length; i++){
            list.add(section[i]);
        }
        
        while(!list.isEmpty()){
            
            int value = list.get(0);
            answer++;
            
            for(int i=0; i<m; i++){
                list.remove(Integer.valueOf(value));
                value++;
                if(value > n){
                    break;
                }
            }
        }
        
        return answer;
    }
}