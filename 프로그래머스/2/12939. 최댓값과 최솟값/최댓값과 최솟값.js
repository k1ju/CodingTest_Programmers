function solution(s) {
    
    let arr = s.split(' ');
    
    let min=arr[0],max=arr[0];
    
    
    arr.forEach(n => {
        max = Math.max(max,n)
        min = Math.min(min,n)
    })
    
    var answer = `${min} ${max}`;
    console.log(answer)
    
    
    return answer;
}