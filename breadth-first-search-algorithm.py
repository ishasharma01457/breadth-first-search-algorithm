def bfs(v,gra,c):
    v.append(c)
    queue = []
    queue.append(c)
    while queue:
        s = queue.pop(0)
        print(s)
        for bran in gra[s]:
            if bran not in v:
                v.append(bran)
                queue.append(bran)
                
                
                
                
                
                
                
                
                
                
gra = {
    'A': ['B','C', "D"],
    'B': ['E',"F"],
    'C': ['G',"I"],
    'D': ['I'],
    'E': ['G','F'],
    'F': ['I','C'],
    'G': ['A','B'],
    "I": ['B','C']
}
bfs([],gra, 'D')