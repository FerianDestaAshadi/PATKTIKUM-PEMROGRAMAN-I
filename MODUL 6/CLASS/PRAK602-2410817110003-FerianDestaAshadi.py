n = int(input())

zetsu = list(map(int, input().split()))

for i in range(n):
    zetsu[i] *= (i + 1)
print("\n")

print(" ".join(map(str, zetsu)))