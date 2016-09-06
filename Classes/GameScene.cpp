#include "GameScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    bool isReady = false;
    do {
        CC_BREAK_IF(!initBackGround());
        
        isReady = true;
    } while (0);
    
    return isReady;
}


void GameScene::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void GameScene::onEnter()
{
    Layer::onEnter();
}

void GameScene::onExit()
{
    Layer::onExit();
}


bool GameScene::initBackGround()
{
    bool isRet = false;
    auto size = Director::getInstance()->getWinSize();
    
    do {
        Sprite* bg = Sprite::create("res/bk.png");
        this->addChild(bg, 0);
        bg->setPosition(Vec2(0, 0));
        bg->setAnchorPoint(Vec2(0, 0));
        bg->setScale(size.width / bg->getTextureRect().getMaxX(), size.height / bg->getTextureRect().getMaxY());
        
        isRet = true;
    } while (0);
    return isRet;
}

bool GameScene::initCards()
{
    bool isRet = false;
    auto size = Director::getInstance()->getWinSize();
    
    do {
        for (int i = Three; i <= Two; ++i) {
            for (int j = Diamond; j < = Spade; ++j) {
                
            }
        }
        
        isRet = true;
    } while (0);
    return isRet;
}

bool GameScene::initPlayer()
{
    return true;
}


