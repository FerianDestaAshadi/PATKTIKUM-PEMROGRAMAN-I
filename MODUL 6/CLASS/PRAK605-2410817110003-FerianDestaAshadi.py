n = int(input(""))

A = []
B = []

print("Matriks A")
for i in range(n):
    A.append(list(map(int, input().split())))
    
print("Matriks B")
for i in range(n):
    B.append(list(map(int, input().split())))
    
C = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]
            
print("\nMatriks AXB")
for i in range(n):
    print(" ".join(map(str, C[i])))