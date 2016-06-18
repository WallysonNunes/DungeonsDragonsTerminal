//jogo Dungeos And Dragons
/*
   PROGRAMA........: JOGO DUNGEOS AND DRAGONS	
   CRIADO EM.......: 08/10/2011
   TERMINADO EM....: 09/10/2011
   ATUALIZADO EM...: 09/10/2011
   AUTOR...........: WALLYSON NUNES
   E-MAIL..........: linho_msn_@hotmail.com
   DESCRIÇÃO.......: JOGO ONDE O OBJETIVO DO JOGO É GANHAR DO INIMIGO
                     UM RPG INCRÍVEL
*/
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main (void) {
	srand(time(NULL)); // inicializa o gerador de números aleatórios para cada vez que ser inicializado usar números diferentes
	
	string personagem[10], personagem2[6], letra, tipo, resultado;
	int forca[2], agilidade[2], inteligencia[2], magia[2], opcao[2], dado[2], caracteristica[2],i=0, i2=0, result=0, result2=0;
	
	cout << "**************************************************************************\n";
	cout << "*                                                                        *\n";
	cout << "*                         DUNGEOS AND DRAGONS !                          *\n";
	cout << "*                                                                        *\n";
    cout << "**************************************************************************\n";
    
    cout << "Digite uma letra e aperte enter para começar a jogar !\n";
     cin >> letra;	
	
	
	
do{
	
	cout << "\n**************************************************************************\n";
	cout << "*                         Escolha seu personagem:                        *\n";
	cout << "* ______________________________________________________________________ *\n";
	cout << "* |                         | Força | Agilidade | Inteligência | Magia | *\n";
	cout << "* | 1) Arqueiro Flamejante: | 30    | 91        | 88           | 10    | *\n";
	cout << "* | 2) Bruxo da Capa Azul:  | 25    | 93        | 48           | 98    | *\n";
	cout << "* | 3) Dragão Branco:       | 99    | 97        | 73           | 15    | *\n";
	cout << "* | 4) Fada da Noite:       | 14    | 86        | 55           | 88    | *\n";
	cout << "* | 5) Gladiador Branco:    | 99    | 86        | 74           | 23    | *\n";          
	cout << "* | 6) Guerreira Ninfa:     | 98    | 55        | 88           | 24    | *\n";
	cout << "* |_________________________|_______|___________|______________|_______| *\n";
	cout << "*                                                                        *\n";
	cout << "**************************************************************************\n";
	 
	opcao[1] = rand() % 10 + 1; //personagem do mal recebe opção aleatória
	
	if (opcao[1] == 1 ) {
		personagem[0] = "Bruxa Maligna";
		forca[1] = 33;
		agilidade[1] = 86;
		inteligencia[1] = 76;
		magia[1] = 99;
	}
	else if (opcao[1] == 2) {
		personagem[1] = "Dead Skeleton";
		forca[1] = 54;
		agilidade[1] = 89;
		inteligencia[1] = 78;
		magia[1] = 15;
	}
	else if (opcao[1] == 3) {
		personagem[2] = "Dragão de Diamante";
		forca[1] = 100;
		agilidade[1] = 75;
		inteligencia[1] = 98;
		magia[1] = 50;
	}
	else if (opcao[1] == 4) {
		personagem[3] = "Dragão de Metal";
		forca[1] = 90;
		agilidade[1] = 59;
		inteligencia[1] = 88;
		magia[1] = 5;
	}
	else if (opcao[1] == 5) {
		personagem[4] = "Dragão Negro dos Olhos Vermelhos";
		forca[1] = 95;
		agilidade[1] = 85;
		inteligencia[1] = 77;
		magia[1] = 30;
	}
	else if (opcao[1] == 6) {
		personagem[5] = "Evil Fairy";
		forca[1] = 5;
		agilidade[1] = 95;
		inteligencia[1] = 68;
		magia[1] = 87;
	}
	else if (opcao[1] == 7) {
		personagem[6] = "Gladiador das Sombras";
		forca[1] = 98;
		agilidade[1] = 89;
		inteligencia[1] = 30;
		magia[1] = 2;
	}
	else if (opcao[1] == 8) {
		personagem[7] = "Morlocks";
		forca[1] = 90;
		agilidade[1] = 80;
		inteligencia[1] = 15;
		magia[1] = 5;
	}
	else if (opcao[1] == 9) {
		personagem[8] = "Ogro Negro";
		forca[1] = 93;
		agilidade[1] = 80;
		inteligencia[1] = 41;
		magia[1] = 13;
	}
	else if (opcao[1] == 10) {
		personagem[9] = "The Girl looks Red";
		forca[1] = 25;
		agilidade[1] = 99;
		inteligencia[1] = 85;
		magia[1] = 12;
	}
	
	volta:     
	cout << "\nDigite o número correspondente ao personagem: \n";
	 cin >> opcao[0];
	 
	if (opcao[0] == 1) {
		personagem2[0] = "Arqueiro Flamejante";
		forca[0] = 30;
		agilidade[0] = 91;
		inteligencia[0] = 88;
		magia[0] = 10;
	}
	else if (opcao[0] == 2) {
		personagem2[1] = "Bruxo da Capa Azul";
		forca[0] = 25;
		agilidade[0] = 93;
		inteligencia[0] = 48;
		magia[0] = 98;
	}
	else if (opcao[0] == 3) {
		personagem2[2] = "Dragão Branco";
		forca[0] = 99;
		agilidade[0] = 97;
		inteligencia[0] = 73;
		magia[0] = 15;
	}              
	else if (opcao[0] == 4) {
		personagem2[3] = "Fada da Noite";
		forca[0] = 14;
		agilidade[0] = 86;
		inteligencia[0] = 55;
		magia[0] = 88;
	}
	else if (opcao[0] == 5) {
		personagem2[4] = "Gladiador Branco";
		forca[0] = 99;
		agilidade[0] = 86;
		inteligencia[0] = 74;
		magia[0] = 23;
	}
	else if (opcao[0] == 6) {
		personagem2[5] = "Guerreira Ninfa";
		forca[0] = 98;
		agilidade[0] = 55;
		inteligencia[0] = 88;
		magia[0] = 24;
	}
	else {
		cout << "Opção Inválida !\n";
		goto volta;
	}
	
	cout << "Agora o maior número nos dados, tem a opção de escolher a característica para\nlutar, digite um letra e pressione enter para começar !\n";
	 cin >> letra;
	
	do {
	
	dado[0] = rand() % 6 + 1; //dado do usuário recebe opção aleatória
	dado[1] = rand() % 6 + 1; //dado do mal recebe opção aleatória 
	
	cout << "\nDado do usuário : "<< dado[0] <<endl;
	cout << "Dado do oponente: "<< dado[1] <<endl;   
	                             
	if (dado[0] > dado[1]) {
		cout << "\nVocê venceu nos dados !\n\n";
		cout << "Escolha a característica a ser usada na batalha: \n1)Força\n2)Agilidade\n3)Inteligência\n4)Magia\nDigite a característica: ";
		 cin >> caracteristica[0];
		 
		if (caracteristica[0] == 1) {
			caracteristica[0] = forca[0];
			caracteristica[1] = forca[1];
			tipo = "Força";
			}
		else if (caracteristica[0] == 2) {
			caracteristica[0] = agilidade[0];
			caracteristica[1] = agilidade[1];
			tipo = "Agilidade";
			}
		else if (caracteristica[0] == 3) {
			caracteristica[0] = inteligencia[0];
			caracteristica[1] = inteligencia[1];
			tipo = "Inteligência";
			}
		else if (caracteristica[0] == 4) {
			caracteristica[0] = magia[0];
			caracteristica[1] = magia[1];
			tipo = "magia";
			}
		i = 2;
		}
	else if (dado[0] < dado[1]) {
		cout << "\nVocê perdeu nos dados !\n\n";
		dado[1] = rand() % 4 + 1; //dado do mal recebe opção aleatória, para escolher a característica a ser usada na batalha 
		if (dado[1] == 1) {
			caracteristica[0] = forca[0];
			caracteristica[1] = forca[1];
			tipo = "Força";
		}
		else if (dado[1] == 2) {
			caracteristica[0] = agilidade[0];
			caracteristica[1] = agilidade[1];
			tipo = "Agilidade";
		}
		else if (dado[1] == 3) {
			caracteristica[0] = inteligencia[0];
			caracteristica[1] = inteligencia[1];
			tipo = "Inteligência";
		}
		else if (dado[1] == 4) {
			caracteristica[0] = magia[0];
			caracteristica[1] = magia[1];
			tipo = "magia";
		}
		i = 2;
		}
	else
		i = 0;
		
	if (caracteristica[0] > caracteristica[1]){
		resultado = "Você venceu !";
		result += 1;
	}
	else if (caracteristica[0] < caracteristica[1]){
		resultado = "Você perdeu !";
		result2 += 1;
	}
	else {
		resultado = "Vocês Empataram !";
		result += 1;
		result2 += 1;
	}
		
	cout << "**************************************\n";
	cout << "                                      \n";
	cout << "   "<< personagem2[opcao[0]-1] <<" X "<< personagem[opcao[1]-1] <<"\n";
	cout << "                                      \n";
	cout << "   "<<tipo<<" do usuário : "<< caracteristica[0] <<"\n";
	cout << "   "<<tipo<<" do oponente: "<< caracteristica[1] <<"\n";
	cout << "                                      \n";
	cout << "   Resultado: "<< resultado <<"       \n";
	cout << "                                      \n";
	cout << "**************************************\n";
		
	}while ( i != 2);
	cout << "Digite um letra e aperte enter para ir para próxima rodada !\n";
	 cin >> letra;
	i2 += 1;
}while (i2 != 4);
	
	if (result > result2) {
			
		cout << "**************************************\n";
		cout << "                                      \n";
		cout << "           Resultado Final:           \n";
		cout << "                                      \n";
		cout << "   Pontos do usuário : "<< result  << "\n";
		cout << "   Pontos do oponente: "<< result2 << "\n";
		cout << "                                      \n";
		cout << "         Resultado: Você Venceu !     \n";
		cout << "                                      \n";
		cout << "**************************************\n";
	}
	else if (result < result2) {
		
		cout << "**************************************\n";
		cout << "                                      \n";
		cout << "           Resultado Final:           \n";
		cout << "                                      \n";
		cout << "   Pontos do usuário : "<< result  << "\n";
		cout << "   Pontos do oponente: "<< result2 << "\n";
		cout << "                                      \n";
		cout << "         Resultado: Você Perdeu !     \n";
		cout << "                                      \n";
		cout << "**************************************\n";
	}
	else{
		cout << "**************************************\n";
		cout << "                                      \n";
		cout << "           Resultado Final:           \n";
		cout << "                                      \n";
		cout << "   Pontos do usuário : "<< result  << "\n";
		cout << "   Pontos do oponente: "<< result2 << "\n";
		cout << "                                      \n";
		cout << "         Resultado: Vocês Empataram ! \n";
		cout << "                                      \n";
		cout << "**************************************\n";
	}
return 0;
}
