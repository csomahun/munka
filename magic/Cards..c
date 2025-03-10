#include "Cards.h"


Cards initCardsS(void) {
	Cards cards = {
		.cards = {'A', '2', '3', '4', '5', '6', '7', '8', '9',  'J', 'Q', 'K'},
		.color = {'C','H','S','D'}
	};
	return cards;
}
