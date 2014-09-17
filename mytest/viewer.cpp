#include "svl/SVL.h"

#include "gluit.h"
#include "svl/SVLgl.h"

int mainwin, viewer;
void content(void)
{
	Vec2 x, y;
	x = Vec2 (1, 1);
	y = Vec2 (3, -1);
	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin (GL_LINES);
	glVertex(x);
	glVertex(y);
	glEnd();
	glutSwapBuffers();
}

void display(void) {}
void reshape (int w, int h)
{
	glViewport(0,0,w,h);
	ViewerReshape (viewer);
}

void main (int argc, char** argv)
{
	glutInit (&argc, argv);
	glutInitWindowSize (400,400);
	glutInitDisplayMode (GLUT_RGB|GLUT_DOUBLE);
	mainwin = glutCreateWindow ("svl-test");

	glutDisplayFunc (display);
	glutReshapeFunc (reshape);

	viewer = ViewerNew (mainwin, 0,0,400,400, content);
	glutMainLoop();
}
