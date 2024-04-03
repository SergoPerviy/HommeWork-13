#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int h{}, w{};

	std::cout << "Введите ширину шахматного поля -> ";
	std::cin >> w;
	std::cout << "Введите высоту шахматного поля -> ";
	std::cin >> h;
	for (int i = 0; i <= h + 1; i++) {
		for (int j = 0; j <= w + 1; j++) {
			if (i == 0 || i == h + 1)
				std::cout << "* ";
			else if (j == 0 || j == w + 1)
				std::cout << "* ";
			else if ((j+i) % 2 == 0)
				std::cout << "# ";
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}

	return 0;
}