% Formula da Regra de Simpson
%
% INPUT:  f - funcao integranda
%         [a, b] - intervalo de integracao
%         n - numero de subintervalos
%
% OUTPUT: area - Valor da area calculada pela Regra de Simpson
%
%   17/06/2022 - David Leonel Melo .: a2021129559@isec.pt


function area = RSimpson(f,a,b,n)

h=(b-a)/n;                      % Valor de cada subintervalo (passo)
x=a;                            % 'x' recebe o valor de 'a' (primeira abcissa)
s=0;                            % Inicializacao da variavel 's' a 0

for i=1:n-1
    x=x+h;                      % Ao valor de 'x' e somado o passo ('h')
    if mod(i,2) == 0            % Se i for par
        s=s+2*f(x);             % Ao valor de 's' e somado 2 vezes o valor da funcao
    else
        s=s+4*f(x);             % Ao valor de 's' e somado 4 vezes o valor da funcao
    end
end
area = (h/3)*(f(a)+s+f(b));

