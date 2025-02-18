function solution(n) {
    var answer = n;
    var nOneCount = 0;
    var narr = n.toString(2).split('');
     for(let i=0; i<narr.length; i++){
         if(narr[i]==1) nOneCount++;
     }
    
    while(true){
        answer++;
        var arr = answer.toString(2).split('');
        var newNumOneCount=0;
        for(let i=0; i<arr.length; i++){
            if(arr[i]==1) newNumOneCount++;
        }
        
        if(newNumOneCount==nOneCount) break;
        
        
    }
    
    return answer;
}