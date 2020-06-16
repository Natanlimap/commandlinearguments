#include <iostream>
#include <string.h>

int main(int argc, char const *argv[])
{
	if(argc == 1) // verifica quantos parametros foram passados pela linha de comando
	{ 
		std::cout << "Uso: ./prog add <mensagem>" << std::endl; //Mostra para o usuario a entrada correta para o programa.
		return 1;
	}
	else if(argc >= 2 && !(strcmp(argv[1], "add")))
	{ //verifica se a outro argumento na linha de comando alem do nome do programa, e se esse comando se chamada "add"
		
		std::string message; //variavel que recebe a mensagem que sera digitada pelo usuario
		if(argc == 2)
		{ //se o programa receber 2 argumentos, significa que o cliente nao passou a mensagem
			getline(std::cin, message); //recebemos o input da mensagem do cliente
		}else{
			message = argv[2]; //como a mensagem foi passada pelo cliente, receberemos ela aqui.
		}
		std::cout << message << std::endl; //imprimimos a mensagem
	}
	return 0; //programa executado corretamente
}