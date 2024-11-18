#include <windows.h>
#include <GL/glut.h>

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

	glBegin(GL_LINES);
      glColor3f(0.0,0.0,0.0);

      glVertex2f(-1.0,0.0);
      glVertex2f(1.0,0.0);

      glVertex2f(0.0,1.0);
      glVertex2f(0.0,-1.0);
    glEnd();

    //Square

    glBegin(GL_LINES);
      glColor3f(1.0,0.0,0.0);

      glVertex2f(0.5,0.9);
      glVertex2f(0.9,0.5);

      glVertex2f(0.9,0.5);
      glVertex2f(0.5,0.1);

      glVertex2f(0.5,0.1);
      glVertex2f(0.1,0.5);

      glVertex2f(0.1,0.5);
      glVertex2f(0.5,0.9);
   glEnd();

   //triangle

   glBegin(GL_LINES);
    glColor3f(0.0,1.0,0.0);

    glVertex2f(0.5,-0.2);
    glVertex2f(0.8,-0.7);

    glVertex2f(0.8,-0.7);
    glVertex2f(0.1,-0.7);

    glVertex2f(0.1,-0.7);
    glVertex2f(0.5,-0.2);
   glEnd();

   //Line

   glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.3,-0.2);
	glVertex2f(-0.7,-0.6);
   glEnd();

   //M

   glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);

	glVertex2f(-0.8,0.3);
	glVertex2f(-0.8,0.8);

	glVertex2f(-0.8,0.8);
	glVertex2f(-0.55,0.55);

	glVertex2f(-0.55,0.55);
	glVertex2f(-0.3,0.8);

	glVertex2f(-0.3,0.8);
	glVertex2f(-0.3,0.3);
   glEnd();

   glFlush();

}
   int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}












