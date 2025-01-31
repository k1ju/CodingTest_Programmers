function solution(n) {
        let answer;
    let string = n.toString();    
    let arr = string.split('');
    arr.sort((a,b) => b-a)
    answer = parseInt(arr.join(''));

    

    return answer;
}