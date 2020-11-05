#include "sphere.h"
using namespace std;

Sphere::Sphere() : GameObject()
{
    OBJIO::open(":/sphere.obj", objVertices, objIndices);
    //update();
    for (unsigned int i = 0; i < objVertices.size(); ++i)
        vertices.push_back(VertexData{objVertices[i]+worldTransform.t, QVector2D(0, 0)});

    for (unsigned int i = 0; i < objIndices.size(); ++i){
        indices.push_back(objIndices[i][0]);
        indices.push_back(objIndices[i][1]);
        indices.push_back(objIndices[i][2]);
    }
}

void Sphere::changeTransform(){
    update();
    vertices = vector<VertexData>();
    for (unsigned int i = 0; i < objVertices.size(); ++i)
        vertices.push_back(VertexData{objVertices[i]*worldTransform.s+worldTransform.t, QVector2D(0, 0)});

    for (unsigned int i = 0; i < objIndices.size(); ++i){
        indices.push_back(objIndices[i][0]);
        indices.push_back(objIndices[i][1]);
        indices.push_back(objIndices[i][2]);
    }
}
