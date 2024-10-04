import java.util.*;
class Solution {
    boolean solution(String s) {
        boolean answer = true;
        Deque<String> dq = new ArrayDeque<>();

        int index = 0;
        for(char ch: s.toCharArray()){
            if(index ==0 && ch == ')'){
                return false;
            }
            
            if(ch == '('){
                dq.push(String.valueOf(ch));
            } else{
                if(dq.isEmpty()){
                    return false;                    
                }
                dq.pop();
            }
            index++;
        }
        
        if(dq.size()>0){
            return false;
        } else{
            return true;
        }
        
    }
}