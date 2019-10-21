def interface_final(nome,pontuacao):
  print("\033[0;33m-"+"-"*49+"\n"+"-"*50+"\n---    Parabéns você acertou",pontuacao,"Perguntas.     ---")
  print("--- "+" "*43+"---\n--- "+" "*43+"---")
  print("---          Jogador               Pontos      ---")
  jogador1,jogador2,jogador3 = "___"
  nome = nome[0:7]
  rank1= 0 
  rank2 = 0 
  rank3 = 0
  if pontuacao >= rank1:
    rank1 = pontuacao 
    jogador1 = nome 
  elif pontuacao<rank1:
    rank2 = pontuacao
    jogador2 = nome
  elif pontuacao <rank2:
    rank3 = pontuacao
    jogador3 = nome

  print("---          ",jogador1,"              ",rank1,"       ")
  print("---            ",jogador2,"                 ",rank2,"       ")
  print("---            ",jogador3,"                 ",rank3,"       \n---"+" "*42+"  ---")
  print("---             1-Jogar Novamente      2-Sair  ---")
  print("-"*50+"\n")

nome = "Pedro"
pontuacao = 17

interface_final(nome,pontuacao)
