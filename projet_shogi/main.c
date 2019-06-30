#include <stdio.h>
#include <stdlib.h>
#include "piece.c"

#define PROMU 0
#define NON_PROMU 1
#define J1 0
#define J2 1

int main()
{	
	
	char x;
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
	
		piece_t pion = piece_creer(J1,p,NON_PROMU);
		piece_t lance = piece_creer(J1,l,NON_PROMU);
		piece_t cavalier = piece_creer(J1,n,NON_PROMU);
		piece_t fou = piece_creer(J1,b,NON_PROMU);
		piece_t tour = piece_creer(J1,r,NON_PROMU);
		piece_t g_argent = piece_creer(J1,s,NON_PROMU);
		piece_t g_or = piece_creer(J1,g,NON_PROMU);
		piece_t roi = piece_creer(J1,k,NON_PROMU);
		
		piece_t Pion = piece_creer(J2,P,NON_PROMU);
		piece_t Lance = piece_creer(J2,L,NON_PROMU);
		piece_t Cavalier = piece_creer(J2,N,NON_PROMU);
		piece_t Fou = piece_creer(J2,B,NON_PROMU);
		piece_t Tour = piece_creer(J2,R,NON_PROMU);
		piece_t G_argent = piece_creer(J2,S,NON_PROMU);
		piece_t G_or = piece_creer(J2,G,NON_PROMU);
		piece_t Roi = piece_creer(J2,K,NON_PROMU);
		
		piece_t ppion = piece_creer(J1,d,PROMU);
		piece_t plance = piece_creer(J1,j,PROMU);
		piece_t pcavalier = piece_creer(J1,c,PROMU);
		piece_t pfou = piece_creer(J1,f,PROMU);
		piece_t ptour = piece_creer(J1,t,PROMU);
		piece_t pg_argent = piece_creer(J1,a,PROMU);

		
		piece_t PPion = piece_creer(J2,D,PROMU);
		piece_t PLance = piece_creer(J2,J,PROMU);
		piece_t PCavalier = piece_creer(J2,C,PROMU);
		piece_t PFou = piece_creer(J2,F,PROMU);
		piece_t PTour = piece_creer(J2,T,PROMU);
		piece_t PG_argent = piece_creer(J2,A,PROMU);
	      
		afficher(pion);
		afficher(lance);
		afficher(cavalier);
		afficher(fou);
		afficher(tour);
		afficher(g_argent);
		afficher(g_or);
		afficher(roi);
		printf("\n");
		afficher(Pion);
		afficher(Lance);
		afficher(Cavalier);
		afficher(Fou);
		afficher(Tour);
		afficher(G_argent);
		afficher(G_or);
		afficher(Roi);
		printf("\n");
		printf("%d\n",piece_joueur(pion));
		printf("%d\n",piece_joueur(Pion));

		afficher(ppion);
		afficher(plance);
		afficher(pcavalier);
		afficher(pfou);
		afficher(ptour);
		afficher(pg_argent);
		printf("\n");
	
		afficher(PPion);
		afficher(PLance);
		afficher(PCavalier);
		afficher(PFou);
		afficher(PTour);
		afficher(PG_argent);
		printf("\n");

		scanf("%c",&x);
		piece_identifier(x);
	return EXIT_SUCCESS;
}
