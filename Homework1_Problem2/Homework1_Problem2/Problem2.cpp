#include <algorithm>
#include "Draw.h"
#include "Circle.h"
#include "Lines.h"
#include "Square.h"
#include "Arrow.h"

Geometric **my_objects = new Geometric*[20];

void drawMyPainting()
{
	/* White background */
	std::fill_n(pixels, width*height * 3, 1.0f);

	// Inheritance 
	for (int i = 0; i < 20; i++)
		my_objects[i]->draw();

	// Icons
	Slash a(100, 650);
	a.draw();
	Slash aa(100, 320);
	aa.draw();

	Doughnut b(395, 685, 30);
	b.draw();
	Doughnut bb(395, 355, 30);
	bb.draw();

	Square c(615, 650, 720);
	c.draw();
	Square cc(615, 320, 390);
	cc.draw();

	Cross d(870, 650, 940, 720);
	d.draw();
	Cross dd(870, 320, 940, 390);
	dd.draw();

	DownArrow e(1160, 650, 720);
	e.draw();
	DownArrow ee(1160, 320, 390);
	ee.draw();

	RightArrow f(100, 530);
	f.draw();
	RightArrow ff(100, 190);
	ff.draw();

	A g(360, 500, 430, 570);
	g.draw();
	A gg(360, 155, 430, 225);
	gg.draw();

	Vertical h(650, 500, 570);
	h.draw();
	Vertical hh(650, 150, 220);
	hh.draw();

	LeftArrow i(867, 530);
	i.draw();
	LeftArrow ii(867, 190);
	ii.draw();

	UpArrow j(1160, 500, 570);
	j.draw();
	UpArrow jj(1160, 150, 220);
	jj.draw();

}

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "2016112145", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	double xpos, ypos;

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* White background */
		std::fill_n(pixels, width*height * 3, 1.0f);

		glfwGetCursorPos(window, &xpos, &ypos);
		
		/* Initialize surround Circle */
		for (int i = 0; i < 5; i++)
		{
			my_objects[i] = new Circle1(140 + 255 * i, 685, 60);
		}
		for (int i = 5, j = 0; i < 10, j < 5; i++, j++)
		{
			my_objects[i] = new Circle2(140 + 255 * j, 532, 60);
		}
		for (int i = 10, j = 0; i < 15, j < 5; i++, j++)
		{
			my_objects[i] = new Circle3(140 + 255 * j, 355, 60);
		}
		for (int i = 15, j = 0; i < 20, j < 5; i++, j++)
		{
			my_objects[i] = new Circle4(140 + 255 * j, 187, 60);
		}

		drawMyPainting();

		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	delete[] pixels;
	
	delete[] my_objects;

	glfwTerminate();
	return 0;
}