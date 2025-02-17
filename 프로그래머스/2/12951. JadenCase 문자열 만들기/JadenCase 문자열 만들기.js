function solution(s) {
    var answer = s.split(" ");
    
    for(let i=0; i<answer.length; i++){
        
        answer[i] = answer[i].substring(0,1).toUpperCase() + answer[i].substring(1,answer[i].length).toLowerCase();
        
    }
    
    return answer.join(" ");
}