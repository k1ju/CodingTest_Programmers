function solution(brown, yellow) {
    var answer = [];
    var sum = brown+yellow
    var arr = []
    
    for(let i=1;i<=sum;i++){
        if(sum%i==0) arr.push(i)
    }
    
    var lt=0, rt=arr.length-1;
    while(true){
        if(brown== (arr[lt]+arr[rt])*2-4) break;
        else {
            lt++;
            rt--;
        }
    }
    
    answer.push(arr[rt]);
    answer.push(arr[lt]);
    
    return answer;
}