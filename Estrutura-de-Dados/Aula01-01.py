def perm(data, n):
    if n == 1:
        print(data)
        return
    for i in range(n):
        prem(data, n - 1)
        if n % 2 == 0:
            data[i], data[n-1]
        