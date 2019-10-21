from random import choice
def resp_certa(x_random):
  if x_random == 1:
    correta = "b"
  elif x_random == 2:
    correta = "a"
  elif x_random == 3:
    correta = "d"
  elif x_random == 4:
    correta = "c"
  elif x_random == 5:
    correta = "a"
  elif x_random == 6:
    correta = "c"
  elif x_random == 7:
    correta = "b"
  return correta

ordem_perguntas = [1,2,3,4,5,6]
x_random = choice(ordem_perguntas)

print(resp_certa(x_random))
