femme(anne).
femme(betty).
femme(lisa).
femme(sylvie).
femme(eve).
femme(julie).
femme(valerie).


homme(marc).
homme(luc).
homme(jean).
homme(jules).
homme(leon).
homme(loic).
homme(herve).
homme(paul).

mari_de(marc,anne).
mari_de(luc,betty).
mari_de(jules,lisa).
mari_de(leon,sylvie).
mari_de(loic,eve).
mari_de(paul,julie).

femme_de(X,Y) :- mari_de(Y,X).

enfant_de(jean,marc).
enfant_de(jules,marc).
enfant_de(leon,marc).
enfant_de(jean,anne).
enfant_de(jules,anne).
enfant_de(leon,anne).
enfant_de(lisa,betty).
enfant_de(loic,betty).
enfant_de(gerard,betty).
enfant_de(lisa,luc).
enfant_de(loic,luc).
enfant_de(gerard,luc).
enfant_de(jacques,jules).
enfant_de(jacques,lisa).
enfant_de(herve,leon).
enfant_de(herve,sylvie).
enfant_de(julie,leon).
enfant_de(julie,sylvie).
enfant_de(paul,loic).
enfant_de(paul,eve).
enfant_de(valerie,loic).
enfant_de(valerie,eve).

beaupere_de(B,E) :- homme(B), (mari_de(E,X) ; femme_de(E, X)), enfant_de(X,B).
bellemere_de(B,E) :- femme(B), (mari_de(E,X) ; femme_de(E, X)), enfant_de(X,B).

ancetre_de(X,Y) :- enfant_de(Y,X).
ancetre_de(X,Y) :- enfant_de(Y,P), ancetre_de(X,P).