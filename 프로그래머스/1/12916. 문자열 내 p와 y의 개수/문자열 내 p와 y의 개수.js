function solution(s){
    var answer = true;

    let pCount = 0;
    let yCount = 0;
    
    let tmpString = s.split('');
    
    tmpString.forEach((word) => {
        
        if(word.toLowerCase() == 'p'){
            pCount++;
        } else if (word.toLowerCase() == 'y'){
            yCount++;
        }
    })
    
    if(pCount == yCount ){
        return true;
    } else{
        return false;
    }


}