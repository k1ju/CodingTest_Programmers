function solution(s) {
    var answer = [];
    
    var zeroCount=0;
    var transCount=0;
    
    
    
    while(parseInt(s) !== 1){
        
        var oneCount=0;
        var arr = s.split('')
        arr.forEach(elem => {
            if(elem==1) oneCount++;
        })
        
        zeroCount+=s.length-oneCount;
        transCount++;
        
        s = oneCount.toString(2);
        
    }
    
    answer[0] = transCount;
    answer[1] = zeroCount;
    
    
    
    
    
    
    
    return answer;
}