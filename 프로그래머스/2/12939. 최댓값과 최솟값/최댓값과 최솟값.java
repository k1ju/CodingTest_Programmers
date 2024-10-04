import java.util.*;

class Solution {
    public String solution(String s) {
        
        StringBuilder sb = new StringBuilder();
        
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        
        String[] arr = s.split(" ");
        
        for(int i=0; i<arr.length; i++){
            if(Integer.parseInt(arr[i]) < min){
                min = Integer.parseInt(arr[i]);
            }
            
            if(Integer.parseInt(arr[i]) > max){
                max = Integer.parseInt(arr[i]);
            }
            
        }
        sb.append(min).append(" ").append(max);
        return sb.toString();
        
        
    }
}