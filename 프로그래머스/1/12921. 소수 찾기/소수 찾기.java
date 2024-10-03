class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for(int i=2; i<= n; i++){
            int count = 0;
            
            int num = (int)Math.sqrt(i);
            
            for(int j=1; j<=Math.sqrt(i); j++){
                if(i%j==0){
                  count+=2;
                }
                
                if( j*j == i){
                    count-=1;
                }
                if(count > 2){
                    break;
                }
                
            }
            
            if(count == 2){
                answer++;
            }
        }
        
        return answer;
    }
}