#include <string>
#include <SDL2/SDL.h>
#include <iostream>

class Display
{
public:
	Display(std::string windowName, int width, int height);
	void swapBuffers();
	void clear();
	~Display();
	int getW();
	int getH();
private:
	static bool _bStarted;
	int _w;
	int _h;
	SDL_Window* _window;
	SDL_GLContext _glContext;
};
