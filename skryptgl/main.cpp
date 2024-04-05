#include <GL/glut.h>

#include <CL/cl_gl.h>



int main (int argc, char* argv[]) {
    int ec = 0;
    glutInit(&argc, argv);
    glutCreateWindow("SkryptGL");
    glutFullScreen();
    glutMainLoop();
    return ec;
}
