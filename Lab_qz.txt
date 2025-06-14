1no ans:

#include <windows.h>
#include <iostream>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2;

void DDA(void)
{
    double dx = (X2 - X1), dy = (Y2 - Y1), l;
    float xInc, yInc, x = X1, y = Y1;

    if (abs(dx) > abs(dy))
        l = (abs(dx));
    else
        l = (abs(dy));

    xInc = dx / l;
    yInc = dy / l;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x, y);

    for (int i = 0; i < l; i++)
    {
        x += xInc;
        y += yInc;
        if (round(x) == 50) {
            y += 10; // slight bend at x=50
        }
        glVertex2d(round(x), round(y));
    }
    glEnd();

    glFlush();
}

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0, -100.0, 480.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Line with Bend");

    cout << "Enter an initial point:\t";
    cin >> X1;
    cin >> Y1;
    cout << "Enter the final point:\t";
    cin >> X2 >> Y2;

    glutDisplayFunc(DDA);
    myInit();
    glutMainLoop();

    return 0;
}




2 No Ans:

#include<windows.h>
#include<iostream>
#include <GL/glut.h>

using namespace std;

void display()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);

      glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(50,500);
        glVertex2i(400,600);

        glVertex2i(50,500);
        glVertex2i(50,350);

         glVertex2i(50,350);
        glVertex2i(400,350);

        glVertex2i(400,350);
        glVertex2i(400,600);

        glVertex2i(400,600);
        glVertex2i(900,600);

        glVertex2i(900,600);
        glVertex2i(900,450);

        glVertex2i(900,450);
        glVertex2i(800,350);

        glVertex2i(800,350);
        glVertex2i(400,350);

        glVertex2i(400,600);
        glVertex2i(500,800);

        glVertex2i(500,800);
        glVertex2i(700,800);

        glVertex2i(700,800);
        glVertex2i(800,600);


        glVertex2i(700,800);
        glVertex2i(800,600);

        glVertex2i(550,600);
        glVertex2i(600,800);

        glVertex2i(600,800);
        glVertex2i(650,600);



    glEnd();
    glFlush();
}

void myInit (void)
{
    //glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D(-100.0, 640.0,-100.0, 480.0);
    gluOrtho2D(0.0, 1000.0,0.0, 1000.0);
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("New Window for a square");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();

}
