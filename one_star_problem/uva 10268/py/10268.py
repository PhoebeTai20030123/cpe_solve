while True:
    try:
        x=int(input())
        v=list(map(int,input().split()))
        sum=0;
        for i in range(len(v)-1):
            sum+=v[i]*(len(v)-i-1)*x**(len(v)-i-1-1);
        print(sum)
    except EOFError:
        break