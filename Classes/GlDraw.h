#ifndef _GlDraw_H_
#define _GlDraw_H_

#include "cocos2d.h"

class GlDraw : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();
 
    virtual void visit(cocos2d::Renderer *renderer, const cocos2d::Mat4& transform, uint32_t parentFlags) override;

    void onDraw();
	
    CREATE_FUNC(GlDraw);
private:
    cocos2d::CustomCommand _command;
};

#endif