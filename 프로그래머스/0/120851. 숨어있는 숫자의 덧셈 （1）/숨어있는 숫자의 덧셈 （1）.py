def solution(my_string):
    answer = 0
    
    
    for x in my_string:
        if x.isnumeric():
            answer+=int(x)
    
    return answer