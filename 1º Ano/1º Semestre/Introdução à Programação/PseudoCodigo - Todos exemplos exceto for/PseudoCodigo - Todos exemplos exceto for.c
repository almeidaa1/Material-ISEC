                                                    /// TODOS OS PSEUDOCODIGOS NECESSARIOS ///  (EXCETO O FOR)

/// while, if com else, e variaveis constantes (ENQUANTO & SE ... ENTAO ... SENAO & VARIAVEIS CONSTANTES) ///

PSEUDOCODIGO
INICIO programa
    IVAALIM <- 0.06
    IVANALIM <- 0.23
    prodalim <- 0
    prodnalim <- 0
    ENQUANTO (PRECO > 0) FAZER
        OBTEM(tipoprod, preco)
        SE (tipoprod == '1') ENTAO
            prodalim <- prodalim + 1
            precoiva <- precoiva + (preco * IVAALIM)
            preçototal <- preçototal + preco
        SENAO
            prodnalim <- preconalim + 1
            precoiva <- precoiva + (preco * IVANALI)
            preçototal <- preçototal + preco
        FIM SE
    FIM ENQUANTO
    total <- prodalim + prodnalim
    MOSTRA(prodalim, prodnalim, total, precoiva, precosem)
FIM programa

/// while, do while e if (ENQUANTO & FAZER ... ENQUANTO & SE ... ENTAO)///

INICIO programa
    FAZER
        OBTEM(linferior, lsuperior)
    ENQUANTO(linferior <= 0 OU linferior >lsuperior)
    ENQUANTO (linferior <= lsuperior) FAZER
        SE (linferior % 3 != 0 E linferior % 5 == 0) ENTAO
            MOSTRA (linferior)
        FIM SE
        linferior <- linferior + 1
    FIM ENQUANTO
FIM programa

/// FUNÇOES E CHAMADA DE FUNÇOES///

INICIOFUNCAO caixas
    RECEBE (n)
    SE (n % 10 <- 0)
        caixa <- n / 10
    SENAO
        caixa <- ( n / 10 ) + 1
    FIM SE
    DEVOLVE(caixa)
FIMFUNCAO caixas

INICIO painatais
    encomenda <- 1
    tcaixas <- 0
    maior <- 0
    FAZER
        MOSTRA (encomenda)
        OBTEM (n)
        SE (n>0)ENTAO
            encomenda <- encomenda + 1
            caixa <- CHAMARFUNCAO caixas(n)
            MOSTRA(caixa)
            tcaixas <- tcaixas + caixa
            SE (caixa > maior)ENTAO
                maior <- caixa
            FIM SE
        FIM SE
    ENQUANTO (n != 0)
    media <- tcaixas / encomenda
    MOSTRA ("Resumo das Encomendas:")
    MOSTRA (tcaixas, maior, media)
FIM painatais

/// SWITCH (CASO) ///

INICIO precos
  OBTEM (tipo, preço)
  CASO (tipo)
    QUANDO (1)
      MOSTRA (preço * (IVA1 + 1))
    QUANDO (2)
      MOSTRA (preço * (IVA2 + 1))
     QUANDO (3)
       MOSTRA (preço * (IVA3 + 1))
   FIM CASO
FIM precos
