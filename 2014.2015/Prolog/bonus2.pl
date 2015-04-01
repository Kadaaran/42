maisons([maison(_,_,_,_,_), maison(_,_,_,_,_), maison(_,_,_,_,_), maison(_,_,_,_,_), 
        maison(_,_,_,_,_)]).

afficher_liste([]).
afficher_liste([X|Reste]):-write(X),nl,afficher_liste(Reste).

appartient_a(X,[X|_]).
appartient_a(X,[_|L]) :- appartient_a(X,L).

gauche_de(A,B,[A,B|_]).
gauche_de(A,B,[_|Y]) :- gauche_de(A,B,Y).

droite_de(A,B,[_|AB]).
droite_de(A,B,[Y|_]) :- droite_de(Y,A,B).

a_cote_de(A,B,[A,B|_]).
a_cote_de(A,B,[B,A|_]).
a_cote_de(A,B,[_|Y]) :- a_cote_de(A,B,Y).

resoudre :-
    
maisons(MAISONS),

appartient_a(maison(rouge,anglais,_,_,_),MAISONS),
appartient_a(maison(_,espagnol,chien,_,_),MAISONS),
appartient_a(maison(verte,_,_,cafe,_),MAISONS),
appartient_a(maison(_,ukrainien,_,the,_),MAISONS),
droite_de(maison(verte,_,_,_,_),maison(blanche,_,_,_,_),MAISONS),
appartient_a(maison(_,_,escargots,_,sculpteur),MAISONS),
appartient_a(maison(jaune,_,_,_,diplomate),MAISONS),
    
MAISONS = [_,_,maison(_,_,_,lait,_),_,_],
MAISONS = [maison(_,norvegien,_,_,_)|_],
    
a_cote_de(maison(_,_,_,_,medecin),maison(_,_,renard,_,_),MAISONS),
a_cote_de(maison(_,_,cheval,_,_),maison(_,_,_,_,diplomate),MAISONS),
appartient_a(maison(_,_,_,jus,violoniste),MAISONS),
appartient_a(maison(japonais,_,_,_,acrobate),MAISONS),
a_cote_de(maison(_,norvegien,_,_,_),maison(bleue,_,_,_,_),MAISONS),

appartient_a(maison(_,_,zebre,_,_),MAISONS),
appartient_a(maison(_,_,_,eau,_), MAISONS),
    
afficher_liste(MAISONS).