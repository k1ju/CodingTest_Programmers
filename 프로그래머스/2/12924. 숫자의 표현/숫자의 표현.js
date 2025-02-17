function solution(n) {
    var answer = 0;

    var list = [];
    
    // for(let i=0; i<n/2+1; i++){
    //     list.push(i);
    // }
    var lt=1,rt=1;
    var sum = 1;
    
    while(rt<=n){
                      
        if(sum<n){  
            rt++;
            sum+=rt;
        } else if(sum===n) {
            answer+=1;
            sum-=lt;
            lt++;
        } else{
            sum-=lt;
            lt++;
        }
    }
    
    return answer;
}