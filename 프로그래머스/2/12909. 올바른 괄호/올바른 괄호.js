function solution(s){
    var answer = true;
    let stack = [];
    
    let arr = s.split('');
    

    arr.forEach(elem => {
        if(elem == '('){
            stack.push(elem)
        } else if(elem == ')' && stack[stack.length-1]== '(' ){
            stack.pop();
        } else if( elem == ')'){
            stack.push(elem);
        }
    })
    
    if(stack.length==0){
        return true
    } else{
        return false
    }
        
    return answer;
}