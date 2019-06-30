#include <stdio.h>
#include <stdlib.h>
#include "piece.h"
#define PROMU 0
#define NON_PROMU 1
/****************************************************************/
piece_t piece_initialiser()
{
	piece_t p;
		p.joueur=0;
		p.type='\0';
		p.statut=0;
	return p;
}
piece_t piece_creer(int j, char t, int s)
{
	piece_t p;
		p.joueur=j;
		p.type=t;
		p.statut=s;
	return p;
}

void afficher(piece_t p)
{
	printf("%c",p.type);
}

int piece_joueur(piece_t p)
{
	return p.joueur;
}
piece_t piece_identifier(char x)
{
	int j1=0;
	int j2=1;
	//int st;
	
	
	
	char p='p';	char P='P'; 
	char l='l'; 	char L='L';
	char n='n';	char N='N';
	char b='b'; 	char B='B';
	char r='r'; 	char R='R';
	char s='s'; 	char S='S';
	char g='g'; 	char G='G';
	char k='k';	char K='K';
	
	char d='d'; 	char D='D'; 
	char j='j'; 	char J='J';
	char c='c';	char C='C';
	char f='f'; 	char F='F';
	char t='t'; 	char T='T';
	char a='a'; 	char A='A';
	
		piece_t pion = piece_creer(j1,p,NON_PROMU);
		piece_t lance = piece_creer(j1,l,NON_PROMU);
		piece_t cavalier = piece_creer(j1,n,NON_PROMU);
		piece_t fou = piece_creer(j1,b,NON_PROMU);
		piece_t tour = piece_creer(j1,r,NON_PROMU);
		piece_t g_argent = piece_creer(j1,s,NON_PROMU);
		piece_t g_or = piece_creer(j1,g,NON_PROMU);
		piece_t roi = piece_creer(j1,k,NON_PROMU);
		
		piece_t Pion = piece_creer(j2,P,NON_PROMU);
		piece_t Lance = piece_creer(j2,L,NON_PROMU);
		piece_t Cavalier = piece_creer(j2,N,NON_PROMU);
		piece_t Fou = piece_creer(j2,B,NON_PROMU);
		piece_t Tour = piece_creer(j2,R,NON_PROMU);
		piece_t G_argent = piece_creer(j2,S,NON_PROMU);
		piece_t G_or = piece_creer(j2,G,NON_PROMU);
		piece_t Roi = piece_creer(j2,K,NON_PROMU);
		
		piece_t ppion = piece_creer(j1,d,PROMU);
		piece_t plance = piece_creer(j1,j,PROMU);
		piece_t pcavalier = piece_creer(j1,c,PROMU);
		piece_t pfou = piece_creer(j1,f,PROMU);
		piece_t ptour = piece_creer(j1,t,PROMU);
		piece_t pg_argent = piece_creer(j1,a,PROMU);

		
		piece_t PPion = piece_creer(j2,D,PROMU);
		piece_t PLance = piece_creer(j2,J,PROMU);
		piece_t PCavalier = piece_creer(j2,C,PROMU);
		piece_t PFou = piece_creer(j2,F,PROMU);
		piece_t PTour = piece_creer(j2,T,PROMU);
		piece_t PG_argent = piece_creer(j2,A,PROMU);
	      		
	      			switch(x)
	      			{
	      				case 'p':
	      					return pion;
	      						break;
	      				case 'd':
	      					return ppion;
	      						break;
	      				case 'P':
	      					return Pion;
	      						break;
	      				case 'D':
	      					return PPion;
	      						break;
	      				case 'l':
	      					return lance;
	      						break;
	      				case 'j':
	      					return plance;
	      						break;
	      				case 'L':
	      					return Lance;
	      						break;
	      				case 'J':
	      					return PLance;
	      						break;
	      				case 'n':
	      					return cavalier;
	      						break;
	      				case 'c':
	      					return pcavalier;
	      						break;
	      				case 'N':
	      					return Cavalier;
	      						break;
	      				case 'C':
	      					return PCavalier;
	      						break;
	      				case 'b':
	      					return fou;
	      						break;
	      				case 'f':
	      					return pfou;
	      						break;
	      				case 'B':
	      					return Fou;
	      						break;
	      				case 'F':
	      					return PFou;
	      						break;
	      				case 'r':
	      					return tour;
	      						break;
	      				case 't':
	      					return ptour;
	      						break;
	      				case 'R':
	      					return Tour;
	      						break;
	      				case 'T':
	      					return PTour;
	      						break;
	      				case 's':
	      					return g_argent;
	      						break;
	      				case 'a':
	      					return pg_argent;
	      						break;
	      				case 'S':
	      					return G_argent;
	      						break;
	      				case 'A':
	      					return PG_argent;
	      						break;
	      				case 'g':
	      					return g_or;
	      						break;
	      				case 'G':
	      					return G_or;
	      						break;
	      				case 'k':
	      					return roi;
	      						break;
	      				case 'K':
	      					return Roi;
	      						break;
	      						
	      				default: printf("entrer un caractere valide pour identifier sa piece correspondante\n");
	      			}
}
char piece_caractere(piece_t p)
{
	return p.type;
}

int piece_comparer(piece_t p1, piece_t p2)
{
	if(p1.joueur == p2.joueur && p1.type == p2.type && p1.statut == p2.statut)
		return 1;

	return 0;
}

