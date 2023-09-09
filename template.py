# 整数aとbを読み取る
a, b = map(int, input().split())

# a行b列の配列を作成して初期化
matrix = []
for _ in range(a):
    row = list(map(int, input().split()))
    matrix.append(row)

# 配列の内容を表示する（確認用）
for row in matrix:
    print(row)
