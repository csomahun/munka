#include "strHandler.h"
#include "additional.h"
#include "Smily.h"
#include "Cards.h"


//seprate the whole str to smaleler str

char* strSeparater(char* str,int iter ) {
	char sep[4];

    int it = iter;

    for (int i = 0; i < 4; i++,it++) {
		sep[i] = str[it];

	}
	if (sep[3] == ' '|| sep[3]=='\0' || sep[3] == '\n')sep[3] = '\0';
	else sep[2] = '\0';

	return sep;
}


//checks if the smaler str is a valid card or smiley

bool isTrue(char* str,char *text) {
    bool tCard = false;
    bool tColor = false;
    bool tSmily = false;
    Cards cards = initCardsS();
    Smily smily = initSmilyS();
    
    //smiley
    //if statement checks if its the 
    if (str[0] == ':') {
        for (int i = 0; i < sizeof(smily.type); i++) {
            //printf("%c-%c\n", str[iter], myColor[i]);
            if (strcmp(str, smily.type[i])==0) tSmily = true;
        }
    }
    if ((strlen(text) ==2|| strlen(text) == 3) && tSmily) return true;

    else if(strlen(text) > 2 && tSmily)return false;


    //checks if its a valid card
    // if statemant checks if its a 10 or not
    if (str[0] == '1' && str[1] == '0') {
        tCard = true;
    }
    else {
        //check card
        for (int i = 0; i < sizeof(cards.cards); i++) {
            //printf("%c-%c\n", str[iter], myColor[i]);
            if (str[0] == cards.cards[i]) tCard = true;
        }
    }
    //check color
    for (int iter = 0; iter < strlen(str); iter++) {
        for (int i = 0; i < sizeof(cards.color); i++) {
            //printf("%c-%c\n", str[iter], myColor[i]);
            if (str[iter] == cards.color[i]) tColor =  true;
        }

    }

    return tCard&&tColor;
}



bool smarttext_recognize(char* text) {
    bool res;
    //yes, I totaly dont want to use dinamic memory allocation
    char card1[4] = "";
    char card2[4] = "";
    char card3[4] = "";
    int iter = 0;
    if (strcmp(text, "-")) {
        
        char sep[4];

        for (int i = 0, iter = 0; i < strlen(text); i += 3,iter++) {
            if (text[i] == ' ')i++;
            strcpy(sep, strSeparater(text,i));

            res = isTrue(sep, text);
            if (!res) return false;
            if (iter == 0) {
                strcpy(card1, sep);
            }
            else if (iter == 1) {
                strcpy(card2, sep);
            }
            else if (iter == 2) {
                strcpy(card3, sep);
            }

        }
        if (text[0] == ':') show_smiley(text);
        else {
            show_cards(card1[0] ? card1 : NULL,
                card2[0] ? card2 : NULL,
                card3[0] ? card3 : NULL);
        }
        return true;

    }

    return false;
}