% Deriva��o Anal�tica pela fun��o diff
% 
% INPUT:  strF - fun��o f em formato string
%
% OUTPUT: h - derivada exata da fun�ao f
% 
%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function f = DerivadaExata(strF)

syms x                                      % cria a vari�vel simb�lica x
h = @(x) eval(vectorize(strF));

f = matlabFunction(diff(h(x)));             % Calcula, atrav�s da fun��o diff, a derivada exata