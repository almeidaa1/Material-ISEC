% Form�la das Diferen�as Centradas (3 pontos)
%
% f'(x(i))=(f(x(i+1))-f(x(i-1))/(2*h)
%
% INPUT:  f - fun��o
%         [a, b] - intervalo de deriva��o
%         h - passo da discretiza��o
%         y - imagens x vs y
%
% OUTPUT: [x, y] - malha de pontos
%         dydx - derivada de f 
%
%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function [x,y,dydx] = NDerivacaoDFC(f,a,b,h,y)

x=a:h:b;                                                % Aloca��o de mem�ria

n=length(x);                                            % N�mero de pontos (tamanho do vetor de abcissas)

if nargin==4
    y=f(x);                                             % y � a fun��o f(x)
end

dydx=zeros(1,n);                                        % Aloca��o de mem�ria

dydx(1)=(-3*y(1) + 4*y(2) - y(3))/(2*h);                % Derivada (aproximada) de f no ponto atual

for i=2:n-1
    dydx(i)=(y(i+1)-y(i-1))/(2*h);                      % Derivada (aproximada) de f no ponto atual
end

dydx(n)=(y(n-2) - 4*y(n-1) + 3*y(n))/(2*h);             % Derivada (aproximada) de f no ponto atual
