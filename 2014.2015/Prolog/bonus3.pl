afficher_liste([]).
afficher_liste([X|Reste]):-write(X),nl,afficher_liste(Reste).

gauche_de(A,B,[A,B|_]).
gauche_de(A,B,[_|Y]) :- gauche_de(A,B,Y).

resoudre(CARTES) :- CARTES = [_, _, _],

gauche_de(carte(valet,_),carte(reine,_),CARTES),
gauche_de(carte(_,carreau),carte(_,pique),CARTES),
gauche_de(carte(valet,_),carte(_,coeur),CARTES),
gauche_de(carte(roi,_),carte(_,pique),CARTES),

afficher_liste(CARTES).