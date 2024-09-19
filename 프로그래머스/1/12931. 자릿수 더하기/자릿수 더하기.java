import java.util.*;

public class Solution {
    public int solution(int n) {
        int answer = 0;
       
        String str = String.valueOf(n);
    
        System.out.println(str);    
        
        for(char ch: str.toCharArray()){
            answer += Integer.parseInt(String.valueOf(ch));
        }
        
        return answer;
    }
}