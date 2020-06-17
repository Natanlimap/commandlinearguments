#include <iostream>
#include <string.h>
#include <fstream>



int main(int argc, char const *argv[]) //funcao que mostra a implementacao de como receber argumentos pelo terminal.
{
	if(argc == 1) // verifica quantos parametros foram passados pela linha de comando
	{ 
		std::cout << "Uso: ./prog add <mensagem>" << std::endl; //Mostra para o usuario a entrada correta para o programa.
		return 1;
	}

	//verifica se a outro argumento na linha de comando alem do nome do programa, e se esse comando se chamada "add"
	else if(argc >= 2 && !(strcmp(argv[1], "add")))
	{ 
		//mensagem enviada pelo cliente
		std::string message;

		//Arquivo que ira receber o output
		std::ofstream file;  
		
		//se o programa receber 2 argumentos, significa que o cliente nao passou a mensagem
		if(argc == 2)
		{ 

			std::cout << "Digite a mensagem" << std::endl;

			//recebemos o input da mensagem do cliente
			getline(std::cin, message); 
			std::cout << "Mensagem Adicionada" << std::endl;
		}else{

			//neste caso, a mensagem  foi passada pelo cliente via terminal, receberemos ela aqui.
			message = argv[2]; 
		}

		//abrindo o arquivo chamado texto.txt
		file.open("texto.txt", std::ios::app); 

		//Escrevemos a mensagem
		file << message << std::endl;

		//Fechamos o arquivo
		file.close();
		
		//imprimimos a mensagem
		std::cout << message << std::endl;
	}
	return 0; //programa executado corretamente
}