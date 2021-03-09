#ifndef FUNCOES_CLASSES_HPP
#define FUNCOES_CLASSES_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>

using namespace std;

// Classe para representar uma música no sistema
class musica{

    private:

    public:
        
        // Variável para armazenar o nome da música
        string nome;
        // Variável para armazenar o nome do autor da música
        string autor;
        // Variável para armazenar o ponteiro da música
        musica *next;
};

// Classe para representar a lista encadeada de músicas no sistema
class lista_musica{
    private:
        // Cria o head e tail da lista
		musica *head, *tail;
	public:
        // Variável para armazenar o nome da playlist da lista
		string nome_playlist;

        // Construtor da classe
        lista_musica(){
			head=NULL;
			tail=NULL;
		}

        int buscar(string nome1, string autor1);

		void inserir(string nome1, string autor1);

        void deletar(string nome2, string autor2);

        void listar();

        void mover(int posi1, int posi2);

        void tocar(int n);

        // Versão sobrecarregada
        void inserir(lista_musica *lista);

        void deletar(lista_musica *lista);

        lista_musica(const lista_musica &nova_playlist);

        lista_musica operator+(lista_musica &adicionada);

        std::ostream& operator<<(std::ostream &nome, std::ostream &autor, lista_musica **musi, int n);

        
};

// Classe para representar uma playlist no sistema
class playlist{

    private:

    public:
        
        // Variável para armazenar o nome da playlist
        string nome_playlist;
        // Variável para armazenar o ponteiro da playlist
        playlist *next2;
};

// Classe para representar a lista encadeada de playlists no sistema
class lista_playlist{

    private:
        // Cria o head e tail da lista
        playlist *head2, *tail2;
    public:

        // Construtor da classe
        lista_playlist(){
			head2=NULL;
			tail2=NULL;
		}

        int encontrar_playlist(string nome);

        void adicionar_playlist(string nome1);

        void remover_playlist(string nome2);

        void listar_playlist();

        void listar_musica(lista_musica **musi, int n, string nome_play);

        void mover_musica(lista_musica **musi, int n);

        void tocar_musica(lista_musica **musi, int n, string nome_play, int prox);

        // Versões alteradas
        void adicionar_musica(lista_musica **musi, int n, int tipo=1, int playlist_adi=NULL);

        void remover_musica(lista_musica **musi, int n, int tam,  int tipo=1, int playlist_adi=NULL);

        // Versões sobrecarregadas

        lista_playlist(const lista_playlist &nova_playlist);

};

// Pergunta ao usuário se deseja realizar outra operação
char outra_alteracao(char n);

#endif