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
	else if(argc >= 2 && !(strcmp(argv[1], "add")))
	{ //verifica se a outro argumento na linha de comando alem do nome do programa, e se esse comando se chamada "add"
		std::string message;
		std::ofstream file; //Arquivo que ira receber 
		if(argc == 2)
		{ //se o programa receber 2 argumentos, significa que o cliente nao passou a mensagem
			getline(std::cin, message); //recebemos o input da mensagem do cliente
			std::cout << "Mensagem Adicionada" << std::endl; //mostramos que a mensagem foi adicionada

		}else{
			message = argv[2]; //como a mensagem foi passada pelo cliente, receberemos ela aqui.
		}
		file.open("texto.txt", std::ios::app);
		file << message << std::endl;
		file.close();

		std::cout << message << std::endl; //imprimimos a mensagem
	}
	return 0; //programa executado corretamente
}