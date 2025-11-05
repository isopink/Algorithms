N = int(input())

if N == 1:
    exit()  # 아무것도 출력하지 않음

i = 2
while i * i <= N:
    while N % i == 0:
        print(i)
        N //= i
    i += 1

if N > 1:
    print(N)