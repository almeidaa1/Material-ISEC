% Derivação Analítica pela função diff
% 
% INPUT:  strF - função f em formato string
%
% OUTPUT: h - derivada exata da funçao f
% 
%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function f = DerivadaExata(strF)

syms x                                      % cria a variável simbólica x
h = @(x) eval(vectorize(strF));

f = matlabFunction(diff(h(x)));             % Calcula, através da função diff, a derivada exata