//
//  Card.h
//  ddz
//
//  Created by Admin on 16/9/7.
//
//

#ifndef Card_h
#define Card_h

#include "cocos2d.h"

enum CardNumber
{
    Three = 3,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace,
    Two,
    Joker
};

enum CardType
{
    Diamond = 0,
    Club,
    Heart,
    Spade,
    Black,
    Red
};

enum CardSide
{
    Positive = 0,
    Negative
};

class Card : public cocos2d::Sprite
{
public:
    Card(CardType type, CardNumber number);
    ~Card();
    
    CardNumber getCardNumber();
    CardType getCardType();
    int getCardIndex();
    void setCardSide(CardSide side);
    CardSide getCardSide();
    void setSelected(bool select);
    bool isSelected();
    
private:
    CardNumber cardNumber;
    CardType cardType;
    int cardIndex;
    CardSide cardSide;
    bool isSelect;
};

#endif /* Card_h */
