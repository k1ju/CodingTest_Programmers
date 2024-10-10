class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        
        String answer = "Yes";
        
        int i = 0;
        int j = 0;
        
        int count1 = cards1.length;
        int count2 = cards2.length;
        
        for(String s: goal){
            if(i< count1 && s.equals(cards1[i])){
                i++;
                continue;
            } else if(j < count2 && s.equals(cards2[j])){
                j++;
                continue;
            } else{
                answer = "No";
                break;
            }
            
        }
        
        return answer;
        
        
    }
}