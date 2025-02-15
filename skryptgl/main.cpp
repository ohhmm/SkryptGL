
#define GL_SILENCE_DEPRECATION
#include <omnn/rt/clgl.h>

#include <GL/glut.h>

#include <iostream>

#include <libgen/gen.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	// use genreator to calculate image with opencl

    glFlush();
}

int main (int argc, char* argv[]) {
    int ec = 0;
    glutInit(&argc, argv);
    glutCreateWindow("SkryptGL");
    glutDisplayFunc(display);
    glutFullScreen();
    glutMainLoop();
    return ec;
}
