def solution(n):
    answer = []
    
    for x in range(1,n+1):
        if x % 2 == 1:
            answer.append(x) 
    return answer