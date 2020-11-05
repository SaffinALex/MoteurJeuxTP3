#include "gameobject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(Transform t)
{
    this->localTransform = t;
}

//udate tree
void GameObject::update(){
    getWorldTransform();
    for(int i = 0; i<fils.size(); i++){
        fils[i]->update();
    }
}



Transform GameObject::getWorldTransform(){
    Transform t = localTransform;
    if(parent != this){
        t.t = t.t + parent->getWorldTransform().t;
        t.s = t.s * parent->getWorldTransform().s;
    }
    worldTransform = t;
    qDebug()<<t.s;
    return t;
}
