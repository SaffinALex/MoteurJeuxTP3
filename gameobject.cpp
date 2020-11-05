#include "gameobject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(Transform t)
{
    this->localTransform = t;
}

//Appelé sur la scéne
void GameObject::update(){

    for(int i = 0; i<fils.size(); i++){
        fils[i]->update(this->worldTransform);
    }
}

//Appelé sur les enfants
void GameObject::update(Transform transform){
    getWorldTransform();
    for(int i = 0; i<fils.size(); i++){
        fils[i]->update(worldTransform);
    }
}

Transform GameObject::getWorldTransform(){
    Transform t = localTransform;
    if(parent != NULL)
        t = t + parent->getWorldTransform();
    worldTransform = t;
    return t;
}
