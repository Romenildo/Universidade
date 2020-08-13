
public class Retangulo 
{
	private int comprimento;
	private int largura;
	
	
	public Retangulo() 
	{
		
	}
	
	public Retangulo(int comprimento, int largura) //era só caso nao usasse o scanner
	{
		this.comprimento = comprimento;
		this.largura = largura;
	}
	
	public int perimetro() 
	{
		return comprimento*2 + largura*2;
	}
	
	
	public int area() 
	{
		return largura*comprimento;
	}
	
	
	public int getComprimento() 
	{
		return comprimento;
	}
	
	
	public void setComprimento(int comprimento) //tem a restrição de so alterar o valor se tiver entre 0 e 20
	{
		if(comprimento > 0.0 && comprimento < 20.0) 
		{
			this.comprimento = comprimento;
		}else 
		{
			System.out.println("Comprimento diferente das normas entre 0 e 20 seu valor é: "+ comprimento);
		}
	}
	
	
	public int getLargura() 
	{
		return largura;
	}
	
	
	
	public void setLargura(int largura) //tem a restrição de so alterar o valor se tiver entre 0 e 20
	{
		if(largura > 0.0 && largura < 20.0) 
		{
			
			this.largura = largura;
		}else 
		{
			System.out.println("Largura diferente das normas entre 0 e 20 seu valor é: "+ largura);
		}
		
	}
}
