#include <windows.h>
#include <GL/glut.h>
void initGL() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // white and opaque
}
void display() {
     glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(0.0f, 0.0f, 0.0f); // Red
      glVertex2f( 0.7f, 0.4f);    // x, y
      glVertex2f( 0.7f, 0.3f);
      glVertex2f( 0.11f,  0.3f);
      glVertex2f(0.11f,  0.4f);
      glEnd();

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.7f, 0.5f);    // x, y
      glVertex2f( 0.7f, 0.4f);
      glVertex2f( 0.11f,  0.4f);
      glVertex2f(0.11f,  0.5f);
      glEnd();


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.0f); // Red
      glVertex2f(0.7f, 0.6f);    // x, y
      glVertex2f( 0.7f, 0.5f);
      glVertex2f( 0.11f,  0.5f);
      glVertex2f(0.11f,  0.6f);
      glEnd();

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.7f, 0.5f);    // x, y
      glVertex2f( 0.7f, 0.4f);
      glVertex2f( 0.11f,  0.4f);
      glVertex2f(0.11f,  0.5f);
      glEnd();

      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(0.11f,0.6f);
      glVertex2f(0.11f,0.11f);
      glEnd();
glFlush();  // Render now
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
glutInit(&argc, argv);          // Initialize GLUT
glutInitWindowSize(400, 400);   // Set the window's initial width & height
glutCreateWindow("Rainbow Flag");  // Create window with the given title
glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
glutDisplayFunc(display);       // Register callback handler for window re-paint event
initGL();                       // Our own OpenGL initialization
glutMainLoop();                 // Enter the event-processing loop
return 0;
}
