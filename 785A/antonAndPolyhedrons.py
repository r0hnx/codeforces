n = int(input())
c = 0
m = {
    'T': 4,
    'C': 6,
    'O': 8,
    'D': 12,
    'I': 20
}
while n > 0:
    c += m[input()[0]]
    n -= 1
print(c)
