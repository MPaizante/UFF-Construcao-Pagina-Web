def perm(data, n):
    if n == 1:
        print(data)
        return
    for i in range(n):
        perm(data, n - 1)
        if n % 2 == 0:
            data[i], data[n-1] = data[n-1],data[i]
        else:
            data[0],data[n-1] = data[n-1],data[0]
data =[1,2,3]
perm(data,len(data))
            
        