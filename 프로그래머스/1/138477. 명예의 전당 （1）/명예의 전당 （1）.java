import java.util.*;
class Solution {
    public int[] solution(int k, int[] score) {
        int[] answer = new int[score.length];
        int[] honor = new int[k];
        Arrays.fill(honor, Integer.MAX_VALUE);
        
        for(int i=0; i<score.length; i++){
            if(i<k){
                honor[i] = score[i];
            } else{
                int min = honor[0];
                if(min < score[i]){
                    honor[0] = score[i];
                }
            }
            Arrays.sort(honor);
            answer[i] = honor[0];
        }
        
        
        
        
        return answer;
    }
}