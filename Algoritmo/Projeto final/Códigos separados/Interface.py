#Interface
def interface( ):
  ''' menu inicial do quiz'''

  print("-"*50+"\n")
  print("\033[1;31m     :hxh \n   da    ab "+" "*13+"** \n   kj    sg    cg   fs   gb  saoggo\n   ak    dk    ve   yc   op     ft\n   ae    gk    bb   os   ps   rer\n     :dbz  tg    mkr     ov  nognol\033[m\n\n\n")
  print("  \033[1m1-Novo jogo\033[m"+" "*10+"\033[1;32m2-Recordes\033[m"+" "*10+"\033[1;34m3-Créditos\033[m\n")


interface()
escolha_inicio = input("Escolha uma das opções: ").lower()
while escolha_inicio not in ["1","2","3"]:
  escolha_inicio = input("Opção inválida, Escolha uma das opções: ")
print("-"*50)
