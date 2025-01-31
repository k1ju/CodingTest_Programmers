function solution(s)
{
    let answer = -1;
    let stack = [];
    
    for(let i=0; i<s.length; i++){
        
        if(s[i] == stack[stack.length-1]){
            // console.log(s[i])
            stack.pop();
        } else{
            stack.push(s[i]);
        }

    }    
    
    if(stack.length==0){
        return 1
    } else{
        return 0
    }
    
    
}