#ifndef SPHERE_H
#define SPHERE_H
#include "gameobject.h"

#include "BasicIO.h"

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_1>
#include <QMatrix4x4>
#include <QQuaternion>
#include <QVector2D>
#include <QBasicTimer>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QWidget>
#include <QKeyEvent>

class Sphere : public GameObject
{
public:
    vector<QVector3D> objVertices;
    vector<vector<int>> objIndices;

    vector<VertexData> vertices;
    vector<GLushort> indices;

    Sphere();
    void changeTransform();
};

#endif // SPHERE_H
