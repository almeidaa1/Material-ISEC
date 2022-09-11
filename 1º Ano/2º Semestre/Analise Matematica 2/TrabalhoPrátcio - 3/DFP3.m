% Form�la das Diferen�as Progressivas (3 pontos)
%
% f'(x(i))=(-3*f(x(i)) + 4*f(x(i+1)) + f(x(i+2))/(2*h)
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


function [x,y,dydx] = NDerivacaoDFP3(f,a,b,h,y)

x=a:h:b;                                                    % Aloca��o de mem�ria

n=length(x);                                                % N�mero de pontos (tamanho do vetor de abcissas)

if nargin==4
    y=f(x);                                                 % y � a fun��o f(x)
end

dydx=zeros(1,n);                                            % Aloca��o de mem�ria

for i=1:n-2
    dydx(i)=(-3*y(i) + 4*y(i+1) - y(i+2))/(2*h);            % Derivada (aproximada) de f no ponto atual
end

dydx(n-1)=(y(n-3) - 4*y(n-2) + 3*y(n-1))/(2*h);             % Derivada (aproximada) de f no ponto atual
dydx(n)=(y(n-2) - 4*y(n-1) + 3*y(n))/(2*h);                 % Derivada (aproximada) de f no ponto atual
