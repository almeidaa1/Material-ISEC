% Form�la das Diferen�as Progressivas (2 pontos)
%
% f'(x(i))=(f(x(i+1))-f(x(i))/h
%
% INPUT:  f - fun��o
%         [a, b] - intervalo de deriva��o
%         h - passo da discretiza��o
%         y - imagens x vs y
%
% OUTPUT: [x, y] - malha de pontos
%         dydx - derivada de f 

%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function [x,y,dydx] = NDerivacaoDFP(f,a,b,h,y)

x=a:h:b;                                % Aloca��o de mem�ria

n=length(x);                            % N�mero de pontos (tamanho do vetor de abcissas)

if nargin==4
    y=f(x);                             % y � a fun��o f(x)
end

dydx=zeros(1,n);                        % Aloca��o de mem�ria

for i=1:n-1
    dydx(i)=(y(i+1)-y(i))/h;            % Derivada (aproximada) de f no ponto atual
end

dydx(n)=(y(n)-y(n-1))/h;                % Derivada (aproximada) de f no ponto atual
