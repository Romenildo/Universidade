import img_IA from '../resources/IA.png'

export default function(){
    
    return(
        <div className="main">
            <div class ="texto">
            <h1>Inteligência artificial</h1>

            <h2>Tempos atuais com Inteligencia artificial e seu surgimento</h2>

            <p className="texto-principal"><b>Inteligência artificial</b> (por vezes mencionada pela sigla em português IA ou pela sigla em inglês AI - artificial intelligence) é a inteligência similar à humana exibida por sistemas de software, além de também ser um campo de estudo acadêmico.</p>

            <p className="texto-principal">O principal objetivo dos sistemas de IA, é executar funções que, caso um ser humano fosse executar, seriam consideradas inteligentes. É um conceito amplo, e que recebe tantas definições quanto damos significados diferentes à palavra inteligência.</p>

            <p className="texto-principal">O desenvolvimento da área começou logo após a Segunda Guerra Mundial, com o artigo <i>"Computing Machinery and Intelligence" </i>do matemático inglês Alan Turing, e o próprio nome foi cunhado em 1956. Seus principais idealizadores foram os cientistas Herbert Simon, Allen Newell, John McCarthy, Warren McCulloch, Walter Pitts e Marvin Minsky, entre outros. </p>

            <p className="texto-principal">Apenas recentemente, com o surgimento do computador moderno, é que a inteligência artificial ganhou meios e massa crítica para se estabelecer como ciência integral, com problemáticas e metodologias próprias. Desde então, seu desenvolvimento tem extrapolado os clássicos programas de xadrez ou de conversão e envolvido áreas como visão computacional, análise e síntese da voz, lógica difusa, redes neurais artificiais e muitas outras. Inicialmente a IA visava reproduzir o pensamento humano</p>

            <p class="citacao"><i>
                “O que todos devemos fazer é nos certificar que estamos usando a inteligência artificial de uma maneira que beneficie a humanidade, e não que a deteriore”
                [Tim Cook, CEO da Apple]</i></p>
            </div>
            <div className="imagem">
                <img src={img_IA }/>
                <text className="img_text">Image: Inteligencia artificial /2020</text>
            </div>
      </div>
    );
}
