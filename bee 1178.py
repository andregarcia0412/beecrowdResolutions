x = float(input())
arr = []
for i in range(100):
    arr.append(x)
    print(f"N[{i}] = {x:.4f}")
    x /= 2