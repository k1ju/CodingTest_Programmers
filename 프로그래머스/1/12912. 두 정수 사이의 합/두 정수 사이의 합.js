function solution(a, b) {
    var answer = 0;
    
    if( b-a==0) return a;
    
    if(b<a){
        let tmp;
        tmp =a;
        a=b;
        b=tmp;
    }
    console.log(a)
    console.log(b)
    

    
    for(let i=a; i<=b; i++){
        answer+=i;
    }
    
    console.log(answer);
    
    return answer;
}