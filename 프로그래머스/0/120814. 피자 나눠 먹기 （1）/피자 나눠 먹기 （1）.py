def solution(n):
    answer = 0
    
    if n % 7 == 0:
        return int(n/7)
    else:
        return int(n/7)+1
    
