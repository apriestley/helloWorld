% Hello World predicate in Prolog
% Aaron Priestley (apriestley7@gmail.com)
% 13th November 2015
 
printStr([]).
printStr([X|XS]) :- put(X), printStr(XS).

printHello :- printStr("Hello World :-)").
