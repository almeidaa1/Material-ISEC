% MEulerSED Método Númerico para resolver um SED: Euler
%   [t,u,v] = N_EulerSED(f,g,a,b,n,u0,v0) Método numérico para a
%   resolução de um SED (ordem 2)
%   u'= f(t,u,v), v'=g(t,u,v), t=[a, b], u(a)=u0 e v(a)=v0  
%
% INPUT:
%   f, g - funções do 2.º membro das Equações Diferenciais
%   [a, b] - extremos do intervalo da variável independente t
%   n - número de subintervalos ou iterações do método
%   u0, v0 - condições iniciais t=a -> u=u0 e v=v0
%
% OUTPUT: 
%   [t,u,v] - vetor das soluções aproximações e da discretização de t
%
%   27/03/2020 - ArménioCorreia .: armenioc@isec.pt
%   13/05/2022 - David Leonel .: a2021129559@isec.pt


function [t,u,v] = MEulerSED(f,g,a,b,n,u0,v0)

h=(b-a)/n;                                  % Valor de cada subintervalo (passo)

t = a:h:b;                                  % Alocação de memória
u = zeros(1,n+1);                           % Alocação de memória
v = zeros(1,n+1);                           % Alocação de memória
    
u(1)=u0;                                    % O primeiro valor de u é sempre u0
v(1)=v0;                                    % O primeiro valor de v é sempre v0

for i=1:n                                   % O número de iterações vai ser igual a n
    u(i+1)=u(i)+h*f(t(i),u(i),v(i));        % Aproximação do método de Euler para a iésima iteração
    v(i+1)=v(i)+h*g(t(i),u(i),v(i));        % Aproximação do método de Euler para a iésima iteração
end