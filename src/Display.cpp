#include "Display.h"

bool Display::_bStarted = false;

Display::Display(std::string windowName, int width, int height) : _w(width), _h(height)
{
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);


	//mise en place du double buffering
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, true);

	_window = SDL_CreateWindow(windowName.c_str(), SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, _w, _h, SDL_WINDOW_OPENGL);
	if (_window == nullptr) {

	}
	SDL_SetRelativeMouseMode(SDL_FALSE);
	//SDL_SetWindowFullscreen(_window, SDL_WINDOW_FULLSCREEN);
	//cr�ation du contexte openGl avec notre fenetre et error checking
	_glContext = SDL_GL_CreateContext(_window);
	if (_glContext == nullptr) {
		std::cout << "Yo shit's gone wrong" << std::endl;
	}

	SDL_GL_SetSwapInterval(0);
}

void Display::swapBuffers() {
	SDL_GL_SwapWindow(_window);
}

void Display::clear() {
}


Display::~Display()
{
}

int Display::getW()
{
	return _w;
}

int Display::getH()
{
	return _h;
}
