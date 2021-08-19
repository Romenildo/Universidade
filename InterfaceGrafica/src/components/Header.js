import React from "react";




export default class Header extends React.Component{

    constructor(props){
        super(props);

        
        this.usuario = null;
        this.senha = null;

        this.setUsuario = element => {this.usuario = element;};
        this.setSenha = element => {this.senha = element};  
        this.setClass = element =>{this.class = element}
    }
    


    buttonClick = (e) =>{
        e.preventDefault();
        

        if(this.usuario.value == ""){
            alert("Sem usuario")
        }
        if(this.senha.value == ""){
            alert("Sem Senha")
        }

        if(this.usuario.value != "" && this.senha.value != ""){
            alert("Login para o "+this.usuario.value+" efetuado com sucesso!")
        }
    }

    render(){
        return(
            <div className="header">
                
            <div className="header-logo">
                <p>DIARIO ELETRONICO</p>
            </div>
            <div className="header-form">
                <div className="element">
                    <p>Usuario:</p>
                    <input className="input" type="text" ref={this.setUsuario} placeholder="Digite..."></input>
                </div>
                <div className="element">
                    <p>Senha:</p>
                    <input className="input" type="password" ref={this.setSenha} placeholder="*******"></input>
                </div>
                <div className="element">
                    <input className="input" onClick={(e) => this.buttonClick(e)} type="button" value="login"></input>
                </div>
                <div   className={this.setClass}>
                    <p>Preencha todos os campos{state}</p>
                </div>
            </div>
    
            </div>
        )
    }
    

}
