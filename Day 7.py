#Multiplication Table function
def multilplication_table():
  for i in range(1,13):
    print("Multiples of ", i, ":\t", end="")
    for j in range(1,13):
      print(i * j , end = " ")
    print("\n")

multilplication_table()
