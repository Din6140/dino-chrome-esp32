# Testes realizados

Testes do projeto Dino Chrome, feitos no Tinkercad (Arduino Uno) e na montagem real (ESP32).

**Meta do projeto:** o dinossauro chegar a 700 pontos.

## Tabela de testes

| # | O que foi testado | Resultado esperado | Resultado obtido | Status |
|---|-------------------|--------------------|------------------|--------|
| 1 | Leitura do sensor com fundo branco | Valor alto | [valor] | Passou |
| 2 | Leitura do sensor com o cacto | Valor baixo | [valor] | Passou |
| 3 | Servo aperta a tecla quando aparece o cacto | Dinossauro pula a tempo | O servo descia devagar e o pulo atrasava | Falhou (corrigido) |
| 4 | Um pulo por cacto | Só um pulo por obstáculo | Dois pulos no mesmo cacto | Falhou (corrigido) |
| 5 | Servo parado sem cacto | Nenhum pulo | Pulos sem cacto na tela | Falhou (corrigido) |
| 6 | Jogo completo | Chegar a 700 pontos | [pontuação] | [Passou/Falhou] |

## Problemas encontrados e correções

### Problema 1: servo lento para baixar a tecla

- **O que aconteceu:** o servo demorava para descer e apertar a barra de espaço. O dinossauro pulava atrasado e batia no cacto.
- **Causa:** o ângulo e o tempo de espera do servo estavam mal ajustados.
- **Correção:** mudei o ângulo de [valor antes] para [valor depois] e o `delay` de [valor antes] para [valor depois] ms.
- **Resultado:** o servo passou a apertar a tecla a tempo.

### Problema 2: dois pulos no mesmo cacto

- **O que aconteceu:** o servo pulava duas vezes quando passava um cacto só.
- **Causa:** o cacto ainda estava na frente do sensor depois do primeiro pulo.
- **Correção:** aumentei o `delay` depois do pulo de [valor antes] para [valor depois] ms.
- **Resultado:** passou a ser um pulo por cacto.

### Problema 3: pulos sem cacto

- **O que aconteceu:** o servo pulava mesmo sem obstáculo na tela.
- **Causa:** o `limite` estava muito perto do valor normal do fundo, e a luz da sala mudava a leitura.
- **Correção:** medi os valores no Monitor Serial (fundo: [valor], cacto: [valor]) e coloquei o `limite` no meio, em [valor]. Também aproximei o sensor da tela.
- **Resultado:** os pulos sem cacto pararam.

## Conclusão

Os ajustes de ângulo, tempo e `limite` foram feitos com testes e com os valores do Monitor Serial. Depois deles, o dinossauro chegou a [pontuação] pontos.
