function solution(n) {
    var answer = 0;

    var list = [];
    
    // for(let i=0; i<n/2+1; i++){
    //     list.push(i);
    // }
    var lt=1,rt=2;
    while(lt<rt && rt<n/2+1){
        
        var num =0;
        
        for(let i=lt; i<=rt; i++){
            num+=i;
        }
        
        if(num<n)  rt++;
        else if(num==n) {
            answer++;
            lt++;
        } else{
            lt++;
        }
        
    }
    answer+=1;
    
    return answer;
}