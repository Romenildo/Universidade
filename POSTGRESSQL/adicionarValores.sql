INSERT INTO cidade(nome, estado, populacao)
VALUES
('joao pessoa','paraiba',100000),
('campina grande', 'paraiba', 50000),
('Alagoa grande', 'paraiba', 20000);

INSERT INTO Igreja(estilo, desc_igreja,data_const)
VALUES
('catedral','igreja aberta aos sabados e domingos','2000/01/07'),
('basilica','igreja para louvar ao senhor','1989/07/02'),
('catedral','igreja aberta aos domingos', '1900/02/01');

INSERT INTO end_igreja(rua,bairro,numero)
VALUES
('centro','centro',50),
('alpido','centro', 20),
('olimpo','centro',192);

INSERT INTO Museu(dara_fundacao, num_salas, desc_museu)
VALUES
('2019/01/12',30,'museu de artes'),
('1976/05/03',70,'museu de historia nacional'),
('2005/05/02', 'museu de artigos historicos da arte nacional');

INSERT INTO end_museu(rua,bairro,numero)
VALUES
('centro','centro',502),
('alpido','centro', 230),
('olimpo','centro',12);

INSERT INTO Fundador(nacionalidade, nome, data_nasc,data_morte,atv_profissional)
VALUES
('brasileiro','josé augusto','1970/08/09','2021/02/01','gerenciava empresa de arquitetura'),
('espanhol', 'maria jose','1950/07/09','2010/02/01','arquitetu de deus'),
('brasileiro','isain de alcantra','1870/08/04','1912/09/06','bisbo' );

INSERT INTO Restaurante(nome,categoria,especialidade, preco_medio)
VALUES
('5 irmaos','0 estrelas', 'especiarias',15.00),
('canto dos peixes', '2 estrelas', 'peixes brasileiros',30.00),
('Don quixote','5 estrelas', 'gastronimico', 200.00);

INSERT INTO end_rest(rua,bairro,numero)
VALUES
('centro','centro',123),
('alpido','centro', 220),
('olimpo','centro',1532);

INSERT INTO Casa_de_show(hora_abertura,dia_fechamento,descricao)
VALUES
('00:19:00','quartas e quintas','casa de show punk'),
('00:17:00','sabados','casa de show de rock'),
('00:20:00','quartas e quintas','casa de show eletronica');

INSERT INTO end_Casa_de_show(rua,bairro,numero)
VALUES
('centro','centro',123),
('alpido','centro', 220),
('olimpo','centro',1532);

INSERT INTO Hotel(nome, categoria)
VALUES
('pousada da lu', 'pousada'),
('two hotel', 'hotel de luxo'),
('hotel center espress', 'hotel de luxo');

INSERT INTO Quarto(num_quarto, valor_diaria, tipo_quarto)
VALUES
(12,25.05,"casal"),
(1,12.00,"Solteiro"),
(21, 50.00,"luxo");

INSERT INTO end_hotel(rua,bairro,numero)
VALUES
('centro','centro',1232),
('alpido','centro', 2220),
('olimpo','centro',32);
