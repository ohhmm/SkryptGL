
#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#endif
#include <GLUT/glut.h>

#include <omnn/rt/cl.h>
#include <boost/compute/interop/opengl/gl.hpp>



int main (int argc, char* argv[]) {
    int ec = 0;
    glutInit(&argc, argv);
    glutCreateWindow("SkryptGL");
    glutFullScreen();
    glutMainLoop();
    return ec;
}
