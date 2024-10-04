class Solution {
    public int[] solution(String s) {
        int[] answer = new int[]{0,0};
        
        while(!s.equals("1")){
            
            StringBuilder sb = new StringBuilder();
            
            for(char ch: s.toCharArray()){
                if(ch == '1'){
                    sb.append("1");
                }else{
                    answer[1]++;
                }
            }
            int length = sb.length();
            
            StringBuilder str = new StringBuilder();
            
            while(length>0){
                str.append(length % 2  );
                length /= 2;
            }
            answer[0]++;
            s = str.reverse().toString();
        }
    
        return answer;
        
    
    }
}