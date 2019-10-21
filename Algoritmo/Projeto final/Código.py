from random import choice #biblioteca que gera num aleatorios
perguntas = [ ["Qual a primeira mulher a ganhar um prêmio Nobel:    \n\n a)Madre Teresa de Calcutá"+" "* 12+"c)Iréne Joliot-Curie \n b)Elizabeth Blackweel"+" "* 16+"d)Marie Curie \n" ],
["Qual o número mínimo de jogadores em uma partida de futebol:   \n\n a) 8"+" "* 20+"c) 9 \n b) 7"+" "* 20+"d)10 \n" ],
["QUal o maior animal terrestre:   \n\n a)Baleia Azul"+" "* 20+"c)Elefante africano \n b)Tubarão branco"+" "* 17+"d)Girafa \n" ],
["Qual desses estados não fazem fronteira com a Paraíba:   \n\n a)Pernambuco"+" "* 15+"c)Rio Grande do Norte \n b)Piauí"+" "* 20+"d)Ceará \n" ],
["Qual país será sede da proxíma copa do mundo em 2022:   \n\n a)Catar"+" "* 21+"c)Alemanha \n b)França"+" "* 20+"d)Japão \n" ],
["Qual a maior goleada em copa do mundo feminina de futebol:   \n\n a)EUA x Tailândia"+" "* 17+"c)Brasil x Suécia \n b)Inglaterra x França"+" "* 13+"d)Inglaterra x Panamá \n" ],
["Como é chamado o processo em que uma comunidade escolhe seus governantes através do voto?   \n\n a)Elegia"+" "* 20+"c)Elação \n b)Ejeção"+" "* 20+"d)Eleição \n" ],
["O caramelo é retirado de onde:   \n\n a)Cacau"+" "* 22+"c)Açúcar \n b)Pimenta"+" "* 20+"d)Sal \n" ],
["O texto sobreposto às imagens de filmes com a tradução das falas é chamado de:   \n\n a)Dublagem"+" "* 20+"c)Trailer \n b)Legenda"+" "* 21+"d)Roteiro \n" ],
["Monocultura se baseia no cultivo de:   \n\n a)Um só produto"+" "* 21+"c)Verduras \n b)Somente frutas"+" "* 20+"d)Vários produtos \n" ],
["A Caatinga é uma vegetação típica de qual região brasileira:   \n\n a)Norte"+" "* 24+"c)Nordeste \n b)Sudeste"+" "* 22+"d)Sul \n" ],
["Qual é o jogo que combina peças embaralhadas a fim de formar uma figura:   \n\n a)Cirandinha"+" "* 23+"c)Amarelinha \n b)Quebra-cabeça"+" "* 20+"d)Dama \n" ],
["Normalmente, qual é o tamanho da foto utilizada em uma carteira de identidade:   \n\n a)15x21"+" "* 20+"c)5x7 \n b)10x15"+" "* 20+"d)3x4 \n" ],
["Qual a melhor classificação de mãos do Poker Tradicional:   \n\n a)Straight Flush"+" "* 20+"c)Full House \n b)Quadra"+" "* 28+"d)Flush \n" ],
["Qual a capital da Paraíba:   \n\n a)Guarabira"+" "* 25+"c)João Pessoa \n b)Campina Grande"+" "* 20+"d)Alagoa Grande \n" ],
["Qual dessas substâncias não é solúvel em água:   \n\n a)Açúcar"+" "* 20+"c)Sal \n b)Café"+" "* 22+"d)Óleo \n" ],
["Prefeito, governador e presidente da república são reprensentantes do poder:   \n\n a)Monárquico"+" "* 19+"c)Judiciário \n b)Executivo"+" "* 20+"d)Legislativo \n" ],
["Cavalo, rainha e torre são peças de qual jogo?   \n\n a)Xadrez"+" "* 20+"c)Damas \n b)Gamão"+" "* 21+"d)Dominó \n" ],
["Qual é o idioma mais falado na maioria dos países da américa latina:   \n\n a)Inglês"+" "* 21+"c)Espanhol \n b)Francês"+" "* 20+"d)Português \n" ],
["Onde são comprados livros usados?   \n\n a)Locadora"+" "* 16+"c)Museu \n b)Sebo"+" "* 20+"d)Alfeito \n" ],
["Qual ano foi anunciado o primeiro computador digital conhecido como:ENIAC   \n\n a)1974"+" "* 20+"c)1896 \n b)1936"+" "* 20+"d)1946 \n" ]]
def interface_creditos( ):
  ''' interface da pagina de créditos quando digitar 3 '''


  print("\033[0;34m-"+"-"*49+"\n"+"-"*50+"\n---    Projeto da disciplina de algoritmos     ---\n---"+" "*10+"Feito por:"+" "*24+ "---\n---"+" "*12+"Romenildo Ferreira"+" "*14+"---\n---"+" "*12+"Jorge Sousa"+" "*21+"---\n---"+" "*12+"Natália Guimarães "+" "*14+"---\n---"+" "*12+"José Alberto  "+" "*18+"---\n---"+" "*12+"Samuel Alves"+" "*20+"---\n---"+" "*8+" Universidade Estadual da Paraíba   ---\n---"+" "*15+" CCT-Ciências da computação  ---")
  print("---"+" "*31+"\033[1;31m1-Voltar\033[m     \033[1;34m---\n"+"-"*50+"\033[m")

def interface_final(nome,pontuacao):
  print("\033[0;33m-"+"-"*49+"\n"+"-"*50+"\n---    Parabéns você acertou",pontuacao,"Perguntas.      ---")
  nome = nome[:8]
  print("--- "+" "*43+"---\n--- "+" "*43+"---")
  print("---          Jogador(a)            Pontos      ---")
  print(f'---{nome:>18}       {pontuacao:>11}         ---')
  print("---"+" "*44+"---")
  print("---             1-Jogar Novamente      2-Sair  ---")
  print("-"*50+"\033[m")

def interface( ):
  ''' menu inicial do quiz'''


  print("-"*50+"\n")
  print("\033[1;31m     :hxh \n   da    ab "+" "*13+"** \n   kj    sg    cg   fs   gb  saoggo\n   ak    dk    ve   yc   op     ft\n   ae    gk    bb   os   ps   rer\n     :dbz  tg    mkr     ov  nognol\033[m\n\n\n")
  print("  \033[1m1-Novo jogo\033[m"+" "*10+"\033[1;34m2-Créditos\033[m\n")

def resp_certa(x_random):
  ''' define a resposta correta dependendo da pergunta'''


  if x_random == 0:
    correta = "d"
  elif x_random == 1:
    correta = "b"
  elif x_random == 2:
    correta = "c"
  elif x_random == 3:
    correta = "b"
  elif x_random == 4:
    correta = "a"
  elif x_random == 5:
    correta = "a"
  elif x_random == 6:
    correta = "d"
  elif x_random == 7:
    correta = "c"
  elif x_random == 8:
    correta = "b"
  elif x_random == 9:
    correta = "a"
  elif x_random == 10:
    correta = "c"
  elif x_random == 11:
    correta = "b"
  elif x_random == 12:
    correta = "d"
  elif x_random == 13:
    correta = "a"
  elif x_random == 14:
    correta = "c"
  elif x_random == 15:
    correta = "d"
  elif x_random == 16:
    correta = "b"
  elif x_random == 17:
    correta = "a"
  elif x_random == 18:
    correta = "c"
  elif x_random == 19:
    correta = "b"
  elif x_random == 20:
    correta = "d"

  return correta 

while True:
  happy_end = False
  errou = False
  sair = False
  interface()
  escolha_inicio = input("Escolha uma das opções: ").lower()
  while escolha_inicio not in ["1","2"]:
    escolha_inicio = input("Opção inválida, Escolha uma das opções: ")
  print("-"*50)
  if escolha_inicio == "2":
    interface_creditos( )
    voltar_creditos = input("Escolha uma opção: ")
    while voltar_creditos not in ["1"]:
      voltar_creditos = input("Escolha uma opção: ")
    if voltar_creditos == "1":
        isso_e_inutil = "X"
  elif escolha_inicio == "2":
    interface_recordes(nome,pontuacao)

  elif escolha_inicio == "1":
    pontuacao = 0
    ordem_perguntas = [0,1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20] # ordem para o random
    for i in range(20):
      x_random = choice(ordem_perguntas)# gera a aleatoriedade
      print(perguntas[x_random][0])#print pergunta aleatoria
      correta = resp_certa(x_random) #dependendo qual pergunta for ele altera a resposta 
      ordem_perguntas.remove(x_random)# pra não ficar repetindo as perguntas

      
      resposta = input("Digite sua resposta: ").lower()
      while resposta not in ["a","b","c","d"]: #se digitar algo que n está na resposta, ele ira pergunta ate dizer uma das alternativas
        resposta = input("Digite uma das opções: ").lower()
      
      if resposta == correta: #verifica se esta correta
        print("Correto!!!")
        pontuacao+= 1     # pontuacao por cada acerto
        print("-"*50)
        if pontuacao == 20:
          print("\033[0;33m-"*49+"-\n---Parabéns Você Acertou Todas as Perguntas!!! ---\n"+"-"*49+"-\n"+"-"*49+"-\033[m")
          happy_end = True
      else:
        print("Resposta Errada!!!")
        print("Resposta Certa era: ",correta)
        errou = True
        nome_final = input("Digite seu nome: ")
        interface_final(nome_final,pontuacao)
        resp_final = input("Escolha uma das opções: ")
        while resp_final not in ["1","2"]:
          resp_final = input("Escolha uma das opções: ")
        if resp_final == "2":
          sair = True
        elif resp_final =="1":
          isso_e_inutil= "X"
        print("-"*50)
      if errou == True:
        break
  if happy_end == True:
    break
  if sair == True:
    break    
