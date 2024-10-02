class Solution {
    public long solution(long n) {
        
        long sqrt = (long) Math.sqrt(n);
            
        if(n == Math.pow(sqrt, 2) ){
            return  (long) Math.pow( Math.sqrt(n)+1,2);
        } else{
            return -1;
        }

    }
}