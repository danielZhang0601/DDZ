//
//  Card.cpp
//  ddz
//
//  Created by Admin on 16/9/7.
//
//

#include "Card.h"

USING_NS_CC;

Card::Card(CardType type, CardNumber number)
{
    switch (type) {
        case Diamond:
        case Club:
        case Heart:
        case Spade:
            CCAssert(number < Joker, "invalid number card");
            cardType = type;
            cardNumber = number;
            cardIndex = (number - Three) + cardType * Two;
            break;
        case Black:
        case Red:
            CCAssert(number = Joker, "invalid joker card");
            cardType = type;
            cardNumber = number;
            cardIndex = type == Black ? (Two * Black - 1) : (Two * Black);
            break;
        default:
            break;
    }
}

Card::~Card()
{

}

CardNumber Card::getCardNumber()
{
    return cardNumber;
}

CardType Card::getCardType()
{
    return cardType;
}

int Card::getCardIndex()
{
    return cardIndex;
}

void Card::setCardSide(CardSide side)
{
    cardSide = side;
}

CardSide Card::getCardSide()
{
    return cardSide;
}

void Card::setSelected(bool select)
{
    isSelect = select;
}

bool Card::isSelected()
{
    return isSelect;
}