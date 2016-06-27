metier(boulanger).
metier(boucher).
metier(charpentier).

fils(fboulanger).
fils(fboucher).
fils(fcharpentier).

pere(pboulanger).
pere(pboucher).
pere(pcharpentier).


exerce(pboulanger, PE) :- metier(PE), PE \== boulanger.
exerce(pcharpentier, PE) :- metier(PE), PE \== charpentier.
exerce(pboucher, PE) :- metier(PE), PE \== boucher.

exerce(fboulanger, FE) :- metier(FE), FE \== boulanger.
exerce(fcharpentier, FE) :- metier(FE), FE \== charpentier.
exerce(fboucher, FE) :- metier(FE), FE == boulanger.


professions_differentes(pere, fils) :- exerce(pere, PE), exerce(fils, FE), PE \== FE.

professions_iddentiques(pboulanger,fcharpentier) :- metier(boucher).
