class Solution {
    public int solution(String t, String p) {
        int answer = 0;
        for(int i=0; i<t.length()-p.length()+1; i++ ){
            
            long num = Long.parseLong(t.substring(i, i+p.length()));
            System.out.println(num);
            
            if( num <= Long.parseLong(p) ){
                answer++;
            }
            
        }
        return answer;        
        
        
        
        
        
        
        
        
//         int answer = 0;
        
//         System.out.println(t.length());
//         System.out.println(p.length());
        
        
//         for(int i=0; i<t.length()-p.length()+1; i++){
            
//             StringBuilder sb = new StringBuilder();
            
//             for(int j=0; j< p.length(); j++){
//                 sb.append(t.charAt(j+i));
//             }
            
//             System.out.println("sb: " + sb.toString());

            
            
//             if( Long.parseLong(sb.toString()) <= Long.parseLong(p)){
//                 answer++;
//             }
            
            
            
            
            
//         }
        
        
        
//         return answer;
    }
}



