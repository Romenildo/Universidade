# gerar perguntas aleatorias
from random import choice
val = [1,2,3,4,5,6]
for i in range (6):
  x = choice(val)
  print(x)

  val.remove(x)
