#include "gameobject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(Transform t)
{
    this->t = t;
}

//Appelé sur la scéne
void GameObject::update(){

    for(int i = 0; i<gameObjects.size(); i++){
        gameObjects[i].update(this->t);
    }
}

//Appelé sur les enfants
void GameObject::update(Transform transform){
    this->t.r = (t.r + transform.r);
    this->t.t = (t.t + transform.t);
    this->t.s = (t.s + transform.s);
    for(int i = 0; i<gameObjects.size(); i++){
        gameObjects[i].update(this->t);
    }
}
