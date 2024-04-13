#include "/opt/homebrew/Cellar/freeglut/3.4.0/include/GL/glut.h"
#include "/opt/homebrew/Cellar/glfw/3.4/include/GLFW/glfw3.h"

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

  //house
    glBegin(GL_QUADS); 
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(-0.5f, -0.5f); //lb
    glVertex2f(0.5f, -0.5f);  //rb
    glVertex2f(0.5f, 0.0f);   //rt
    glVertex2f(-0.5f, 0.0f);  //lt
    glEnd();

  //roof
    glBegin(GL_TRIANGLES); 
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.5f, 0.0f);  
    glVertex2f(0.5f, 0.0f);   
    glVertex2f(0.0f, 0.5f);   
    glEnd();


  //door
   glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.1f, -0.5f); //lb
    glVertex2f(0.1f, -0.5f); //rb
    glVertex2f(0.1f, -0.2f); //rt
    glVertex2f(-0.1f, -0.2f); //lt
    glEnd();

    glFlush(); 
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);    
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100); 
    glutCreateWindow("Simple 2D House in OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}