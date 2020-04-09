#include "Mesh.hpp"

namespace mesh
{

std::vector<GLfloat> screenQuadTx {
     1.0,  1.0,  1.0,  1.0,
    -1.0, -1.0,  0.0,  0.0,
    -1.0,  1.0,  0.0,  1.0,

     1.0,  1.0,  1.0,  1.0,
     1.0, -1.0,  1.0,  0.0,
    -1.0, -1.0,  0.0,  0.0
};

std::vector<GLfloat> oct4QuadTx {
     0.0,  0.0, 0.0, 1.0,
     1.0,  0.0, 1.0, 1.0,
     0.0, -1.0, 0.0, 0.0,
     
     1.0,  0.0, 1.0, 1.0,
     0.0, -1.0, 0.0, 0.0, 
     1.0, -1.0, 1.0, 0.0
};

std::vector<GLfloat> oct1QuadTxIy {
    0.0f, 1.0f, 0.0f, 0.0f,
    1.0f, 0.0f, 1.0f, 1.0f,
    0.0f, 0.0f, 0.0f, 1.0f,

    0.0f, 1.0f, 0.0f, 0.0f,
    1.0f, 1.0f, 1.0f, 0.0f,
    1.0f, 0.0f, 1.0f, 1.0f
};

}