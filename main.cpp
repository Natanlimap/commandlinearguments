#include <iostream>
#include <string.h>
#include <fstream>

int showUsage(){
		std::cout << "Uso: ./prog add <mensagem> / list" << std::endl; //Mostra para o usuario a entrada correta para o programa.
		return 1;
}
void list(int argc, const char *argv[]){

	std::ifstream file; //arquivo 
	std::string line; // linha a ser lida
	file.open("texto.txt"); // nome do arquivo aberto
	
	//arquvio nao existe
	if(!(file.is_open())){
		std::cout << "Arquivo inexistente ou inacessivel" << std::endl;
		return;
	}
	
	//Imprimindo o arquivo inteiro
	while(getline(file, line)){
		std::cout << line << std::endl;
	}

	//fecharemos o arquivo
	file.close(); 

}

int add(int argc, const char *argv[]){

	//mensagem enviada pelo cliente
	std::string message;

	//A mensagem nao foi passada pela linha de comando
	if(argc == 2)
	{ 
		std::cout << "Digite a mensagem" << std::endl;

		//recebemos o input da mensagem do cliente
		getline(std::cin, message); 
		std::cout << "Mensagem Adicionada" << std::endl;
	}
	else{

		//neste caso, a mensagem  foi passada pelo cliente via terminal, receberemos ela aqui.
		message = argv[2]; 
	}

	//abrindo o arquivo
	std::ofstream file;

	file.open("texto.txt", std::ios::app);
	
	//escrevendo a mensagem

	if(file.is_open()){

		file << message << std::endl;	
		file.close();
	}else{
		std::cout << "Arquivo inexistente ou inacessivel" << std::endl;

	}

}

int main(int argc, char const *argv[]) //funcao que mostra a implementacao de como receber argumentos pelo terminal.
{
	//nao possui argumentos alem do nome do arquivo
	if(argc == 1){
		showUsage();
		return 1;
	}

	//possui mais de 1 argumento e quer adicionar algo ao arquivo
	if(!strcmp(argv[1], "add")){
		add(argc, argv);
		return 0;
	}

	//possui mais de 1 argumento e vamos ler o arquivo
	if(!strcmp(argv[1], "list")){
		list(argc, argv);
		return 0;
	}
	
	return 0; //programa executado corretamente
}