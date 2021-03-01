#pragma once

typedef struct {
	int max;
	int* que;
	int front;
	int rear;
	int num;
}Deck;

// µ¦ ÃÊ±âÈ­
int Initialize(Deck* deck, int max);

// µ¦ ¿ŞÂÊ ÀÎÅ¥
int LeftEnque(Deck* deck, int x);

// µ¦ ¿À¸¥ÂÊ ÀÎÅ¥
int RightEnque(Deck* deck, int x);

// µ¦ ¿ŞÂÊ µğÅ¥
int LeftDeque(Deck* deck, int* x);

// µ¦ ¿À¸¥ÂÊ µğÅ¥
int RightDeque(Deck* deck, int* x);

// µ¦ ¿ŞÂÊ ÇÇÅ©
int LeftPeek(Deck* deck, int* x);

// µ¦ ¿À¸¥ÂÊ ÇÇÅ©
int RightPeek(Deck* deck, int* x);

// µ¦ Ãâ·Â
void Print(Deck* deck);

// µ¦ Á¾·á
void Terminate(Deck* deck);