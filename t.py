from sympy import Matrix, Rational

# Создаём матрицу из целых чисел (не float!)
A1_sym = Matrix([
    [3, -5, 1],
    [-5, -4, -3],
    [6, 4, 2]
])

# Находим обратную матрицу — результат будет в виде дробей
inv_A1_sym = A1_sym.inv()

print("1) Обратная матрица (в дробях):")
print(inv_A1_sym)
