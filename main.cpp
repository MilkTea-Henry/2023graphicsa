#include <GL/glut.h>
float X=0,Y=0;///02-4�]�wX Y
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///02-5�M�ӭI��
    glPushMatrix();///�ƥ�

        glTranslatef(X,Y,0);///�[�F�٤�����
        glutSolidTeapot(0.3);///�e�X�@�ӹ�߯���,�����j�p0.3
    glPopMatrix();///�٭�

    glutSwapBuffers();///��GLUT��e��swap�e����ܪ��a��

}
#include<stdio.h>
void mouse(int button,int state,int x,int y)
{///02-2�ƹ����j��
    ///printf("%d %d %d %d\n",button,state,x,y);
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;///02-3�ק�X Y(�f�M:����150�A��150.0 Y�n�t��)
}
int main(int argc, char *argv[])

{///�W���O�S�O��main()�禡 ���ܦh�Ѽ�

	glutInit(&argc, argv);///��GLUT�}�_��

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��ܳ]�w

    glutCreateWindow("GLUT Shapes");///�n�}����

	glutDisplayFunc(display);///�n��ܹ������禡

	glutMouseFunc(mouse);///02-1�[�J�ƹ�

	glutMainLoop();///�̫��main�j��,���b�̫᭱

}
