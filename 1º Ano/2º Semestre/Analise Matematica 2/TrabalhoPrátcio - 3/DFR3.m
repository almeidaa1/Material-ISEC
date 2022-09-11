% Deriva��o Num�rica - F�rmula das Diferen�as Regressivas (3 pontos) 
%
% f'(x(i))=(f(x(i-2)) - 4*f(x(i-1)) + 3*f(x(i)))/(2*h)
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


function [x,y,dydx] = NDerivacaoDFR3(f,a,b,h,y)

x=a:h:b;                                            % Aloca��o de mem�ria

n=length(x);                                        % N�mero de pontos (tamanho do vetor de abcissas)

if nargin==4
    y=f(x);                                         % y � a fun��o f(x)
end

dydx=zeros(1,n);                                    % Aloca��o de mem�ria

dydx(1)=(-3*y(1) + 4*y(2) - y(3))/(2*h);            % Derivada (aproximada) de f no ponto atual
dydx(2)=(-3*y(2) + 4*y(3) - y(4))/(2*h);            % Derivada (aproximada) de f no ponto atual

for i=3:n
    dydx(i)=(y(i-2) - 4*y(i-1) + 3*y(i))/(2*h);     % Derivada (aproximada) de f no ponto atual
end
