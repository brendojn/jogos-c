#ifndef JOGO_H_INCLUDED
#define JOGO_H_INCLUDED
#define TAMANHO_PALAVRA 20
// Avisa para o c que tem estas fun��es, assim eu posso colocar as fun��es em qualquer ordem.
void abertura();
void desenhaforca();
void chuta();
void adicionapalavra();
void escolhepalavra();
int enforcou();
int chuteserrados();
int jachutou(char letra);
int acertou();
#endif // JOGO_H_INCLUDED

