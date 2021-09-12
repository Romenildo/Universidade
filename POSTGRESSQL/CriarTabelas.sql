
CREATE TABLE cidade (
	codigo SERIAL PRIMARY KEY,
	nome VARCHAR(30) NOT NULL,
	estado VARCHAR(20) NOT NULL,
	populacao INT NOT NULL
);
CREATE TABLE Ponto_turistico(
	cod_pt INT PRIMARY KEY;
	tipo INT,
	cod_cid INT,
	FOREIGN KEY(cod_cid) REFERENCES cidade(codigo)
);

CREATE TABLE Igreja(
	cod_igreja INT IDENTITY(1000,1) PRIMARY KEY,
	cod_pt INT,
	estilo-igreja VARCHAR(30),
	desc_igreja TEXT,
	data DATE,
	FOREIGN KEY(cod_pt)REFERENCES Ponto_turistico(cod_pt)
);
CREATE TABLE end_igreja(
	cod_igreja INT PRIMARY KEY,
	rua VARCHAR(50),
	bairro VARCHAR(50),
	numero INT,
	FOREIGN KEY(cod_igreja) REFERENCES Igreja(cod_igreja)
);

CREATE TABLE Museu(
	cod_museu INT IDENTITY(2000,1) PRIMARY KEY,
	cod_pt INT,
	data_fundacao DATE NOT NULL,
	num_salas SMALLINT,
	desc_museu TEXT,
	FOREIGN KEY(cod_pt)REFERENCES Ponto_turistico(cod_pt)
);

CREATE TABLE end_museu(
	cod_museu INT PRIMARY KEY,
	rua VARCHAR(50),
	bairro VARCHAR(50),
	numero INT,
	FOREIGN KEY(cod_museu) REFERENCES Museu(cod_museu)
);
CREATE TABLE Fundador(
	cod_fundador INT PRIMARY KEY,
	nacionalidade_fund VARCHAR(40),
	nome_fund VARCHAR(50) NOTNULL,
	data_nasc_fund DATE,
	data_morte_fund DATE,
	atv_prof_fund TEXT
);
CREATE TABLE Igreja_fundada_por_Fundador(
	cod_museu INT,
	cod_fundador INT,
	FOREIGN KEY(cod_museu)REFERENCES Museu(cod_museu),
	FOREIGN KEY(cod_fundador)REFERENCES Fundador(cod_fundador)
);

CREATE TABLE Casa_de_show(
	cod_show INT PRIMARY KEY,
	cod_rest INT,
	hor_abertura TIME,
	dia_fechamente VARCHAR(20),
	desc_show TEXT,
	cod_pt INT,
	FOREIGN KEY(cod_pt)REFERENCES Ponto_turistico(cod_pt),
	FOREIGN KEY(cod_rest) REFERENCES Restaurante(cod_rest),
);
CREATE TABLE end_show(
	cod_show INT PRIMARY KEY,
	rua VARCHAR(50),
	bairro VARCHAR(50),
	numero INT,
	FOREIGN KEY(cod_show) REFERENCES Casa_de_show(cod_show)
);

CREATE TABLE Restaurante(
	cod_rest INT PRIMARY KEY,
	nome_rest VARCHAR(50) NOTNULL,
	categoria_rest VARCHAR(30),
	especialidade_rest VARCHAR(50),
	preco_medio_rest MONEY,
	cod_cid INT,
	FOREIGN KEY(cod_cid) REFERENCES Cidade(codigo)
);
CREATE TABLE end_rest(
	cod_rest INT PRIMARY KEY,
	rua VARCHAR(50),
	bairro VARCHAR(50),
	numero INT,
	FOREIGN KEY(cod_rest) REFERENCES Restaurante(cod_rest)
);

CREATE TABLE Hotel(

);


