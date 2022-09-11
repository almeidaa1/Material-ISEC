% Form�la da 2� Derivada (3 pontos)
%
%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function [x,y,dydx] = NDerivacaoD2(f,a,b,h,y)

x=a:h:b;                                                    % Aloca��o de mem�ria

n=length(x);                                                % N�mero de pontos (tamanho do vetor de abcissas)

if nargin==4
    y=f(x);                                                 % y � a fun��o f(x)
end

dydx=zeros(1,n);                                            % Aloca��o de mem�ria

temp1=(-3*y(1) + 4*y(2) - y(3))/(2*h);                      % Primeira derivada no ponto x = a
temp2=(-3*y(2) + 4*y(3) - y(4))/(2*h);                      % Primeira derivada no ponto x = a + h
temp3=(-3*y(3) + 4*y(4) - y(5))/(2*h);                      % Primeira derivada no ponto x = a + 2*h

dydx(1)=(-3*temp1 + 4*temp2 - temp3)/(2*h);                 % Segunda derivada no ponto x = a

for i=2:n-1
    dydx(i)=(y(i+1) - 2*y(i) + y(i-1))/(h*h);               % Derivada (aproximada) de f no ponto atual
end

tempn2=(y(n-4) - 4*y(n-3) + 3*y(n-2))/(2*h);                % Primeira derivada no ponto x = b - 2*h
tempn1=(y(n-3) - 4*y(n-2) + 3*y(n-1))/(2*h);                % Primeira derivada no ponto x = b - h
tempn=(y(n-2) - 4*y(n-1) + 3*y(n))/(2*h);                   % Primeira derivada no ponto x = b

dydx(n)=(tempn2 - 4*tempn1 + 3*tempn)/(2*h);                % Segunda derivada no ponto x = b
