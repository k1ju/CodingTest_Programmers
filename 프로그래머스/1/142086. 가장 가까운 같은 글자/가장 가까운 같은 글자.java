class Solution {
    public int[] solution(String s) {
        
        
        int[] answer = new int[s.length()];
        
        answer[0] = -1;
        
        for(int i=1; i<s.length(); i++){
            int dist = -1;
            
            for(int j=0; j<i; j++){
                if(s.charAt(j) == s.charAt(i)){
                    dist = i-j;
                }
            }
            answer[i] = dist;
            
            
            
        }
        
        
        
        
        
        
        
        
        
        
//         int[] answer = new int[s.length()];
        
//         for(int i=0;i<s.length(); i++){
//             answer[i] = -1;
//             for(int j=0; j<i; j++){
                
//                 if(s.charAt(j) == s.charAt(i)){
//                     answer[i] = i - j;
//                 } 
                
//             }
            
//         }
        
        
        
        return answer;
    }
}