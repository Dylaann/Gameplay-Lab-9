#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Vector3.h>
#include <Matrix3.h>

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();

	float rotationAngle = 0.0001f;
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Clock clock;
	Time elapsed;

	Matrix3new m1;
	Matrix3new m2;
};

#endif