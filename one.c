
#include <stdio.h>

#include <emscripten/emscripten.h>

  EM_JS
  (void, console_log_int, (int x), 
  {
    console.log("Printing from C++:", x);
  });

//extern "C" {

	//extern void consoleLog(int whatev);

	EMSCRIPTEN_KEEPALIVE int main() 
	{
		console_log_int(5);
		printf("Helloan Worldy\n");
		return EM_ASM_INT({
			console.log($0);
			return $0;
		}, 5);
	}

//}